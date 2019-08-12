AtroposVivianHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AtroposVivianHouse1F_MapScript1
	.byte 0

AtroposVivianHouse1F_MapScript1:
	map_script_2 VAR_RESCUE_VIVIAN, 2, AtroposVivianHouse1F_EventScript3
	.2byte 0

AtroposVivianHouse1F_EventScript3::
 lock
 turnobject 2, 3
 turnobject EVENT_OBJ_ID_PLAYER, 4
 msgbox Text_AtroposVivianHouse1F_3, MSGBOX_AUTOCLOSE
 setvar VAR_RESCUE_VIVIAN, 3
 setflag FLAG_TEXTBOX_MIDDLE_BLACK
 setflag FLAG_HIDE_VIVIAN
 clearflag FLAG_HIDE_VIVIAN_OUTSIDE
 warpsilent MAP_DARKNESS, 255, -1, -1
 release
 end

AtroposVivianHouse1F_EventScript1::
 lock
 faceplayer
 compare VAR_RESCUE_VIVIAN, 0
 goto_if_eq AtroposVivianHouse1F_EventScript2
 msgbox Text_AtroposVivianHouse1F_1, MSGBOX_AUTOCLOSE
 release
 end

AtroposVivianHouse1F_EventScript2::
 msgbox Text_AtroposVivianHouse1F_2, MSGBOX_NPC
 setvar VAR_RESCUE_VIVIAN, 1
 setflag FLAG_HIDE_VIVIAN_OUTSIDE
 end

AtroposVivianHouse1F_EventScript4::
 lock
 msgbox Text_AtroposVivianHouse1F_4, MSGBOX_AUTOCLOSE
 applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposVivianHouse1F1
 waitmovement 0
 release
 end
 
movement_AtroposVivianHouse1F1:
 lock_facing_direction
 walk_up
 unlock_facing_direction
 step_end

Text_AtroposVivianHouse1F_4:
	.string "先向亚伯汗问好吧...$"
 
Text_AtroposVivianHouse1F_1:
	.string "亚伯汗: 你看起来脸色不错,\l"
	.string "比你刚来的时候好多了...$"
 
Text_AtroposVivianHouse1F_2:
	.string "亚伯汗: 你睡醒了...真是的,\n"
	.string "除了睡你还会干什么...\p"
	.string "对了,薇薇安出门收集食材了.\l"
	.string "不过这个点了她还没回来...{PAUSE 0x20}\l"
	.string "你去帮我看看她怎么样了,\l"
	.string "或许今天的晚餐会很丰富\l"
	.string "不过别随便走入草丛,\n"
	.string "随时会有野生的宝可梦扑向你.$"

Text_AtroposVivianHouse1F_3:
	.string "薇薇安: {PLAYER},感谢你今天救了我,\n"
	.string "如果我没慌张落下我的背包,\l"
	.string "也就不需要幸苦{PLAYER}了...\n"
	.string "...{PAUSE 0x20} ...{PAUSE 0x20} ...{PAUSE 0x20} ...{PAUSE 0x20}\p"
	.string "哼...{PAUSE 0x20}我觉得{PLAYER}你\n"
	.string "不像第一次命令宝可梦...\l"
	.string "或许{PLAYER}之前是个专业的训练师？\p"
	.string "哼...{PAUSE 0x20}既然这样,\n"
	.string "{PLAYER}明早和我一起去找塔克博士,\l"
	.string "也许他会对你有印象...$"
