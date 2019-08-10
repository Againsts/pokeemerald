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
	
Darkness_EventScript1::
	lockall
	delay 100
	playbgm MUS_B_DOME, 0
	msgbox Text_Epic_1, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_LACHESIS_BATTLE_DOME, 255, 8, 6
	releaseall
	end

Darkness_EventScript2::
	lockall
	msgbox Text_Darkness_1, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_LACHESIS_BATTLE_DOME_HOUSE, 255, 4, 3
	releaseall
	end

Darkness_EventScript3::
	lockall
	delay 60
	msgbox Text_Epic_2, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_ATROPOS_KOHLRABI_BEACH, 255, 9, 8
	releaseall
	end

Darkness_EventScript4::
	lockall
	delay 60
	msgbox Text_Epic_3, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	setvar VAR_OPENING_STATE 4
	warpsilent MAP_ATROPOS_VIVIAN_HOUSE2F, 255, 6, 9
	releaseall
	end


Darkness_EventScript5::
	lockall
	delay 200
	delay 200
	msgbox Text_Epic_4, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	delay 200
	warpsilent MAP_ATROPOS_VIVIAN_HOUSE2F, 255, 6, 9
	releaseall
	end
	
Darkness_EventScript6::
	lockall
	delay 30
	warpsilent MAP_ATROPOS_KOHLRABI_BEACH, 255, 20, 30
	releaseall
	end

Darkness_EventScript7::
	lockall
	delay 30
	msgbox Text_Epic_5, MSGBOX_DEFAULT
	clearflag FLAG_TEXTBOX_MIDDLE_BLACK
	warpsilent MAP_ATROPOS_VIVIAN_HOUSE2F, 255, 6, 9
	releaseall
	end


Text_Epic_1:
	.string "懈寄生娇柔而又美丽,\l"
	.string "茎杆纤细生长在平川。\l"
	.string "岂能料到细弱的树苗,\l"
	.string "居然制成致命的利箭。{PAUSE 0x30}\p"
	.string "-拉刻西斯, 符山市竞技场-{PAUSE 0x30}\l"
	.string "-386年8月9日-{PAUSE 0x30}\p"
	.string "-冠军杯半决赛,正午-{PAUSE 0x30}$"

Text_Darkness_1:
	.string "-当晚-{PAUSE 0x30}$"

Text_Epic_2:
	.string "。。。{PAUSE 0x30} 。。。{PAUSE 0x30} 。。。{PAUSE 0x30} 。。。{PAUSE 0xa0}\p"
	.string "我看见太阳放射出最后微光,\l"
	.string "在我感觉中她将一去不复返。\l"
	.string "-阿特波斯东部,海棠镇附近-{PAUSE 0x30}\p"
	.string "-386年8月10日-{PAUSE 0x50}$"

Text_Epic_3:
	.string "来年夏天太阳一片漆黑,\n"
	.string "天气反复无常坏得出奇。\l"
	.string "你可曾听说此事,\l"
	.string "或者还知道别的。{PAUSE 0x30}$"

Text_Epic_4:
	.string "-387年12月24日-{PAUSE 0x50}$"

Text_Epic_5:
	.string "-翌日-{PAUSE 0x50}$"
