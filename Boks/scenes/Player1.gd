extends Area2D

export (int) var speedMovement
export (int) var hand
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
	elif Input.is_action_pressed("player1attack"):
		if hand == 0:
			hand = 1;
			$AnimatedSprite.play("punchRight")
		elif hand == 1:
			hand = 0
			$AnimatedSprite.play("punchLeft")
	elif Input.is_action_pressed("player1special"):
		$AnimatedSprite.play("punchUp")
	elif Input.is_action_pressed("player1block"):
		$AnimatedSprite.play("block")
	else:
		$AnimatedSprite.play("idle")
	
	position += velocity * delta
	position.x = clamp(position.x, 0, screensize.x)
	
		
		
		
	