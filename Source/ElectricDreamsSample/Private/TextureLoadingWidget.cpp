#include "TextureLoadingWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UTextureLoadingWidget::UpdateProgress(int32 PendingTextures, int32 TotalTextures)
{
    if (TextureProgressBar)
    {
        float ProgressPercent = 1.0f - ((float)PendingTextures / (float)TotalTextures);
        TextureProgressBar->SetPercent(ProgressPercent);
    }

    if (PendingTexturesText)
    {
        PendingTexturesText->SetText(FText::AsNumber(PendingTextures));
    }
}
