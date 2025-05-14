"GameMenu"
{
	"Pause_1"
	{
		"label" "#GameUI_GameMenu_ResumeGame"
		"command" "ResumeGame"
		"InGameOrder" "10"
		"OnlyInGame" "1"
		"Caps" "1"
	}
	"1"	
	{
		"label" "#GameUI_GameMenu_NewGame"
		"command" "OpenNewGameDialog"
		"InGameOrder" "20"
		"notmulti" "1"
		"NotInGame" "1"
		"Caps" "1"
	}
	"2"
	{
		"label" "#GameUI_GameMenu_LoadGame"
		"command" "OpenLoadGameDialog"
		"InGameOrder" "30"
		"notmulti" "1"
		"NotInGame" "1"
		"Caps" "1"
	}
	"Pause_3"
	{
		"label" "#GameUI_GameMenu_SaveGame"
		"command" "OpenSaveGameDialog"
		"InGameOrder" "40"
		"notmulti" "1"
		"OnlyInGame" "1"
		"Caps" "1"
	}
	"4"
	{
		"label" "#GameUI_GameMenu_Options"
		"command" "OpenOptionsDialog"
		"InGameOrder" "90"
		"NotInGame" "1"
		"Caps" "1"
	}
	"5"
	{
		"label" "#GameUI_GameMenu_Quit"
		"command" "Quit"
		"InGameOrder" "100"
		"NotInGame" "1"
		"Caps" "1"
	}	
}

