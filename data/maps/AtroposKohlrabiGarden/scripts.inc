AtroposKohlrabiGarden_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AtroposKohlrabiGarden_MapScript1
	.byte 0

AtroposKohlrabiGarden_MapScript1:
	map_script_2 VAR_RESCUE_VIVIAN, 3, AtroposKohlrabiGarden_EventScript9
	.2byte 0

AtroposKohlrabiGarden_EventScript1::
 lock
 msgbox Text_AtroposKohlrabiGarden_1, MSGBOX_AUTOCLOSE
 getplayerxy VAR_0x8004, VAR_0x8005
 compare_var_to_value VAR_0x8004, 1
 goto_if_eq  AtroposKohlrabiGarden_EventScript2
 applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiGarden2
 waitmovement 0
 release
 end

AtroposKohlrabiGarden_EventScript9::
 lock
 bufferleadmonspeciesname 0
 msgbox Text_AtroposKohlrabiGarden_9, MSGBOX_AUTOCLOSE
 applymovement 3, movement_AtroposKohlrabiGarden3
 waitmovement 0
 setvar VAR_RESCUE_VIVIAN, 4
 release
 end

AtroposKohlrabiGarden_EventScript2::
 applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiGarden1
 waitmovement 0
 setflag FLAG_HIDE_VIVIAN_OUTSIDE
 setvar VAR_RESCUE_VIVIAN, 4
 release
 end

AtroposKohlrabiGarden_EventScript_3::
	msgbox Text_AtroposKohlrabiGarden_3, MSGBOX_SIGN
	end
	
AtroposKohlrabiGarden_EventScript_4::
	msgbox Text_AtroposKohlrabiGarden_4, MSGBOX_SIGN
	end
	
AtroposKohlrabiGarden_EventScript_5::
	msgbox Text_AtroposKohlrabiGarden_5, MSGBOX_SIGN
	end
	
AtroposKohlrabiGarden_EventScript_6::
	msgbox Text_AtroposKohlrabiGarden_6, MSGBOX_SIGN
	end
	
AtroposKohlrabiGarden_EventScript_7::
	msgbox Text_AtroposKohlrabiGarden_7, MSGBOX_NPC
	end
	
AtroposKohlrabiGarden_EventScript_8::
	msgbox Text_AtroposKohlrabiGarden_8, MSGBOX_NPC
	end

movement_AtroposKohlrabiGarden1:
 lock_facing_direction
 walk_right
 unlock_facing_direction
 step_end
 
movement_AtroposKohlrabiGarden2:
 lock_facing_direction
 walk_left
 unlock_facing_direction
 step_end

movement_AtroposKohlrabiGarden3:
 walk_left
 walk_left
 walk_left
 walk_left
 walk_left
 walk_left
 walk_left
 walk_left
 set_invisible
 step_end
 
Text_AtroposKohlrabiGarden_1:
 .string "亚伯汗说过,草丛非常危险...$"
	
Text_AtroposKohlrabiGarden_3:
	.string "海棠镇$"

Text_AtroposKohlrabiGarden_4:
	.string "薇薇安的家$"
	
Text_AtroposKohlrabiGarden_5:
	.string "邻居的家$"

Text_AtroposKohlrabiGarden_6:
	.string "测试版通告:\l目前版本号:3,\n作者:他之境界,8月12发布\p目前这个作品尚未完成,\l诚心邀请,地图绘制,\n对战配置,\l界面设计,翻译大佬前来,\p群号:676188019,先此致谢。$"

Text_AtroposKohlrabiGarden_7:
	.string "打开电脑就可以存取\n物品和宝可梦了。\l科学的力量真伟大!$"
	
Text_AtroposKohlrabiGarden_8:
	.string "我想到其它城市玩,\n但是没有宝可梦\l就不能跨过草丛了!$"

Text_AtroposKohlrabiGarden_9:
	.string "薇薇安: 你终于醒了!\l"
	.string "感觉{PLAYER}一直都在睡觉呢...\n"
	.string "事不宜迟,我们快点去找塔克博士吧!\p"
	.string "塔克博士就在隔壁的玉兰镇!\n"	
	.string "首先我们要穿越草丛才行,\l"	
	.string "不过这次{PLAYER}不需要担心我了,\l"	
	.string "我会特别小心的,{STR_VAR_1}也会保护你.\l"	
	.string "所以赶紧出发吧!$"	
