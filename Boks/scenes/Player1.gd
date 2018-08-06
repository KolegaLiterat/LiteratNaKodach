extends Area2D


export (int) var speedMovement

var screensize
var animation = ""

enum playerState {STATE_IDLE, 		#0
					STATE_WALK, 	#1
					STATE_WALKBACK, #2
					STATE_PUNCH, 	#3
					STATE_PUNCHUP, 	#4
					STATE_BLOCK, 	#5
					STATE_HURT 		#6
					STATE_DIZZY, 	#7
					SATE_KO}		#8

func _ready():
	screensize = get_viewport_rect().size

func _process(delta):
	
	var newAnimation = "idle"
	playerState = 0
	
	if Input.is_action_pressed("player1right"):
		playerState = 1
	elif Input.is_action_pressed("player1left"):
		playerState = 2
	elif Input.is_action_pressed("player1attack"):
		playerState = 3
	elif Input.is_action_pressed("player1special"):
		playerState = 4
	elif Input.is_action_pressed("player1block"):
		playerState = 5
	
	print(playerState)
	
	if newAnimation != animation:
		animation = newAnimation
		$AnimatedSprite.play(animation)
		emit_signal("animation_finished")
