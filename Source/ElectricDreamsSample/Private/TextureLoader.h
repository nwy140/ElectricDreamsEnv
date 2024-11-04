#pragma once
/*
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TextureLoadingWidget.h"
#include "TextureLoader.generated.h"

UCLASS()
class ELECTRICDREAMSSAMPLE_API ATextureLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATextureLoader();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void UpdateLoadingProgress();
	void OnLoadingComplete();

private:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> LoadingWidgetClass;

	UPROPERTY()
	UTextureLoadingWidget* LoadingWidget;

	int32 TotalTextures;
	int32 TexturesLoaded;
	FTimerHandle LoadingProgressTimerHandle;
};
*/