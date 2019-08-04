AtroposDavidiaCity_MapScripts::
	.byte 0

AtroposDavidiaCity_EventScript1::
	lock
	special SpawnCameraObject
	applymovement EVENT_OBJ_ID_CAMERA, movement_evil_camera
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_UNUSED_0x404E, 1
	release
	end

movement_evil_camera:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
