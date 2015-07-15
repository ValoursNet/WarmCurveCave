package source;
import flixel.util.FlxStringUtil;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.group.FlxSpriteGroup;
import source.OfficeObject;
import flash.geom.Rectangle;

/**
 * ...
 * @author Michael
 */
class LevelGenerator
{
	
	private var cornerZones: Array<Array<Array<Int>>> = new  Array<Array<Array<Int>>>();
	private var quadZones: Array<Array<Array<Int>>> = new  Array<Array<Array<Int>>>();
	private var tripleZones: Array<Array<Array<Int>>> = new  Array<Array<Array<Int>>>();
	
	public var objects:FlxSpriteGroup = new FlxSpriteGroup(0, 0);
	
	var officeObjects:Array<Rectangle>;
	
	var levelArray:Array<Array<Int>>;

	public function new()
	{
		var colorMap:Array<Int> = new Array<Int>();
		colorMap.push(16777215);//floor
		colorMap.push(0);//wall
		colorMap.push(15539236);//door (wrong)
		colorMap.push(16738816);//desk
		colorMap.push(16766976);//chair
		colorMap.push(38143);//seperator
		
		
		var zoneOne:String = FlxStringUtil.imageToCSV("assets/Zones.png", false, 1, colorMap);
		
		splitMap(zoneOne);
		//zoneOne = FlxStringUtil.arrayToCSV(stringArrayIntoInt(splitMap(zoneOne).join(',').split(',')), 50);
		//zoneOne = intArrayIntoString(combineZones(cornerZones[0],quadZones[0],0));
		
		
		
		levelArray = allZonesCombined();
		
		//trace(rotateRight(cornerZones[0]));
		
		//trace(tripleZones[0]);
		//trace(zoneOne);
		readyObjects();
	}
	
	public function getLevel() {
		return intArrayIntoString(levelArray);
	}
	
	public function getFloor() {
		var levelString:String = getWalls();
		var stage1:String = StringTools.replace(levelString, '1', '-1');
		return StringTools.replace(stage1, '0', '1');
	}
	
	public function getWalls() {
		var levelString:String = intArrayIntoString(levelArray);
		return stripObjects(levelString);
	}
	
	private function stripObjects(levelString:String):String {
		var returnString:String = levelString;
		//returnString = StringTools.replace(returnString, '2', '0');
		returnString = StringTools.replace(returnString, '3', '0');
		returnString = StringTools.replace(returnString, '4', '0');
		returnString = StringTools.replace(returnString, '5', '0');
		returnString = StringTools.replace(returnString, '-1', '0');
		
		return returnString;
	}
	
	private function populateObjectCollections() {
		officeObjects = new Array<Rectangle>();
		//levelArray
		for (i in 0...levelArray.length)
		{
			for (j in 0...levelArray[i].length)
			{
				if (levelArray[i][j] == 3) {
					if (levelArray[i + 2][j] == 3 &&
					levelArray[i + 1][j] == 3 &&
					levelArray[i + 2][j + 5] == 3 &&
					levelArray[i + 1][j + 5] == 3 &&
					levelArray[i][j + 5] == 3 &&
					levelArray[i + 2][j + 6] != 3) {
						officeObjects.push(new Rectangle(j,i,0,0));
						officeObjects.push(new Rectangle(j,i,1,0));
					} else if (levelArray[i][j + 2] == 3 &&
					levelArray[i][j + 1] == 3 &&
					levelArray[i + 5][j + 2] == 3 &&
					levelArray[i + 5][j + 1] == 3 &&
					levelArray[i + 5][j] == 3 &&
					levelArray[i + 6][j + 2] != 3) {
						officeObjects.push(new Rectangle(j,i,0,1));
						officeObjects.push(new Rectangle(j,i,1,1));
					}
				}
				if (levelArray[i][j] == 4) {
					if (levelArray[i + 1][j + 1] == 4) {
						officeObjects.push(new Rectangle(j,i,2,0));
					}
				}
			}
		}
	}
	
