// Copyright trashbin

#pragma once

#include "CoreMinimal.h"
#include "AuraGameplayTags.h"
#include "GameplayTags.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "GameplayTagContainer.h"
#include "SkillMenuWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSkillGlobeSelectedSignature, bool, bSpendPointsButtonEnabled, bool, bEquipButtonEnabled, FString, DescriptionString, FString, NextLevelDescriptionString);

struct FSelectedAbility
{
	FGameplayTag Ability = FGameplayTag();
	FGameplayTag Status = FGameplayTag();
};

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API USkillMenuWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerStatChangedSignature SkillPointsChanged;

	UPROPERTY(BlueprintAssignable)
	FSkillGlobeSelectedSignature SkillGlobeSelectedDelegate;

	UFUNCTION(BlueprintCallable)
	void SkillGlobeSelected(const FGameplayTag& AbilityTag);

	UFUNCTION(BlueprintCallable)
	void SpendPointButtonPressed();
	
	UFUNCTION(BlueprintCallable)
	void GlobeDeselect();

private:

	static void ShouldEnableButtons(const FGameplayTag& AbilityStatus, int32 SkillPoints, bool& bShouldEnableSkillPointsButton, bool& bShouldEnableEquipButton);
	FSelectedAbility SelectedAbility = { FAuraGameplayTags::Get().Abilities_None, FAuraGameplayTags::Get().Abilities_Status_Locked};
	int32 CurrentSpellPoints = 0;
	
};
