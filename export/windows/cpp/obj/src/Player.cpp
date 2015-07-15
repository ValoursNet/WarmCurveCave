#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",10,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(11)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(13)
	this->loadGraphic(HX_HCSTRING("assets/player.png","\x68","\x5e","\x22","\x38"),true,null(),null(),null(),null());
	HX_STACK_LINE(15)
	::flixel::util::FlxPoint tmp2 = this->maxVelocity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	tmp2->set_x((int)100);
	HX_STACK_LINE(16)
	::flixel::util::FlxPoint tmp3 = this->maxVelocity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	tmp3->set_y((int)100);
	HX_STACK_LINE(20)
	::flixel::util::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(20)
	::flixel::util::FlxPoint tmp5 = this->maxVelocity;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(20)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	Float tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(20)
	tmp4->set_x(tmp7);
	HX_STACK_LINE(21)
	::flixel::util::FlxPoint tmp8 = this->drag;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(21)
	::flixel::util::FlxPoint tmp9 = this->maxVelocity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(21)
	Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(21)
	Float tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(21)
	tmp8->set_y(tmp11);
	HX_STACK_LINE(24)
	this->set_width((int)8);
	HX_STACK_LINE(25)
	this->set_height((int)10);
	HX_STACK_LINE(26)
	::flixel::util::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(26)
	tmp12->set_x((int)3);
	HX_STACK_LINE(27)
	::flixel::util::FlxPoint tmp13 = this->offset;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(27)
	tmp13->set_y((int)3);
	HX_STACK_LINE(29)
	::flixel::animation::FlxAnimationController tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(29)
	tmp14->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0),(int)0,false);
	HX_STACK_LINE(30)
	::flixel::animation::FlxAnimationController tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(30)
	tmp15->add(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)0),(int)10,true);
	HX_STACK_LINE(31)
	::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(31)
	tmp16->add(HX_HCSTRING("walk_back","\x5d","\xb8","\xb4","\x01"),Array_obj< int >::__new().Add((int)3).Add((int)2).Add((int)1).Add((int)0),(int)10,true);
	HX_STACK_LINE(32)
	::flixel::animation::FlxAnimationController tmp17 = this->animation;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(32)
	tmp17->add(HX_HCSTRING("flail","\xfe","\x2c","\x8c","\x02"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)0),(int)18,true);
	HX_STACK_LINE(33)
	::flixel::animation::FlxAnimationController tmp18 = this->animation;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(33)
	tmp18->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)4),(int)0,false);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(X,Y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",37,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		tmp->set_x((int)0);
		HX_STACK_LINE(40)
		::flixel::util::FlxPoint tmp1 = this->acceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		tmp1->set_y((int)0);
		HX_STACK_LINE(42)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = tmp2->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(44)
			::flixel::util::FlxPoint tmp4 = this->acceleration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			::flixel::util::FlxPoint _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			Float tmp5 = _g->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			::flixel::util::FlxPoint tmp6 = this->drag;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			_g->set_x(tmp8);
		}
		HX_STACK_LINE(46)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		bool tmp5 = tmp4->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		if ((tmp5)){
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			Float tmp7 = _g->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint tmp8 = this->drag;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(48)
			_g->set_x(tmp10);
		}
		HX_STACK_LINE(51)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		bool tmp7 = tmp6->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")).Add(HX_HCSTRING("W","\x57","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		if ((tmp7)){
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint tmp8 = this->acceleration;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			Float tmp9 = _g->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint tmp10 = this->drag;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			_g->set_y(tmp12);
		}
		HX_STACK_LINE(56)
		::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		bool tmp9 = tmp8->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")).Add(HX_HCSTRING("S","\x53","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		if ((tmp9)){
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint tmp10 = this->acceleration;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint tmp12 = this->drag;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(58)
			Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(58)
			_g->set_y(tmp14);
		}
		HX_STACK_LINE(62)
		::flixel::util::FlxPoint tmp10 = this->velocity;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		if ((tmp12)){
			HX_STACK_LINE(64)
			::flixel::animation::FlxAnimationController tmp13 = this->animation;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(64)
			tmp13->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
		}
		else{
			HX_STACK_LINE(66)
			::flixel::util::FlxPoint tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(66)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(66)
			bool tmp15 = (tmp14 < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(66)
			if ((tmp15)){
				HX_STACK_LINE(68)
				::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(68)
				tmp16->play(HX_HCSTRING("walk_back","\x5d","\xb8","\xb4","\x01"),null(),null());
			}
			else{
				HX_STACK_LINE(72)
				::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				tmp16->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null());
			}
		}
		HX_STACK_LINE(75)
		this->super::update();
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

