AtroposVivianHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AtroposVivianHouse2F_MapScript1
	.byte 0

AtroposVivianHouse2F_MapScript1:
	map_script_2 VAR_OPENING_STATE, 4, AtroposVivianHouse2F_EventScript1
	map_script_2 VAR_OPENING_STATE, 5, AtroposVivianHouse2F_EventScript2
	.2byte 0

AtroposVivianHouse2F_EventScript1::
	lockall
	msgbox Text_AtroposVivianHouse2F_1, MSGBOX_DEFAULT
	delay 50
	setflag FLAG_TEXTBOX_MIDDLE_BLACK
	setvar VAR_OPENING_STATE 5
	delay 80
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x021
	warpsilent MAP_DARKNESS, 255, -1, -1
	releaseall
	end

AtroposVivianHouse2F_EventScript2::
	msgbox Text_AtroposVivianHouse2F_2, MSGBOX_DEFAULT
	applymovement 1, movement_AtroposVivianHouse2F
	waitmovement 0
	playse SE_PIN
	delay 30
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposVivianHouse2F_2
	waitmovement 0
	msgbox Text_AtroposVivianHouse2F_3, MSGBOX_DEFAULT
	setvar VAR_OPENING_STATE 6
	removeobject 1
	setflag FLAG_UNUSED_0x022
	warpsilent MAP_DARKNESS, 255, -1, -1
	releaseall
	end

movement_AtroposVivianHouse2F:
	emote_exclamation_mark
	step_end

movement_AtroposVivianHouse2F_2:
	face_right
	step_end

Text_AtroposVivianHouse2F_1:
	.string "Doctor: He's stable now...\l"
	.string "if Vivian found him late,\n"
	.string "his life could be in danger\p"
	.string "Abraham: Thanks doctor,\l"
	.string "Hope this young man wake up soon...{PAUSE 0x20} \p"
	.string "Vivian: Father, how did him\n"
	.string "get into the water?\p"
	.string "Abraham: No idea, \n"
	.string "strange things happened.\l"
	.string "Hmm...\l"
	.string "He wears like foreigner...\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}$"
		
Text_AtroposVivianHouse2F_2:
	.string "White: Ahh!$"
	
Text_AtroposVivianHouse2F_3:
	.string "Vivian: Ah you wake up!\l"
	.string "It has been three month...\l"
	.string "Three...{PAUSE 0x30} month?\n"
	.string "... {PAUSE 0x30} ...{PAUSE 0x30}Who...{PAUSE 0x50}am I?...\p"
	.string "Vivian: You...\n"
	.string "You don't remember your name?\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}$"
