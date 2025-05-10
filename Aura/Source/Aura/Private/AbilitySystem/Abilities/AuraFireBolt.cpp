// Copyright trashbin


#include "AbilitySystem/Abilities/AuraFireBolt.h"
#include "Aura/Public/AuraGameplayTags.h"


FString UAuraFireBolt::GetDescription(int32 Level)
{
	
	const int32 Damage = DamageTypes[FAuraGameplayTags::Get().Damage_Fire].GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	if (Level == 1)
	{
		return FString::Printf(TEXT(
			//Title
			"<Title>FIRE BOLT</>\n\n"

			//Details
			"<Small>Level: </><Level>%d</>\n"
			//ManaCost
			"<Small>ManaCost: </> <ManaCost>%.1f</>\n"
			//Cooldown
			"<Small>Cooldown: </> <Cooldown>%.1f</>\n\n"

			//Description
			"<Default>Launches a bolt of fire, "
			"exploding on impact dealing </>"
			"<Damage>%d</><Default> fire damage with"
			" a chance to burn</>"
			),

			//Values
			Level,
			ManaCost,
			Cooldown,
			Damage);
	}
	else
	{
		return FString::Printf(TEXT(
			//Title
			"<Title>FIRE BOLT</>\n\n"

			//Level
			"<Small>Level: </><Level>%d</>\n"
			//ManaCost
			"<Small>ManaCost: </> <ManaCost>%.1f</>\n"
			//Cooldown
			"<Small>Cooldown: </> <Cooldown>%.1f</>\n\n"
			//Number of Firebolts

			//Description
			"<Default>Launches %d bolts of fire, "
			"exploding on impact dealing </>"
			"<Damage>%d</><Default> fire damage with"
			" a chance to burn</>"
			),

			//Values
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles),
			Damage);
	}
}

FString UAuraFireBolt::GetNextLevelDescription(int32 Level)
{
	const int32 Damage = GetDamageByDamageType(Level, FAuraGameplayTags::Get().Damage_Fire);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);

	return FString::Printf(TEXT(
			//Title
			"<Title>FIRE BOLT</>\n\n"

			//Level
			"<Small>Level: </><Level>%d</>\n"
			//ManaCost
			"<Small>ManaCost: </> <ManaCost>%.1f</>\n"
			//Cooldown
			"<Small>Cooldown: </> <Cooldown>%.1f</>\n\n"
			//Number of Firebolts
			"<Default>Launches %d bolts of fire, "
			"exploding on impact dealing </>"
			
			//Description
			"<Damage>%d</><Default> fire damage with"
			" a chance to burn</>"
			),

			//Values
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles),
			Damage);

}