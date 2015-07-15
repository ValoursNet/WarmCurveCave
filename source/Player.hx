package; 

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;

class Player extends FlxSprite
{
	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		
		loadGraphic("assets/player.png", false);
		// Walking speed
		maxVelocity.x = 100;	
		maxVelocity.y = 100;	
		// Gravity
		//acceleration.y = 400;	
		// Deceleration (sliding to a stop)
		drag.x = maxVelocity.x * 4;		
		drag.y = maxVelocity.y * 4;		
		
		// Tweak the bounding box for better feel
		width = 8;
		height = 8;
		offset.x = 4;
		offset.y = 1;
		
		//animation.add("idle", [0], 0, false);
		//animation.add("walk", [1, 2, 3, 0], 10, true);
		//animation.add("walk_back", [3, 2, 1, 0], 10, true);
		//animation.add("flail", [1, 2, 3, 0], 18, true);
		//animation.add("jump", [4], 0, false);
	}
	
	override public function update():Void
	{
		// Smooth slidey walking controls
		acceleration.x = 0;
		acceleration.y = 0;
		
		if (FlxG.keys.anyPressed(["LEFT", "A"]))
		{
			acceleration.x -= drag.x;
		}
		if (FlxG.keys.anyPressed(["RIGHT", "D"]))
		{
			acceleration.x += drag.x;
		}
		
		if (FlxG.keys.anyPressed(["UP", "W"]))
		{
			acceleration.y -= drag.y;
		}
		
		if (FlxG.keys.anyPressed(["DOWN", "S"]))
		{
			acceleration.y += drag.y;
		}
		
		angle = angle + 2;
		
        super.update();
	}
}