LachesisBattleDomeHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LachesisBattleDomeHouse_MapScript1
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LachesisBattleDomeHouse_MapScript2
	.byte 0

LachesisBattleDomeHouse_MapScript1:
	map_script_2 VAR_OPENING_STATE, 1, LachesisBattleDomeHouse_Eventscript1
	.2byte 0

LachesisBattleDomeHouse_MapScript2:
	map_script_2 VAR_OPENING_STATE, 1, LachesisBattleDomeHouse_Eventscript0
	.2byte 0
	
LachesisBattleDomeHouse_Eventscript0::
	turnobject EVENT_OBJ_ID_PLAYER, 1
	end

LachesisBattleDomeHouse_Eventscript1::
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, movement_LachesisBattleDomeHouse1
	waitmovement 0
	msgbox Text_LachesisBattleDomeHouse1, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, movement_LachesisBattleDomeHouse2
	waitmovement 0
	playbgm MUS_EVENT0, 1
	msgbox Text_LachesisBattleDomeHouse2, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, movement_LachesisBattleDomeHouse2
	waitmovement 0
	msgbox Text_LachesisBattleDomeHouse3, MSGBOX_DEFAULT
	delay 80
	setvar VAR_OPENING_STATE 2
	setflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_DARKNESS, 255, -1, -1
	releaseall
	end

movement_LachesisBattleDomeHouse1:
	face_up
	step_end

movement_LachesisBattleDomeHouse2:
	emote_question_mark
	delay_16
	step_end
	
Text_LachesisBattleDomeHouse1:
	.string "...{PAUSE 0x30}...{PAUSE 0x30}...{PAUSE 0x30}...{PAUSE 0x30}\l"
	.string "Miwako: Honey,\l"
	.string "you look great today on TV,\n"
	.string "you become Jess' star now.\l"
	.string "White: Glad to know that...\l"
	.string "Does she asleep?\p"
	.string "Miwako: She was tired after all,\n"
	.string "she can't wait for tomorrow,\l"
	.string "she know you will win untill last.\p"
	.string "White: Yeah, I promised her...{PAUSE 0x50}\p"
	.string "Miwako: Honey! \l"
	.string "There is someone outside!\l"
	.string "Ahh!!!\l"
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30}$"
	
Text_LachesisBattleDomeHouse2:
	.string "White: Miwako!?Miwako!?\n"
	.string "...{PAUSE 0x20}...{PAUSE 0x20}...{PAUSE 0x20}...{PAUSE 0x20}\p"
	.string "??????: Skuld,{PAUSE 0x20}\l"
	.string "You know where to go...\l"
	.string "If you want her alive...$"

Text_LachesisBattleDomeHouse3:
	.string "White: That sound...{PAUSE 0x20}\l"
	.string "Why would you do that...?\l"	
	.string "...{PAUSE 0x20}\l"
	.string "??????: You deserve this, Skuld...$"

/*
Text_LachesisBattleDomeHouse1:
	.string "...{PAUSE 0x30}...{PAUSE 0x30}...{PAUSE 0x30}...{PAUSE 0x30}\l"
	.string "美和子:亲爱的,\l"
	.string "今天你在电视上最后那场对战,\n"
	.string "小芊她说白的样子帅爆了。\l"
	.string "白:是吗？那真是太好了!\p"
	.string "小芊她睡了吧。\l"
	.string "美和子:是啊,她很期待明天吧,\l"
	.string "白把冠军杯捧回家的时候。\l"
	.string "白:嗯,势在必得。\l"
	.string "我承诺过她......{PAUSE 0x50}\p"
	.string "美和子:白！白！外边有人！$"

Text_LachesisBattleDomeHouse2:
	.string "白:美和子！美和子！美和子！\n"
	.string "...{PAUSE 0x20}...{PAUSE 0x20}...{PAUSE 0x20}...{PAUSE 0x20}\l"
	.string "??????:斯古尔特,\l"
	.string "去克罗多的尽头吧！\l"
	.string "如果你还想要你的所爱之人。$"

Text_LachesisBattleDomeHouse3:
	.string "白:这声音...{PAUSE 0x20}\l"
	.string "难道说你是...{PAUSE 0x20}？\l"	
	.string "...{PAUSE 0x10}\l"
	.string "??????:真不愧是斯古尔特呢...$"
*/