	private function readyObjects() {
		
		populateObjectCollections();
		
		var sprite:OfficeObject;
		/*
		var crates:Array<FlxPoint> = [
			FlxPoint.get(64, 208),
			FlxPoint.get(108, 176),
			FlxPoint.get(140, 176),
			FlxPoint.get(192, 208),
			FlxPoint.get(272, 48)];
		*/
		for (i in 0...officeObjects.length)
		{
			sprite = new OfficeObject(officeObjects[i].x*5, officeObjects[i].y*5, Std.int(officeObjects[i].width), Std.int(officeObjects[i].height));
			sprite.height = sprite.height - 1;
			//sprite.acceleration.y = 400;
			//sprite.drag.x = 200;
			//sprite.drag.y = 200;
			sprite.immovable = true;
			objects.add(sprite);
		}
			
	}
	
	private function allZonesCombined():Array<Array<Int>> {
		var massiveArray:Array<Array<Int>> = new Array<Array<Int>>();
		
		massiveArray = combineZones(getOrientatedZone(1, 0), getOrientatedZone(1, 1), 0);
		//var secondRow = combineZones(getOrientatedZone(0, 3), getOrientatedZone(0, 2), 0);
		
		massiveArray = combineZones(massiveArray, massiveArray, 1);
		//massiveArray = combineZones(massiveArray, massiveArray, 0);
		
		return massiveArray;
	}
	
	private function getOrientatedZone(zoneType:Int, zoneRotation:Int):Array<Array<Int>> {
		//zoneType
		//0 = corner
		//1 = quad
		//2 = triple
		
		//zoneRotation
		//0 = default
		//1 = 90
		//2 = 180
		//3 = -90
		
		if (zoneType == 0) {
			if(zoneRotation == 0) {
				return getCornerZone();
			} else if(zoneRotation == 1) {
				return rotateRight(getCornerZone());
			} else if(zoneRotation == 2) {
				return rotateRight(rotateRight(getCornerZone()));
			} else if(zoneRotation == 3) {
				return rotateRight(rotateRight(rotateRight(getCornerZone())));
			}
		} else if (zoneType == 1) {
			if(zoneRotation == 0) {
				return getQuadZone();
			} else if(zoneRotation == 1) {
				return rotateRight(getQuadZone());
			} else if(zoneRotation == 2) {
				return rotateRight(rotateRight(getQuadZone()));
			} else if(zoneRotation == 3) {
				return rotateRight(rotateRight(rotateRight(getQuadZone())));
			}
		} else if (zoneType == 2) {
			if(zoneRotation == 0) {
				return getTripleZone();
			} else if(zoneRotation == 1) {
				return rotateRight(getTripleZone());
			} else if(zoneRotation == 2) {
				return rotateRight(rotateRight(getTripleZone()));
			} else if(zoneRotation == 3) {
				return rotateRight(rotateRight(rotateRight(getTripleZone())));
			}
		}
		
		trace('ur shit is fucked 1');
		return null;
		
	}
	
	private function getCornerZone():Array<Array<Int>> {
		var zoneVal:Int = Math.ceil(Math.random()*cornerZones.length);
		return cornerZones[zoneVal-1];
	}
	
	private function getQuadZone():Array<Array<Int>> {
		var zoneVal:Int = Math.ceil(Math.random()*quadZones.length);
		return quadZones[zoneVal-1];
	}
	
	private function getTripleZone():Array<Array<Int>> {
		var zoneVal:Int = Math.ceil(Math.random()*tripleZones.length);
		return tripleZones[zoneVal-1];
	}
	
	private function rotateRight(array:Array<Array<Int>>):Array<Array<Int>>	{
		var transformedArray:Array<Array<Int>> = new Array<Array<Int>>();
			
		//for ( var i:int = 0; i < array[0].length; i++ ) {
		for (i in 0...array[0].length){	
			transformedArray[i] = new Array<Int>();
			
			// fill the row with everything in the appropriate column of the source array
			var transformedArrayColumn:Int = -1;
			//for ( var j:int = array.length - 1; j > -1; j-- )
			for (j in 0...array.length) {	
				var k:Int = array.length - 1 - j;
				
				transformedArrayColumn++;
				transformedArray[i][transformedArrayColumn] = array[k][i];
			}

		}
		
		return transformedArray;
	}
	
