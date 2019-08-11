Darkness_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Darkness_MapScript1
	.byte 0
	
Darkness_MapScript1:
	map_script_2 VAR_OPENING_STATE, 0, Darkness_EventScript1
	map_script_2 VAR_OPENING_STATE, 1, Darkness_EventScript2
	map_script_2 VAR_OPENING_STATE, 2, Darkness_EventScript3
	map_script_2 VAR_OPENING_STATE, 3, Darkness_EventScript4
	map_script_2 VAR_OPENING_STATE, 5, Darkness_EventScript5
	map_script_2 VAR_OPENING_STATE, 6, Darkness_EventScript6
	map_script_2 VAR_OPENING_STATE, 7, Darkness_EventScript7
	.2byte 0

//开局对战剧情
Darkness_EventScript1::
	lockall
	delay 100
	msgbox Text_OP1, MSGBOX_DEFAULT
	playbgm MUS_B_DOME, 0
	msgbox Text_TimeAndPlace1, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 100
	warpsilent MAP_LACHESIS_BATTLE_DOME, 255, 8, 6
	releaseall
	end

//开局美和子被绑架剧情
Darkness_EventScript2::
	lockall
	delay 100
	msgbox Text_TimeAndPlace2, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 100
	warpsilent MAP_LACHESIS_BATTLE_DOME_HOUSE, 255, 4, 3
	releaseall
	end

//开局怀特漂流剧情
Darkness_EventScript3::
	lockall
	delay 100
	msgbox Text_OP2, MSGBOX_DEFAULT
	msgbox Text_TimeAndPlace3, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 100
	warpsilent MAP_ATROPOS_KOHLRABI_BEACH, 255, 11, 3
	releaseall
	end

//开局怀特被救剧情
Darkness_EventScript4::
	lockall
	delay 100
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 100
	setvar VAR_OPENING_STATE 4
	warpsilent MAP_ATROPOS_VIVIAN_HOUSE2F, 255, 6, 9
	releaseall
	end

//开局怀特醒来剧情
Darkness_EventScript5::
	lockall
	delay 100
	msgbox Text_OP3, MSGBOX_DEFAULT
	msgbox Text_TimeAndPlace4, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 100
	warpsilent MAP_ATROPOS_VIVIAN_HOUSE2F, 255, 6, 9
	releaseall
	end

//开局怀特失忆取名剧情
Darkness_EventScript6::
	lockall
	delay 30
	warpsilent MAP_ATROPOS_KOHLRABI_BEACH, 255, 17, 23
	releaseall
	end

//开局结束剧情
Darkness_EventScript7::
	lockall
	delay 30
	msgbox Text_TimeAndPlace5, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_ATROPOS_VIVIAN_HOUSE2F, 255, 6, 9
	releaseall
	end

/*
Text_OP1:
	.string "From the branch which seemed,\n"
	.string "so slender and fair,\n"
	.string "Came a harmful shaft.$"

Text_TimeAndPlace1:
	.string "Lachesis region, VesuviaCity,\n"
	.string "The Battle Dome,\n"
	.string "9th August 386...{PAUSE 0x50}$"

Text_TimeAndPlace2:
	.string "At night...$"

Text_OP2:
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0xa0}\n"
	.string "Fate... No one alive has ever escaped it.$"

Text_TimeAndPlace3:
	.string "Atropos Region, Malus Garden,\n"
	.string "The beach nearby,\n"
	.string "10th August 386...{PAUSE 0x50}$"

Text_OP3:
	.string "Dark grows the sun,\n"
	.string "and in summer soon.\n"
	.string "Come mighty storms,\n"
	.string "would you know yet more?$"

Text_TimeAndPlace4:
	.string "12nd November 386...{PAUSE 0x50}$"

Text_TimeAndPlace5:
	.string "Next day...{PAUSE 0x50}$"
*/

Text_OP1:
	.string "懈寄生娇柔而又美丽,\n"
	.string "茎杆纤细生长在平川。\n"
	.string "岂能料到细弱的树苗,\n"
	.string "居然制成致命的利箭。$"

Text_TimeAndPlace1:
	.string "拉刻西斯地区,符山市,\n"
	.string "对战巨蛋,\n"
	.string "代提历386年8月9日...{PAUSE 0x50}$"

Text_TimeAndPlace2:
	.string "夜半...$"

Text_OP2:
	.string "...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0x30} ...{PAUSE 0xa0}\n"
	.string "没有人能逃过命运...没有。$"

Text_TimeAndPlace3:
	.string "阿特波斯地区,海棠花园,\n"
	.string "附近海滩,\n"
	.string "386年8月10日...{PAUSE 0x50}$"

Text_OP3:
	.string "来年夏天太阳一片漆黑,\n"
	.string "天气反复无常坏得出奇。\n"
	.string "你可曾听说此事,\n"
	.string "或者还知道别的？$"

Text_TimeAndPlace4:
	.string "代提历386年11月12日...{PAUSE 0x50}$"

Text_TimeAndPlace5:
	.string "次日...{PAUSE 0x50}$"

