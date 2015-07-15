#ifndef INCLUDED_source_LevelGenerator
#define INCLUDED_source_LevelGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(source,LevelGenerator)
namespace source{


class HXCPP_CLASS_ATTRIBUTES  LevelGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelGenerator_obj OBJ_;
		LevelGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="source.LevelGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelGenerator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LevelGenerator","\x4f","\x86","\x11","\xcc"); }

		virtual Array< ::Dynamic > getLevel( );
		Dynamic getLevel_dyn();

};

} // end namespace source

#endif /* INCLUDED_source_LevelGenerator */ 
