// Copyright trashbin


#include "UI/WidgetController/SkillMenuWidgetController.h"

#include "AuraGameplayTags.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/Data/AbilityInfo.h"
#include "Player/AuraPlayerState.h"

void USkillMenuWidgetController::BroadcastInitialValues()
{
	BroadcastAbilityInfo();
	SkillPointsChanged.Broadcast(GetAuraPS()->GetSpellPoints());
	//GetAuraPS()->GetSpellPoints()
}

void USkillMenuWidgetController::BindCallbacksToDependencies()
{
	GetAuraASC()->AbilityStatusChanged.AddLambda([this](const FGameplayTag& AbilityTag, const FGameplayTag& StatusTag, int32 NewLevel)
	{

		if (SelectedAbility.Ability.MatchesTagExact(AbilityTag))
		{
			SelectedAbility.Status = StatusTag;
			bool bEnableSpendPoints = false;
			bool bEnableEquip = false;
			ShouldEnableButtons(StatusTag, CurrentSpellPoints, bEnableSpendPoints, bEnableEquip);
			FString Description;
			FString NextLevelDescription;
			GetAuraASC()->GetDescriptionsByAbilityTag(AbilityTag, Description, NextLevelDescription);
			SkillGlobeSelectedDelegate.Broadcast(bEnableSpendPoints, bEnableEquip, Description, NextLevelDescription);
		}
		
		if (AbilityInfo)
		{
			FAuraAbilityInfo Info = AbilityInfo->FindAbilityInfoForTag(AbilityTag);
			Info.StatusTag = StatusTag;
			AbilityInfoDelegate.Broadcast(Info);
		}
	});

	GetAuraPS()->OnSpellPointsChangedDelegate.AddLambda([this](int32 SkillPoints)
	{
		SkillPointsChanged.Broadcast(SkillPoints);
		CurrentSpellPoints = SkillPoints;

		bool bEnableSpendPoints = false;
		bool bEnableEquip = false;
		ShouldEnableButtons(SelectedAbility.Status, CurrentSpellPoints, bEnableSpendPoints, bEnableEquip);
		FString Description;
		FString NextLevelDescription;
		GetAuraASC()->GetDescriptionsByAbilityTag(SelectedAbility.Ability, Description, NextLevelDescription);
		SkillGlobeSelectedDelegate.Broadcast(bEnableSpendPoints, bEnableEquip, Description, NextLevelDescription);
	});
}

void USkillMenuWidgetController::SkillGlobeSelected(const FGameplayTag& AbilityTag)
{
	const FAuraGameplayTags GameplayTags = FAuraGameplayTags::Get();
	const int32 SkillPoints = GetAuraPS()->GetSpellPoints();
	FGameplayTag AbilityStatus;

	bool bTagValid = AbilityTag.IsValid();
	bool bTagNone = AbilityTag.MatchesTag(FAuraGameplayTags::Get().Abilities_None);
	FGameplayAbilitySpec* AbilitySpec = GetAuraASC()->GetSpecFromAbilityTag(AbilityTag);
	bool bSpecValid = AbilitySpec != nullptr;
	
	
	if (!bTagValid || bTagNone || !bSpecValid )
	{
		AbilityStatus = GameplayTags.Abilities_Status_Locked;
	}
	else
	{
		AbilityStatus = GetAuraASC()->GetStatusFromSpec(*AbilitySpec);
	}

	SelectedAbility.Ability = AbilityTag;
	SelectedAbility.Status = AbilityStatus;
	bool bEnableSpendPoints = false;
	bool bEnableEquip = false;
	ShouldEnableButtons(AbilityStatus, SkillPoints, bEnableSpendPoints, bEnableEquip);
	FString Description;
	FString NextLevelDescription;
	GetAuraASC()->GetDescriptionsByAbilityTag(AbilityTag, Description, NextLevelDescription);
	SkillGlobeSelectedDelegate.Broadcast(bEnableSpendPoints, bEnableEquip, Description, NextLevelDescription);
}

void USkillMenuWidgetController::SpendPointButtonPressed()
{
	if (GetAuraASC())
	{
		GetAuraASC()->ServerSpendSkillPoint(SelectedAbility.Ability);

	}
}

void USkillMenuWidgetController::GlobeDeselect()
{
	SelectedAbility.Ability = FAuraGameplayTags::Get().Abilities_None;
	SelectedAbility.Status = FAuraGameplayTags::Get().Abilities_Status_Locked;

	SkillGlobeSelectedDelegate.Broadcast(false, false, FString(), FString());

}

void USkillMenuWidgetController::ShouldEnableButtons(const FGameplayTag& AbilityStatus, int32 SkillPoints,
                                                     bool& bShouldEnableSkillPointsButton, bool& bShouldEnableEquipButton)
{
	const FAuraGameplayTags GameplayTags = FAuraGameplayTags::Get();
	bShouldEnableSkillPointsButton = false;
	if (AbilityStatus.MatchesTagExact(GameplayTags.Abilities_Status_Equipped))
	{
		bShouldEnableEquipButton = false;
		bShouldEnableEquipButton = true;
		if (SkillPoints > 0)
		{
			bShouldEnableSkillPointsButton = true;
		}
	}
	else if (AbilityStatus.MatchesTagExact(GameplayTags.Abilities_Status_Eligible))
	{
		bShouldEnableEquipButton = false;
		if (SkillPoints > 0)
		{
			bShouldEnableSkillPointsButton = true;
		}
	}
	else if (AbilityStatus.MatchesTagExact(GameplayTags.Abilities_Status_Unlocked))
	{
		bShouldEnableEquipButton = true;
		if (SkillPoints > 0)
		{
			bShouldEnableSkillPointsButton = true;
		}
	}
}
