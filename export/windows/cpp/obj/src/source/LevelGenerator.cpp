#include <hxcpp.h>

#ifndef INCLUDED_source_LevelGenerator
#include <source/LevelGenerator.h>
#endif
namespace source{

Void LevelGenerator_obj::__construct()
{
HX_STACK_FRAME("source.LevelGenerator","new",0x37bec274,"source.LevelGenerator.new","LevelGenerator.hx",11,0x1b8157cf)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LevelGenerator_obj::~LevelGenerator_obj() { }

Dynamic LevelGenerator_obj::__CreateEmpty() { return  new LevelGenerator_obj; }
hx::ObjectPtr< LevelGenerator_obj > LevelGenerator_obj::__new()
{  hx::ObjectPtr< LevelGenerator_obj > _result_ = new LevelGenerator_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelGenerator_obj > _result_ = new LevelGenerator_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > LevelGenerator_obj::getLevel( ){
	HX_STACK_FRAME("source.LevelGenerator","getLevel",0xd7052a7a,"source.LevelGenerator.getLevel","LevelGenerator.hx",15,0x1b8157cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	Array< ::Dynamic > zoneOne = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(zoneOne,"zoneOne");
	HX_STACK_LINE(20)
	return zoneOne;
}


HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,getLevel,return )


LevelGenerator_obj::LevelGenerator_obj()
{
}

Dynamic LevelGenerator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getLevel") ) { return getLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getLevel","\x0e","\x25","\x3a","\xd2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::__mClass,"__mClass");
};

#endif

hx::Class LevelGenerator_obj::__mClass;

void LevelGenerator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("source.LevelGenerator","\x82","\xb8","\xaf","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelGenerator_obj >;
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

} // end namespace source
