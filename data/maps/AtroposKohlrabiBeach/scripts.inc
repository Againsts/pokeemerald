AtroposKohlrabiBeach_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AtroposKohlrabiBeach_MapScript1
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AtroposKohlrabiBeach_MapScript2
	.byte 0

AtroposKohlrabiBeach_MapScript1:
	map_script_2 VAR_OPENING_STATE, 2, AtroposKohlrabiBeach_MapScript_setxy
	map_script_2 VAR_OPENING_STATE, 6, AtroposKohlrabiBeach_MapScript_setxy2
	.2byte 0

AtroposKohlrabiBeach_MapScript_setxy::
	setobjectxy EVENT_OBJ_ID_PLAYER, 17, 23
	end
	
AtroposKohlrabiBeach_MapScript_setxy2::
	addobject 1
	setobjectxy 1, 17, 22
	turnobject 1, 4
	turnobject EVENT_OBJ_ID_PLAYER, 4
	end

AtroposKohlrabiBeach_MapScript2:
	map_script_2 VAR_OPENING_STATE, 2, AtroposKohlrabiBeach_Eventscript1
	map_script_2 VAR_OPENING_STATE, 6, AtroposKohlrabiBeach_Eventscript2
	.2byte 0

//薇薇采蘑菇
AtroposKohlrabiBeach_Eventscript1::
	lockall
	delay 50
	special SpawnCameraObject
	applymovement 1, movement_AtroposKohlrabiBeach1
	applymovement EVENT_OBJ_ID_CAMERA, movement_AtroposKohlrabiBeach1
	waitmovement 0
	playse SE_PIN
	delay 50
	applymovement 1, movement_AtroposKohlrabiBeach2
	applymovement EVENT_OBJ_ID_CAMERA, movement_AtroposKohlrabiBeach2
	waitmovement 0
	playse SE_PIN
	delay 50

//薇薇发现怀特
	applymovement 1, movement_AtroposKohlrabiBeach3
	waitmovement 0
	playse SE_PIN
	delay 50
	applymovement 1, movement_AtroposKohlrabiBeach4
	applymovement EVENT_OBJ_ID_CAMERA, movement_AtroposKohlrabiBeach4
	waitmovement 0
	delay 50
	msgbox Text_AtroposKohlrabiBeach1, MSGBOX_AUTOCLOSE
	special RemoveCameraObject
	setvar VAR_OPENING_STATE 3
	setflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 100
	warpsilent MAP_DARKNESS, 255, -1, -1
	releaseall
	end

//薇薇取名怀特剧情
AtroposKohlrabiBeach_Eventscript2::
	lockall
	delay 50
	applymovement 1, movement_AtroposKohlrabiBeach5
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiBeach6
	waitmovement 0
	msgbox Text_AtroposKohlrabiBeach2, MSGBOX_DEFAULT
	goto AtroposKohlrabiBeach_Eventscript3
	
AtroposKohlrabiBeach_Eventscript3::
	special NamingScreen
	waitstate
	msgbox Text_AtroposKohlrabiBeach3, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq AtroposKohlrabiBeach_Eventscript4
	compare VAR_RESULT, 0
	goto_if_eq AtroposKohlrabiBeach_Eventscript3
	end

AtroposKohlrabiBeach_Eventscript4::
	msgbox Text_AtroposKohlrabiBeach4, MSGBOX_DEFAULT
	setvar VAR_OPENING_STATE 7
	setflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_DARKNESS, 255, -1, -1
	releaseall
	end

movement_AtroposKohlrabiBeach1:
	walk_down
	walk_down
	walk_right
	walk_down
	walk_right
	walk_right
	delay_16
	emote_heart
	step_end

movement_AtroposKohlrabiBeach2:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	emote_heart
	step_end
	
movement_AtroposKohlrabiBeach3:
	emote_exclamation_mark
	step_end

movement_AtroposKohlrabiBeach4:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

movement_AtroposKohlrabiBeach5:
	face_down
	step_end
	
movement_AtroposKohlrabiBeach6:
	Face_up
	step_end

/*
Text_AtroposKohlrabiBeach1:
	.string "Vivian: Sir, are you okay sir?\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "Vivian: He's still breathing...\l"
	.string "... ...Help!$"

Text_AtroposKohlrabiBeach2:
	.string "Vivian: Here's where I found you.\l"
	.string "You almost lost your breath.\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "Vivian: Doctor say your brain is damaged\l"
	.string "You might recover your memory\l"
	.string "eventually, just take it easy.\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "Before this...\l"
	.string "Vivian: What shall I call you?$"

Text_AtroposKohlrabiBeach3:
	.string "Vivian: So it is {PLAYER}?$"
	
Text_AtroposKohlrabiBeach4:
	.string "Vivian: {PLAYER}!\n"
	.string "Please let me introduce myself again!\p"
	.string "My name is Vivian,\n"
	.string "nice to meet you.\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "Vivian: It gonna rain,\n"
	.string "let's go home...$"
*/

Text_AtroposKohlrabiBeach1:
	.string "薇薇安: 先生, 你还好吗?\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "薇薇安: 微弱的呼吸声...\l"
	.string "... ...救命啊!$"

Text_AtroposKohlrabiBeach2:
	.string "薇薇安: 我就是在这里找到你的.\l"
	.string "当时你差点没了呼吸.\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "薇薇安: 医生说你的头脑受到创伤,\l"
	.string "以后或许有机会恢复记忆\l"
	.string "别急着勉强自己.\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "对了...\l"
	.string "薇薇安: 我该怎么称呼你?$"

Text_AtroposKohlrabiBeach3:
	.string "薇薇安: 是{PLAYER}吗?$"
	
Text_AtroposKohlrabiBeach4:
	.string "薇薇安: {PLAYER}!\n"
	.string "请容许我在自我介绍一次!\p"
	.string "我是薇薇安,\n"
	.string "很高兴认识你.\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}\p"
	.string "薇薇安: 天色已黑,\n"
	.string "快回家吧...$"
