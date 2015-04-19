#pragma once

#include "SlateBasics.h"
#include "EditorStyle.h"
#include "PluginCreatorStyle.h"

#define LOCTEXT_NAMESPACE "PluginCreator"

class FPluginCreatorCommands : public TCommands<FPluginCreatorCommands>
{
public:

	FPluginCreatorCommands()
		: TCommands<FPluginCreatorCommands>(TEXT("PCPlugin"), NSLOCTEXT("Contexts", "PCPlugin", "Plugin Creator Plugin"), NAME_None, FPluginCreatorStyle::GetStyleSetName())
	{
		}

	virtual void RegisterCommands() override
	{
		UI_COMMAND(OpenPluginCreator, "Plugin Creator", "Bring up plugin creator window", EUserInterfaceActionType::Button, FInputGesture());
	}

	TSharedPtr< FUICommandInfo > OpenPluginCreator;

};

#undef LOCTEXT_NAMESPACE