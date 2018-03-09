// Copyright 2018 Matt Rimler Leve by UA Asset Store

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ORANGEROOM_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
private:
	UPROPERTY(EditAnywhere)
		float OpenAngle = -90.0f;
	
	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;
	
	UPROPERTY(EditAnywhere)
		AActor* ActorThatOpens; //remember pawn inherits from actor
};
