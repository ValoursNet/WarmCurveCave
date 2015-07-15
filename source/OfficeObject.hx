package source; 

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.loaders.CachedGraphics;
import flixel.util.loaders.TextureRegion;
import flash.geom.Rectangle;

class OfficeObject extends FlxSprite {
	
	public function new(X:Float, Y:Float, type:Int, rot:Int)
	{
		//"assets/crate.png"
		super(X, Y);
		
		offset.x = 0;
		offset.y = 0;
		
		//loadGraphic("assets/objects.png");
		
		var cached:CachedGraphics = FlxG.bitmap.add("assets/objects.png"); // where Graphic is the path to image in assets
		
		var graphicLocation:Rectangle = new Rectangle(0, 0, 15, 15);
		
		if(type == 0){
			//desk
			graphicLocation = new Rectangle(0, 0, 30, 15);
		}
		
		if(type == 1){
			//desk - decal
			graphicLocation = new Rectangle(0, 15, 30, 15);
		}
		
		if(type == 2){
			//chair
			graphicLocation = new Rectangle(0, 30, 10, 10);
		}
		
		if(type == 3){
			//toilet
			graphicLocation = new Rectangle(0, 40, 18, 18);
		}
		
		if(type == 4){
			//water
			graphicLocation = new Rectangle(0, 58, 15, 15);
		}
		
		if(type == 5){
			//fridge
			graphicLocation = new Rectangle(0, 73, 20, 15);
		}
		
		if(type == 6){
			//plant
			graphicLocation = new Rectangle(0, 88, 13, 13);
		}
		
		if(type == 7){
			//sink
			graphicLocation = new Rectangle(0, 101, 15, 10);
		}
		
		var textureRegion:TextureRegion = new TextureRegion(cached, Std.int(graphicLocation.x), Std.int(graphicLocation.y), Std.int(graphicLocation.width), Std.int(graphicLocation.height), 0, 0, Std.int(graphicLocation.width), Std.int(graphicLocation.height)); // where rect is the rectangular area you want to load into sprite
		
		loadGraphic(textureRegion);
		
		if (rot == 1) {
			angle = 90;
			
			width = graphicLocation.height;
			height = graphicLocation.width;
			offset.x = graphicLocation.height/2;
			offset.y = -(graphicLocation.width/4 - 1);
		}
		
		
	}
	
}