#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_source_LevelGenerator
#include <source/LevelGenerator.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",14,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",17,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		tmp->set_visible(false);
		HX_STACK_LINE(21)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		tmp1->_state->set_bgColor((int)-5456681);
		HX_STACK_LINE(22)
		::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new((int)256,(int)159,HX_HCSTRING("assets/bg.png","\xcc","\x34","\xb3","\x3d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		::flixel::FlxSprite decoration = tmp2;		HX_STACK_VAR(decoration,"decoration");
		HX_STACK_LINE(23)
		decoration->set_moves(false);
		HX_STACK_LINE(24)
		decoration->set_solid(false);
		HX_STACK_LINE(25)
		::flixel::FlxSprite tmp3 = decoration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		this->add(tmp3);
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp4 = ::flixel::text::FlxText_obj::__new((int)32,(int)36,(int)96,HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp5 = tmp4->setFormat(null(),(int)16,(int)7835297,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		this->add(tmp5);
		HX_STACK_LINE(27)
		::flixel::text::FlxText tmp6 = ::flixel::text::FlxText_obj::__new((int)32,(int)60,(int)96,HX_HCSTRING("DEMO","\x23","\x21","\x27","\x2d"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		::flixel::text::FlxText tmp7 = tmp6->setFormat(null(),(int)24,(int)7835297,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		this->add(tmp7);
		HX_STACK_LINE(29)
		::flixel::util::FlxPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(30)
		::flixel::FlxSprite sprite;		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(31)
		::flixel::util::FlxPoint destination;		HX_STACK_VAR(destination,"destination");
		HX_STACK_LINE(34)
		::flixel::FlxSprite tmp8 = ::flixel::FlxSprite_obj::__new((int)208,(int)80,HX_HCSTRING("assets/elevator.png","\xf5","\x05","\x7b","\x69"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		sprite = tmp8;
		HX_STACK_LINE(35)
		sprite->set_immovable(true);
		HX_STACK_LINE(36)
		::flixel::util::FlxPoint tmp9 = sprite->getMidpoint(null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		destination = tmp9;
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::flixel::util::FlxPoint _g = destination;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			Float tmp10 = (_g->y + (int)112);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(37)
			_g->set_y(tmp10);
		}
		HX_STACK_LINE(38)
		::flixel::util::FlxPoint tmp10 = sprite->getMidpoint(null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		::flixel::util::FlxPoint tmp11 = destination;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		::flixel::util::FlxPath tmp12 = ::flixel::util::FlxPath_obj::__new(sprite,Array_obj< ::Dynamic >::__new().Add(tmp10).Add(tmp11),(int)40,(int)4096,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		path = tmp12;
		HX_STACK_LINE(39)
		::flixel::FlxSprite tmp13 = sprite;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		this->add(tmp13);
		HX_STACK_LINE(42)
		::flixel::FlxSprite tmp14 = ::flixel::FlxSprite_obj::__new((int)96,(int)208,HX_HCSTRING("assets/pusher.png","\xce","\x32","\x3e","\xe5"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		sprite = tmp14;
		HX_STACK_LINE(43)
		sprite->set_immovable(true);
		HX_STACK_LINE(44)
		::flixel::util::FlxPoint tmp15 = sprite->getMidpoint(null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(44)
		destination = tmp15;
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::flixel::util::FlxPoint _g = destination;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			Float tmp16 = (_g->x + (int)56);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			_g->set_x(tmp16);
		}
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp16 = sprite->getMidpoint(null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp17 = destination;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		::flixel::util::FlxPath tmp18 = ::flixel::util::FlxPath_obj::__new(sprite,Array_obj< ::Dynamic >::__new().Add(tmp16).Add(tmp17),(int)40,(int)4096,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(46)
		::flixel::util::FlxPath path1 = tmp18;		HX_STACK_VAR(path1,"path1");
		HX_STACK_LINE(47)
		::flixel::FlxSprite tmp19 = sprite;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(47)
		this->add(tmp19);
		HX_STACK_LINE(50)
		::Player tmp20 = ::Player_obj::__new((int)32,(int)176);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(50)
		::Player player = tmp20;		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(51)
		::Player tmp21 = player;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		this->add(tmp21);
		HX_STACK_LINE(55)
		::flixel::util::FlxPoint tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::flixel::util::FlxPool tmp23 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(55)
			::flixel::util::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(55)
			::flixel::util::FlxPoint tmp25 = tmp24->set((int)64,(int)208);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(55)
			::flixel::util::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(55)
			point->_inPool = false;
			HX_STACK_LINE(55)
			tmp22 = point;
		}
		HX_STACK_LINE(56)
		::flixel::util::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::flixel::util::FlxPool tmp24 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint tmp26 = tmp25->set((int)108,(int)176);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(56)
			point->_inPool = false;
			HX_STACK_LINE(56)
			tmp23 = point;
		}
		HX_STACK_LINE(57)
		::flixel::util::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::flixel::util::FlxPool tmp25 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint tmp27 = tmp26->set((int)140,(int)176);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(57)
			point->_inPool = false;
			HX_STACK_LINE(57)
			tmp24 = point;
		}
		HX_STACK_LINE(58)
		::flixel::util::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::flixel::util::FlxPool tmp26 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint tmp28 = tmp27->set((int)192,(int)208);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint point = tmp28;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(58)
			point->_inPool = false;
			HX_STACK_LINE(58)
			tmp25 = point;
		}
		HX_STACK_LINE(59)
		::flixel::util::FlxPoint tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::flixel::util::FlxPool tmp27 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(59)
			::flixel::util::FlxPoint tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(59)
			::flixel::util::FlxPoint tmp29 = tmp28->set((int)272,(int)48);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(59)
			::flixel::util::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(59)
			point->_inPool = false;
			HX_STACK_LINE(59)
			tmp26 = point;
		}
		HX_STACK_LINE(54)
		Array< ::Dynamic > crates = Array_obj< ::Dynamic >::__new().Add(tmp22).Add(tmp23).Add(tmp24).Add(tmp25).Add(tmp26);		HX_STACK_VAR(crates,"crates");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			int _g = crates->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(61)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(61)
				if ((tmp28)){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(61)
				int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(61)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(63)
				::flixel::util::FlxPoint tmp30 = crates->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(63)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(63)
				::flixel::util::FlxPoint tmp32 = crates->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(63)
				Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(63)
				::flixel::FlxSprite tmp34 = ::flixel::FlxSprite_obj::__new(tmp31,tmp33,HX_HCSTRING("assets/crate.png","\xb2","\x37","\x7a","\xd0"));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(63)
				sprite = tmp34;
				HX_STACK_LINE(64)
				Float tmp35 = sprite->get_height();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(64)
				Float tmp36 = (tmp35 - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(64)
				sprite->set_height(tmp36);
				HX_STACK_LINE(66)
				sprite->drag->set_x((int)200);
				HX_STACK_LINE(67)
				sprite->drag->set_y((int)200);
				HX_STACK_LINE(68)
				::flixel::FlxSprite tmp37 = sprite;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(68)
				this->add(tmp37);
			}
		}
		HX_STACK_LINE(85)
		::flixel::tile::FlxTilemap tmp27 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(85)
		::flixel::tile::FlxTilemap level = tmp27;		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(87)
		::source::LevelGenerator tmp28 = ::source::LevelGenerator_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(87)
		::source::LevelGenerator lvlGen = tmp28;		HX_STACK_VAR(lvlGen,"lvlGen");
		HX_STACK_LINE(88)
		level->loadMap(lvlGen->getLevel(),HX_HCSTRING("assets/tiles.png","\x74","\xfd","\x69","\xa9"),(int)0,(int)0,(int)2,null(),null(),null());
		HX_STACK_LINE(89)
		level->follow(null(),null(),null());
		HX_STACK_LINE(90)
		::flixel::tile::FlxTilemap tmp29 = level;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(90)
		this->add(tmp29);
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",110,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		this->super::update();
		HX_STACK_LINE(113)
		Dynamic tmp = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		::flixel::FlxG_obj::overlap(null(),null(),null(),tmp);
		HX_STACK_LINE(115)
		::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		int tmp3 = tmp2->justReleased->checkStatus;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		bool tmp4 = tmp1->checkStatus((int)13,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		if ((tmp4)){
		}
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

