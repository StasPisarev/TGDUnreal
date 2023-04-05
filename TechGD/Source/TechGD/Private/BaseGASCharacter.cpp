// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGASCharacter.h"
#include "BaseAttributeSet.h"

// Sets default values
ABaseGASCharacter::ABaseGASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");

}

// Called when the game starts or when spawned
void ABaseGASCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComp) {
		BaseAttributeSetComp = AbilitySystemComp->GetSet<UBaseAttributeSet>();

		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHealthAttribute()).AddUObject(this, &ABaseGASCharacter::OnHealthChangedNative);

		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetManaAttribute()).AddUObject(this, &ABaseGASCharacter::OnManaChangedNative);

		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetStaminaAttribute()).AddUObject(this, &ABaseGASCharacter::OnStaminaChangedNative);
	}
	
}

// Called every frame
void ABaseGASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseGASCharacter::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (AbilitySystemComp) {
		if (HasAuthority() && AbilityToGet) {
			AbilitySystemComp->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
		}

		AbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}

UAbilitySystemComponent* ABaseGASCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComp;
}

void ABaseGASCharacter::GetHealthValues(float& Health, float& MaxHealth)
{
	Health = BaseAttributeSetComp->GetHealth();
	MaxHealth = BaseAttributeSetComp->GetMaxHealth();
}

void ABaseGASCharacter::GetManaValues(float& Mana, float& MaxMana)
{
	Mana = BaseAttributeSetComp->GetMana();
	MaxMana = BaseAttributeSetComp->GetMaxMana();
}

void ABaseGASCharacter::GetStaminaValues(float& Stamina, float& MaxStamina)
{
	Stamina = BaseAttributeSetComp->GetStamina();
	MaxStamina = BaseAttributeSetComp->GetMaxStamina();
}

void ABaseGASCharacter::OnHealthChangedNative(const FOnAttributeChangeData& Data)
{
	OnHealthChanged(Data.OldValue, Data.NewValue);
}

void ABaseGASCharacter::OnManaChangedNative(const FOnAttributeChangeData& Data)
{
	OnManaChanged(Data.OldValue, Data.NewValue);
}

void ABaseGASCharacter::OnStaminaChangedNative(const FOnAttributeChangeData& Data)
{
	OnStaminaChanged(Data.OldValue, Data.NewValue);
}

