LachesisBattleDome_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LachesisBattleDome_MapScript1
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LachesisBattleDome_MapScript2
	.byte 0

LachesisBattleDome_MapScript1:
	map_script_2 VAR_OPENING_STATE, 0, LachesisBattleDome_MapScript_setxy
	.2byte 0

LachesisBattleDome_MapScript2:
	map_script_2 VAR_OPENING_STATE, 0, LachesisBattleDome_EventScript1
	.2byte 0

LachesisBattleDome_MapScript_setxy::
	setobjectxy EVENT_OBJ_ID_PLAYER, 13, 9
	hideobjectat EVENT_OBJ_ID_PLAYER, MAP_LACHESIS_BATTLE_DOME
	hideobjectat 10, MAP_LACHESIS_BATTLE_DOME
	end

LachesisBattleDome_EventScript1::
	lockall
	delay 60
	special LoadPlayerParty
	msgbox Text_LachesisBattleDome_1, MSGBOX_DEFAULT
	showobjectat 10, MAP_LACHESIS_BATTLE_DOME
	applymovement 10, movement_init_faceright
	waitmovement 0
	playse SE_DENDOU
	delay 60
	msgbox Text_LachesisBattleDome_2, MSGBOX_DEFAULT
	special SpawnCameraObject
	showobjectat EVENT_OBJ_ID_PLAYER, MAP_LACHESIS_BATTLE_DOME
	applymovement EVENT_OBJ_ID_PLAYER, movement_init_faceleft
	waitmovement 0
	playse SE_DENDOU
	delay 60
	special RemoveCameraObject
	msgbox Text_LachesisBattleDome_3, MSGBOX_DEFAULT
	playse SE_DENDOU
	delay 60
	special SavePlayerParty
	special CreateWhiteSkuldParty
	
	//setrespawn HEAL_LOCATION_MAVROSFLOGA_COLOSSEUM
	//trainerbattle_no_intro TRAINER_LANCE_1, Text_LachesisBattleDome_5
	msgbox Text_LachesisBattleDome_6, MSGBOX_AUTOCLOSE
	playse SE_DENDOU
	delay 80
	
	special SpawnCameraObject
	applymovement EVENT_OBJ_ID_CAMERA, movement_evil_camera
	waitmovement 0
	msgbox Text_LachesisBattleDome_7, MSGBOX_AUTOCLOSE
	special RemoveCameraObject
	special LoadPlayerParty
	setvar VAR_OPENING_STATE 1
	setflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_DARKNESS, 255, -1, -1
	releaseall
	end

movement_init_faceleft:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

movement_init_faceright:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
	
movement_evil_camera:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end
	
Text_LachesisBattleDome_1:
	.string "...{PAUSE 0x20} ...{PAUSE 0x20} ...{PAUSE 0x20} ...{PAUSE 0x20}\l"
	.string "Host: Today...The Semi-finaaaal\l"
	.string "of The Lachesis Champion Cup!\l"
	.string "On my left... The man come from Wavel City!\l"
	.string "The man who show off \n"
	.string "his power over the group stage!\p"
	.string "Laaaaaance{PAUSE 0x30}  Huginn!$"

Text_LachesisBattleDome_2:
	.string "On my right...\n"
	.string "The unexpected winner of last quater...\l"
	.string "The dark horse from Rhondon Town,\p"
	.string "Whiiiiiiite{PAUSE 0x30} Skuld!$"

Text_LachesisBattleDome_3:
	.string "Winner stays!\l"
	.string "Loser falls!\l"
	.string "Who will take the pride of win?$"
	.string "Let us witness!$"
	
Text_LachesisBattleDome_5:
	.string "You deserve this, Skuld!$"

Text_LachesisBattleDome_6:
	.string "Host: It is over!\l"
	.string "The dark horse of the champion cup,\n"
	.string "win the battle with no doubt,\p"
	.string "Whiiiiiite{PAUSE 0x30} Skuld!$"

Text_LachesisBattleDome_6_5:
	.string "Tomorrow, he will face our unbeaten myth,\l"
	.string "We might see the born of the new champion!\n"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}$"
	
Text_LachesisBattleDome_7:
	.string "??????: The doom will come for you, Skuld.\n"
	.string "I wish you good luck...\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}$"
