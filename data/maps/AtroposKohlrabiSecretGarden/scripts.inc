AtroposKohlrabiSecretGarden_MapScripts::
	.byte 0

AtroposKohlrabiSecretGarden_EventScript1::
	lock
	playbgm MUS_EVENT0, 1
	msgbox Text_AtroposKohlrabiSecretGarden1, MSGBOX_DEFAULT
	closemessage
	getplayerxy 0x8004 0x8005
	compare_var_to_value 0x8004, 13
	goto_if_eq AtroposKohlrabiSecretGarden_EventScript2
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiSecretGarden1
	waitmovement 0
	release
	end

AtroposKohlrabiSecretGarden_EventScript2::
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiSecretGarden2
	waitmovement 0
	release
	end

AtroposKohlrabiSecretGarden_EventScript3::
	lock
	getplayerxy 0x8004 0x8005
	compare_var_to_value VAR_0x8004, 10
	goto_if_eq AtroposKohlrabiSecretGarden_EventScript4
	compare_var_to_value VAR_0x8004, 11
	goto_if_eq AtroposKohlrabiSecretGarden_EventScript5
	msgbox Text_AtroposKohlrabiSecretGarden2, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiSecretGarden3
	waitmovement 0
	release
	end


AtroposKohlrabiSecretGarden_EventScript4::
	msgbox Text_AtroposKohlrabiSecretGarden3, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiSecretGarden4
	waitmovement 0
	release
	end
	
AtroposKohlrabiSecretGarden_EventScript5::
	msgbox Text_AtroposKohlrabiSecretGarden3, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiSecretGarden5
	waitmovement 0
	release
	end
	
AtroposKohlrabiSecretGarden_EventScript6::
	lock
	special ChooseStarter
	waitstate
	hideobjectat 2, MAP_ATROPOS_KOHLRABI_SECRET_GARDEN
	hideobjectat 3, MAP_ATROPOS_KOHLRABI_SECRET_GARDEN
	setobjectxy 1, 10, 13
	turnobject 1, 1
	msgbox Text_AtroposKohlrabiSecretGarden4, MSGBOX_DEFAULT
	setvar VAR_RESCUE_VIVIAN, 2
	setflag FLAG_RESCUE_VIVIAN
	setflag FLAG_SYS_POKEMON_GET
	closemessage
	warp MAP_ATROPOS_VIVIAN_HOUSE1F, 255, 9, 9
	release
	end

movement_AtroposKohlrabiSecretGarden1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_left
	step_end

movement_AtroposKohlrabiSecretGarden2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_left
	walk_fast_left
	step_end

movement_AtroposKohlrabiSecretGarden3:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end
	
movement_AtroposKohlrabiSecretGarden4:
	walk_fast_up
	face_left
	step_end
	
movement_AtroposKohlrabiSecretGarden5:
	walk_fast_left
	step_end
	
Text_AtroposKohlrabiSecretGarden1:
	.string "救命啊!!!$"

Text_AtroposKohlrabiSecretGarden2:
	.string "薇薇安: 危险!别过来!$"
	
Text_AtroposKohlrabiSecretGarden3:
	.string "薇薇安: {PLAYER},别丢下我!$"

Text_AtroposKohlrabiSecretGarden4:
	.string "薇薇安: 太厉害了,{PLAYER}!\n"
	.string "你拯救了我!\p"
	.string "我刚刚不小心进入草丛\n"
	.string "就被宝可梦袭击了...\p"
	.string "还好{PLAYER}及时赶到,不然我就被...\l"
	.string "咳咳,我们快回去吧,\n"
	.string "爸爸在等我们回家呢$"
