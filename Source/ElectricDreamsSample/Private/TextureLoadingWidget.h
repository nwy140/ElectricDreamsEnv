#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextureLoadingWidget.generated.h"

UCLASS()
class ELECTRICDREAMSSAMPLE_API UTextureLoadingWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Loading")
    void UpdateProgress(int32 PendingTextures, int32 TotalTextures);

    UPROPERTY(meta = (BindWidget))
    class UProgressBar* TextureProgressBar;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* PendingTexturesText;
};