	private function combineZones(zone1:Array<Array<Int>>, zone2:Array<Array<Int>>, direction:Int):Array<Array<Int>> {
		//0 = Right
		//1 = Down
		var result:Array<Array<Int>> = zone1;
		
		if(direction == 0){
			for (i in 0...zone2.length){
				for (j in 1...zone2[i].length) {
					result[i].push(zone2[i][j]);
				}
			}
		} else if(direction == 1){
			for (i in 1...zone2.length){
				result.push(zone2[i]);
			}
		}
		
		return result;
	}
	
	private function intArrayIntoString(arrays:Array<Array<Int>>):String {
		var result:String = '';
		for (i in 0...arrays.length){
			for (j in 0...arrays[i].length) {
				if (j != 0) {
					result = result + ', ';
				}
				
				result = result + arrays[i][j];
			}
			
			result = result + '\n';
		}
		return result;
	}
	
	private function flatten(arrays:Array<Array<String>>):Array<String> {
		var result:Array<String> = new Array<String>();
		for (i in 0...arrays.length){
			result = result.concat(arrays[i]);
		}
		return result;
	}

	
	public function stringArrayIntoInt(stringArray:Array<String>):Array<Int> {
		var returnArray:Array<Int> = new Array<Int>();
		for (i in 0...stringArray.length){
			returnArray[i] = Std.parseInt(stringArray[i]);
		}
		return returnArray;
	}
	
	public function splitMap(zonesString:String) {
		
		var newArray:Array<String> = zonesString.split('\n');
		
		var allZone:Array<Array<String>> = new Array<Array<String>>();
		
		var allZoneInt:Array<Array<Int>> = new Array<Array<Int>>();
		
		
		for (i in 0...newArray.length){
			var thisLine:Array<String> = newArray[i].split(',');
			allZone[i] = thisLine;
		}
		
		//clean array
		for (i in 0...allZone.length){
			var thisLine = allZone[i];
			for (j in 0...thisLine.length){
				var thisChar = thisLine[j];
				allZone[i][j] = StringTools.replace(thisChar, ',', '');
				allZone[i][j] = StringTools.replace(thisChar, '\n', '');
				allZone[i].remove('');
			}
		}
		
		//int array
		for (i in 0...allZone.length){
			allZoneInt[i] = stringArrayIntoInt(allZone[i]);
		}
		
		
		cornerZones = getZoneSet(2, 2, allZoneInt);
		quadZones = getZoneSet(0, 1, allZoneInt);
		tripleZones = getZoneSet(1, 1, allZoneInt);
		
		
		var topZones:Array<Array<Int>> = getZone(0, 0, allZoneInt);
		
		
		
		return topZones;
	}
	
	private function getZoneSet(y:Int,num:Int,allZoneInt:Array<Array<Int>>): Array<Array<Array<Int>>> {
		var zoneSet:Array<Array<Array<Int>>> = new Array<Array<Array<Int>>>();
		
		for (i in 0...num) {
			zoneSet.push(getZone(i, y, allZoneInt));
		}
		
		return zoneSet;
	}
	
	public function getZone(x:Int,y:Int,allZones:Array<Array<Int>>):Array<Array<Int>> {
		
		var thisZone:Array<Array<Int>> = new Array<Array<Int>>();
		
		var xStart:Int = (x) * 50;
		var yStart:Int = (y) * 50;
		
		for (i in 0...50){
			var thisLine = allZones[i+yStart];
			thisZone.push(new Array<Int>());
			for (j in 0...50){
				thisZone[i].push(allZones[i+yStart][j+xStart]);
			}
		}
		
		
		return thisZone;
	}
	
}