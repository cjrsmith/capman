// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Food.generated.h"

UCLASS()
class CAPMAN_API AFood : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFood();
	UPROPERTY(VisibleAnywhere, Category = "Food")
		class UStaticMeshComponent* FoodMesh;

	UPROPERTY(VisibleAnywhere, Category = "Food")
		class UBoxComponent* OverlapBox;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
