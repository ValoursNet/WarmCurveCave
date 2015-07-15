package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/bg.png", "assets/bg.png");
			type.set ("assets/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/crate.png", "assets/crate.png");
			type.set ("assets/crate.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/elevator.png", "assets/elevator.png");
			type.set ("assets/elevator.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Floors.png", "assets/Floors.png");
			type.set ("assets/Floors.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gibs.png", "assets/gibs.png");
			type.set ("assets/gibs.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map - Copy.png", "assets/map - Copy.png");
			type.set ("assets/map - Copy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map.png", "assets/map.png");
			type.set ("assets/map.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/map2.png", "assets/map2.png");
			type.set ("assets/map2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/objects.png", "assets/objects.png");
			type.set ("assets/objects.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/player.png", "assets/player.png");
			type.set ("assets/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/pusher.png", "assets/pusher.png");
			type.set ("assets/pusher.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/squid.png", "assets/squid.png");
			type.set ("assets/squid.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiles - Copy.png", "assets/tiles - Copy.png");
			type.set ("assets/tiles - Copy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tiles.png", "assets/tiles.png");
			type.set ("assets/tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/walls.png", "assets/walls.png");
			type.set ("assets/walls.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Zones.png", "assets/Zones.png");
			type.set ("assets/Zones.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
