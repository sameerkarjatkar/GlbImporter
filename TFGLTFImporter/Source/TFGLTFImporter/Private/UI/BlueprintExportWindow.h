#pragma once

#include "Framework/Application/SlateApplication.h"
#include "Widgets/SCompoundWidget.h"

class SBlueprintExportWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SBlueprintExportWindow) {}

	SLATE_ARGUMENT(UObject*, ExportOptions);
	SLATE_ARGUMENT(TSharedPtr<SWindow>, WidgetWindow);
	//SLATE_ARGUMENT(FText, FileNameText);
	//SLATE_ARGUMENT(FText, FilePathText);
	//SLATE_ARGUMENT(FText, PackagePathText);
	SLATE_END_ARGS();

public:
	void Construct(const FArguments& InArgs);

	virtual bool SupportsKeyboardFocus() const override
	{
		return true;
	}
	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) override;

	/*bool ShouldImport() const;*/

private:
	FReply OnExport();
	FReply OnCancel();

private:
	UObject* ExportOptions;
	TWeakPtr<SWindow> Window;
	bool              bShouldExport;
};

//inline bool SBlueprintExportWindow::ShouldImport() const
//{
//	return bShouldImport;
//}
