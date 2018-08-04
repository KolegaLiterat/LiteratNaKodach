extends Area2D

export (int) var speed
var screensize

func _ready():
	screensize = get_viewport_rect().size

func _process(delta):
	var velocity = Vector2()
	
	if Input.is_action_pressed("ui_right"):
		$AnimatedSprite.play("walk")
	elif Input.is_action_pressed("ui_left"):
		$AnimatedSprite.play("walkBack")
	else:
		$AnimatedSprite.play("idle")
	
	position += velocity * delta
	position.x = clamp(position.x, 0, screensize.x)
	
	