extends Area2D

export (int) var speedMovement
var screensize

func _ready():
	screensize = get_viewport_rect().size

func _process(delta):
	var velocity = Vector2()
	
	if Input.is_action_pressed("ui_right"):
		position.x += speedMovement
		$AnimatedSprite.play("walk")
		
	elif Input.is_action_pressed("ui_left"):
		position.x -= speedMovement
		$AnimatedSprite.play("walkBack")
	else:
		$AnimatedSprite.play("idle")
	
	position += velocity * delta
	position.x = clamp(position.x, 0, screensize.x)
	
func playerAttack():
	var 
	
	if Input.is_action_pressed("player1attack"):
		$AnimatedSprite.play("
	