AtroposVivianHouse1F_MapScripts::
	.byte 0

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
 end
 
Text_AtroposVivianHouse1F_1:
	.string "你看起来脸色不错,\l"
	.string "比你刚来的时候好多了...$"
 
Text_AtroposVivianHouse1F_2:
	.string "你睡醒了...真是的,\n"
	.string "除了睡你还会干什么...\p"
	.string "对了,薇薇安出门收集食材了.\l"
	.string "不过这个点了她还没回来...{PAUSE 0x20}\l"
	.string "你去帮我看看她怎么样了,\l"
	.string "或许今天的晚餐会很丰富\l"
	.string "不过别随便走入草丛,\n"
	.string "随时会有野生的宝可梦扑向你.$"
