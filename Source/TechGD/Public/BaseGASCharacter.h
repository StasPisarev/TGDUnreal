// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "BaseGASCharacter.generated.h"

class UBaseAttributeSet;

UCLASS()
class TECHGD_API ABaseGASCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseGASCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BaseCharacter")
		UAbilitySystemComponent* AbilitySystemComp;

	UFUNCTION(BlueprintCallable, Category = "BaseCharacter")
		void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BaseCharacter")
		const class UBaseAttributeSet* BaseAttributeSetComp;

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
		void GetHealthValues(float& Health, float& MaxHealth);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
		void GetManaValues(float& Mana, float& MaxMana);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
		void GetStaminaValues(float& Stamina, float& MaxStamina);

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnManaChangedNative(const FOnAttributeChangeData& Data);
	void OnStaminaChangedNative(const FOnAttributeChangeData& Data);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
		void OnHealthChanged(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
		void OnManaChanged(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
		void OnStaminaChanged(float OldValue, float NewValue);

};
