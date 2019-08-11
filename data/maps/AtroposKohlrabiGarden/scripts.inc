AtroposKohlrabiGarden_MapScripts::
	.byte 0

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

AtroposKohlrabiGarden_EventScript2::
 applymovement EVENT_OBJ_ID_PLAYER, movement_AtroposKohlrabiGarden1
 waitmovement 0
 release
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

Text_AtroposKohlrabiGarden_1:
 .string "亚伯汗说过,草丛非常危险...$"
 
