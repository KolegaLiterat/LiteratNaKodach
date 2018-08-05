extends Area2D


export (int) var speedMovement
export (int) var hand
var screensize
var animation = ""
var attack = false

func _ready():
	screensize = get_viewport_rect().size

func _physics_process(delta):
	
	var newAnimation = "idle"
	
	if Input.is_action_pressed("ui_up"):
		attack = true
	elif Input.is_action_pressed("ui_down"):
		attack = false
	
	
	print(attack)
	
	if attack == false:
		newAnimation = "idle"
	elif attack == true:
		newAnimation = "punchUp"
	
	if newAnimation != animation:
		animation = newAnimation
		$AnimatedSprite.play(animation)
		
	
	
	