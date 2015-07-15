#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED___ASSET__assets_fonts_arial_ttf
#include <__ASSET__assets_fonts_arial_ttf.h>
#endif
#ifndef INCLUDED___ASSET__assets_fonts_nokiafc22_ttf
#include <__ASSET__assets_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",37,0x0fc48912)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",47,0x0fc48912)
			{
				HX_STACK_LINE(47)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(47)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(47)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	this->type = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",46,0x0fc48912)
			{
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	this->path = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",45,0x0fc48912)
			{
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(45)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(45)
	this->className = _Function_1_3::Block();
	HX_STACK_LINE(53)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(69)
	::openfl::_legacy::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__assets_fonts_nokiafc22_ttf >());
	HX_STACK_LINE(70)
	::openfl::_legacy::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__assets_fonts_arial_ttf >());
	HX_STACK_LINE(75)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(76)
	useManifest = true;
	HX_STACK_LINE(77)
	useManifest = true;
	HX_STACK_LINE(78)
	useManifest = true;
	HX_STACK_LINE(79)
	useManifest = true;
	HX_STACK_LINE(80)
	useManifest = true;
	HX_STACK_LINE(81)
	useManifest = true;
	HX_STACK_LINE(82)
	useManifest = true;
	HX_STACK_LINE(83)
	useManifest = true;
	HX_STACK_LINE(84)
	useManifest = true;
	HX_STACK_LINE(85)
	useManifest = true;
	HX_STACK_LINE(86)
	useManifest = true;
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	tmp->set(HX_HCSTRING("assets/fonts/nokiafc22.ttf","\x00","\x74","\xbc","\x02"),hx::ClassOf< ::__ASSET__assets_fonts_nokiafc22_ttf >());
	HX_STACK_LINE(89)
	::haxe::ds::StringMap tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	tmp1->set(HX_HCSTRING("assets/fonts/nokiafc22.ttf","\x00","\x74","\xbc","\x02"),::openfl::_legacy::AssetType_obj::FONT);
	HX_STACK_LINE(91)
	::haxe::ds::StringMap tmp2 = this->className;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	tmp2->set(HX_HCSTRING("assets/fonts/arial.ttf","\x24","\x14","\x04","\x2f"),hx::ClassOf< ::__ASSET__assets_fonts_arial_ttf >());
	HX_STACK_LINE(92)
	::haxe::ds::StringMap tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	tmp3->set(HX_HCSTRING("assets/fonts/arial.ttf","\x24","\x14","\x04","\x2f"),::openfl::_legacy::AssetType_obj::FONT);
	HX_STACK_LINE(95)
	bool tmp4 = useManifest;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	if ((tmp4)){
		HX_STACK_LINE(97)
		this->loadManifest();
		HX_STACK_LINE(99)
		int tmp5 = ::Sys_obj::args()->indexOf(HX_HCSTRING("-livereload","\xb2","\x45","\x9f","\x14"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		bool tmp6 = (tmp5 > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		if ((tmp6)){
			HX_STACK_LINE(101)
			::String tmp7 = ::sys::FileSystem_obj::fullPath(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			::String path = tmp7;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(102)
			::String tmp8 = path;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			Dynamic tmp9 = ::sys::FileSystem_obj::stat(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			Float tmp10 = tmp9->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			this->lastModified = tmp10;
			HX_STACK_LINE(104)
			::haxe::Timer tmp11 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			this->timer = tmp11;
			HX_STACK_LINE(105)
			::haxe::Timer tmp12 = this->timer;		HX_STACK_VAR(tmp12,"tmp12");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::DefaultAssetLibrary,_g,::String,path)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",105,0x0fc48912)
				{
					HX_STACK_LINE(107)
					::String tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(107)
					Dynamic tmp14 = ::sys::FileSystem_obj::stat(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(107)
					Float tmp15 = tmp14->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(107)
					Float modified = tmp15;		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(109)
					bool tmp16 = (modified > _g->lastModified);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(109)
					if ((tmp16)){
						HX_STACK_LINE(111)
						_g->lastModified = modified;
						HX_STACK_LINE(112)
						_g->loadManifest();
						HX_STACK_LINE(114)
						bool tmp17 = (_g->eventCallback != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(114)
						if ((tmp17)){
							HX_STACK_LINE(116)
							_g->eventCallback(_g,HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(105)
			tmp12->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

bool DefaultAssetLibrary_obj::exists( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",137,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(139)
	::haxe::ds::StringMap tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	::openfl::_legacy::AssetType tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	::openfl::_legacy::AssetType assetType = tmp2;		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(141)
	bool tmp3 = (assetType != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	if ((tmp3)){
		HX_STACK_LINE(143)
		bool tmp4 = (assetType == type);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		if ((tmp5)){
			HX_STACK_LINE(143)
			bool tmp7 = (type == ::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(143)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(143)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(143)
			if ((tmp14)){
				HX_STACK_LINE(143)
				bool tmp15 = (type == ::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(143)
				tmp13 = tmp15;
			}
			else{
				HX_STACK_LINE(143)
				tmp13 = true;
			}
			HX_STACK_LINE(143)
			bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(143)
			if ((tmp15)){
				HX_STACK_LINE(143)
				bool tmp16 = (assetType == ::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(143)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(143)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(143)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(143)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(143)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(143)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(143)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(143)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(143)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(143)
				if ((tmp25)){
					HX_STACK_LINE(143)
					tmp6 = (assetType == ::openfl::_legacy::AssetType_obj::SOUND);
				}
				else{
					HX_STACK_LINE(143)
					tmp6 = true;
				}
			}
			else{
				HX_STACK_LINE(143)
				tmp6 = false;
			}
		}
		else{
			HX_STACK_LINE(143)
			tmp6 = true;
		}
		HX_STACK_LINE(143)
		if ((tmp6)){
			HX_STACK_LINE(145)
			return true;
		}
		HX_STACK_LINE(149)
		bool tmp7 = (type == ::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(149)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(149)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(149)
		if ((tmp9)){
			HX_STACK_LINE(149)
			tmp10 = (type == null());
		}
		else{
			HX_STACK_LINE(149)
			tmp10 = true;
		}
		HX_STACK_LINE(149)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(149)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(149)
		if ((tmp11)){
			HX_STACK_LINE(149)
			bool tmp13 = (assetType == ::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(149)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(149)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(149)
			if ((tmp15)){
				HX_STACK_LINE(149)
				tmp12 = (type == ::openfl::_legacy::AssetType_obj::TEXT);
			}
			else{
				HX_STACK_LINE(149)
				tmp12 = false;
			}
		}
		else{
			HX_STACK_LINE(149)
			tmp12 = true;
		}
		HX_STACK_LINE(149)
		if ((tmp12)){
			HX_STACK_LINE(151)
			return true;
		}
	}
	HX_STACK_LINE(157)
	return false;
}


::openfl::_legacy::display::BitmapData DefaultAssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBitmapData",0xb8207f2d,"DefaultAssetLibrary.getBitmapData","DefaultAssetLibrary.hx",162,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(164)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	if ((tmp2)){
		HX_STACK_LINE(166)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		::openfl::_legacy::display::BitmapData tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		tmp8 = hx::TCast< ::openfl::_legacy::display::BitmapData >::cast(tmp7);
		HX_STACK_LINE(166)
		return tmp8;
	}
	else{
		HX_STACK_LINE(170)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		::openfl::_legacy::display::BitmapData tmp7 = ::openfl::_legacy::display::BitmapData_obj::load(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		return tmp7;
	}
	HX_STACK_LINE(164)
	return null();
}


::openfl::_legacy::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",177,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(179)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	if ((tmp2)){
		HX_STACK_LINE(181)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(181)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		::openfl::_legacy::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		tmp8 = hx::TCast< ::openfl::_legacy::utils::ByteArray >::cast(tmp7);
		HX_STACK_LINE(181)
		return tmp8;
	}
	else{
		HX_STACK_LINE(185)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::openfl::_legacy::utils::ByteArray tmp7 = ::openfl::_legacy::utils::ByteArray_obj::readFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		return tmp7;
	}
	HX_STACK_LINE(179)
	return null();
}


::openfl::_legacy::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",192,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(194)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	if ((tmp2)){
		HX_STACK_LINE(196)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(197)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		::openfl::_legacy::text::Font_obj::registerFont(tmp6);
		HX_STACK_LINE(198)
		Dynamic tmp7 = fontClass;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		Dynamic tmp8 = ::Type_obj::createInstance(tmp7,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		::openfl::_legacy::text::Font tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		tmp9 = hx::TCast< ::openfl::_legacy::text::Font >::cast(tmp8);
		HX_STACK_LINE(198)
		return tmp9;
	}
	else{
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		::openfl::_legacy::text::Font tmp7 = ::openfl::_legacy::text::Font_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		return tmp7;
	}
	HX_STACK_LINE(194)
	return null();
}


::openfl::_legacy::media::Sound DefaultAssetLibrary_obj::getMusic( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getMusic",0xd9777bb1,"DefaultAssetLibrary.getMusic","DefaultAssetLibrary.hx",209,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(211)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	if ((tmp2)){
		HX_STACK_LINE(213)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		::openfl::_legacy::media::Sound tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(213)
		tmp8 = hx::TCast< ::openfl::_legacy::media::Sound >::cast(tmp7);
		HX_STACK_LINE(213)
		return tmp8;
	}
	else{
		HX_STACK_LINE(217)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		::openfl::_legacy::net::URLRequest tmp7 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		::openfl::_legacy::media::Sound tmp8 = ::openfl::_legacy::media::Sound_obj::__new(tmp7,null(),true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		return tmp8;
	}
	HX_STACK_LINE(211)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",224,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(232)
	::haxe::ds::StringMap tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	return tmp3;
}


::openfl::_legacy::media::Sound DefaultAssetLibrary_obj::getSound( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getSound",0x49e937db,"DefaultAssetLibrary.getSound","DefaultAssetLibrary.hx",239,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(241)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	if ((tmp2)){
		HX_STACK_LINE(243)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(243)
		::openfl::_legacy::media::Sound tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(243)
		tmp8 = hx::TCast< ::openfl::_legacy::media::Sound >::cast(tmp7);
		HX_STACK_LINE(243)
		return tmp8;
	}
	else{
		HX_STACK_LINE(247)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(247)
		::openfl::_legacy::net::URLRequest tmp7 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(247)
		::haxe::ds::StringMap tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(247)
		::openfl::_legacy::AssetType tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(247)
		::openfl::_legacy::AssetType tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(247)
		bool tmp12 = (tmp11 == ::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(247)
		::openfl::_legacy::media::Sound tmp13 = ::openfl::_legacy::media::Sound_obj::__new(tmp7,null(),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(247)
		return tmp13;
	}
	HX_STACK_LINE(241)
	return null();
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",254,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(256)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::openfl::_legacy::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::openfl::_legacy::utils::ByteArray bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(258)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	if ((tmp2)){
		HX_STACK_LINE(260)
		return null();
	}
	else{
		HX_STACK_LINE(264)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		return tmp4;
	}
	HX_STACK_LINE(258)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",273,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(273)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",278,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(280)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(282)
	::haxe::ds::StringMap tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String id = __it->next();
		{
			HX_STACK_LINE(284)
			bool tmp2 = (type == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			if ((tmp3)){
				HX_STACK_LINE(284)
				::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(284)
				::openfl::_legacy::AssetType tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(284)
				::String tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(284)
				::openfl::_legacy::AssetType tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(284)
				tmp4 = this->exists(tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(284)
				tmp4 = true;
			}
			HX_STACK_LINE(284)
			if ((tmp4)){
				HX_STACK_LINE(286)
				::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				items->push(tmp5);
			}
		}
;
	}
	HX_STACK_LINE(292)
	return items;
}


Void DefaultAssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBitmapData",0x9243e881,"DefaultAssetLibrary.loadBitmapData","DefaultAssetLibrary.hx",299,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(299)
		Dynamic tmp = this->getBitmapData_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		Dynamic getMethod = tmp;		HX_STACK_VAR(getMethod,"getMethod");
		HX_STACK_LINE(299)
		::String id1 = id;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(299)
		Dynamic handler1 = handler;		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(299)
		(::DefaultAssetLibrary_obj::loading)++;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,handler1,Dynamic,getMethod,::String,id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",299,0x0fc48912)
			{
				HX_STACK_LINE(299)
				::String tmp1 = id1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(299)
				::openfl::_legacy::display::BitmapData tmp2 = getMethod(tmp1).Cast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				::openfl::_legacy::display::BitmapData data = tmp2;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(299)
				::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				::String tmp4 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				tmp3->add(tmp4);
				HX_STACK_LINE(299)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				::openfl::_legacy::display::BitmapData tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				tmp5->add(tmp6);
				HX_STACK_LINE(299)
				::cpp::vm::Deque tmp7 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(299)
				Dynamic tmp8 = handler1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(299)
				tmp7->add(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(299)
		::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(handler1,getMethod,id1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		::cpp::vm::Thread thread = tmp1;		HX_STACK_VAR(thread,"thread");
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",306,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(306)
		Dynamic tmp = this->getBytes_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		Dynamic getMethod = tmp;		HX_STACK_VAR(getMethod,"getMethod");
		HX_STACK_LINE(306)
		::String id1 = id;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(306)
		Dynamic handler1 = handler;		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(306)
		(::DefaultAssetLibrary_obj::loading)++;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,handler1,Dynamic,getMethod,::String,id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",306,0x0fc48912)
			{
				HX_STACK_LINE(306)
				::String tmp1 = id1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(306)
				::openfl::_legacy::utils::ByteArray tmp2 = getMethod(tmp1).Cast< ::openfl::_legacy::utils::ByteArray >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(306)
				::openfl::_legacy::utils::ByteArray data = tmp2;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(306)
				::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(306)
				::String tmp4 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(306)
				tmp3->add(tmp4);
				HX_STACK_LINE(306)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				::openfl::_legacy::utils::ByteArray tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(306)
				tmp5->add(tmp6);
				HX_STACK_LINE(306)
				::cpp::vm::Deque tmp7 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(306)
				Dynamic tmp8 = handler1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(306)
				tmp7->add(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(306)
		::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(handler1,getMethod,id1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		::cpp::vm::Thread thread = tmp1;		HX_STACK_VAR(thread,"thread");
	}
return null();
}


Void DefaultAssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadFont",0x1da5ca97,"DefaultAssetLibrary.loadFont","DefaultAssetLibrary.hx",313,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(313)
		Dynamic tmp = this->getFont_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		Dynamic getMethod = tmp;		HX_STACK_VAR(getMethod,"getMethod");
		HX_STACK_LINE(313)
		::String id1 = id;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(313)
		Dynamic handler1 = handler;		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(313)
		(::DefaultAssetLibrary_obj::loading)++;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,handler1,Dynamic,getMethod,::String,id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",313,0x0fc48912)
			{
				HX_STACK_LINE(313)
				::String tmp1 = id1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(313)
				::openfl::_legacy::text::Font tmp2 = getMethod(tmp1).Cast< ::openfl::_legacy::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				::openfl::_legacy::text::Font data = tmp2;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(313)
				::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				::String tmp4 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				tmp3->add(tmp4);
				HX_STACK_LINE(313)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				::openfl::_legacy::text::Font tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(313)
				tmp5->add(tmp6);
				HX_STACK_LINE(313)
				::cpp::vm::Deque tmp7 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(313)
				Dynamic tmp8 = handler1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(313)
				tmp7->add(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(313)
		::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(handler1,getMethod,id1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		::cpp::vm::Thread thread = tmp1;		HX_STACK_VAR(thread,"thread");
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",320,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(329)
			::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::readFile(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(329)
			::openfl::_legacy::utils::ByteArray bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(332)
			bool tmp1 = (bytes != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(332)
			if ((tmp1)){
				HX_STACK_LINE(334)
				bytes->position = (int)0;
				HX_STACK_LINE(336)
				bool tmp2 = (bytes->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(336)
				if ((tmp2)){
					HX_STACK_LINE(338)
					int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(338)
					::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(338)
					::String data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(340)
					bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(340)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(340)
					if ((tmp5)){
						HX_STACK_LINE(340)
						tmp6 = (data.length > (int)0);
					}
					else{
						HX_STACK_LINE(340)
						tmp6 = false;
					}
					HX_STACK_LINE(340)
					if ((tmp6)){
						HX_STACK_LINE(342)
						::String tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(342)
						Dynamic tmp8 = ::haxe::Unserializer_obj::run(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(342)
						cpp::ArrayBase manifest = tmp8;		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(344)
							while((true)){
								HX_STACK_LINE(344)
								bool tmp9 = (_g < manifest->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(344)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(344)
								if ((tmp10)){
									HX_STACK_LINE(344)
									break;
								}
								HX_STACK_LINE(344)
								Dynamic tmp11 = manifest->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(344)
								Dynamic asset = tmp11;		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(344)
								++(_g);
								HX_STACK_LINE(346)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(346)
								{
									HX_STACK_LINE(346)
									::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(346)
									::haxe::ds::StringMap tmp13 = this->className;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(346)
									::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(346)
									tmp12 = tmp13->exists(tmp14);
								}
								HX_STACK_LINE(346)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(346)
								if ((tmp13)){
									HX_STACK_LINE(348)
									{
										HX_STACK_LINE(348)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(348)
										::String value = asset->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(348)
										::haxe::ds::StringMap tmp14 = this->path;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(348)
										::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(348)
										::String tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(348)
										tmp14->set(tmp15,tmp16);
									}
									HX_STACK_LINE(349)
									{
										HX_STACK_LINE(349)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(349)
										::openfl::_legacy::AssetType tmp14 = ::Type_obj::createEnum(hx::ClassOf< ::openfl::_legacy::AssetType >(),asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(349)
										::openfl::_legacy::AssetType value = tmp14;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(349)
										::haxe::ds::StringMap tmp15 = this->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(349)
										::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(349)
										::openfl::_legacy::AssetType tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(349)
										tmp15->set(tmp16,tmp17);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(361)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),361,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				::haxe::Log_obj::trace(HX_HCSTRING("Warning: Could not load asset manifest (bytes was null)","\x83","\x9c","\x5b","\x2e"),tmp2);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(367)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(367)
					::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(367)
					::String tmp2 = (HX_HCSTRING("Warning: Could not load asset manifest (","\x73","\x7e","\xfd","\x21") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(367)
					::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(367)
					Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),367,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(367)
					::haxe::Log_obj::trace(tmp3,tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadMusic",0xdf3492dd,"DefaultAssetLibrary.loadMusic","DefaultAssetLibrary.hx",376,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(376)
		Dynamic tmp = this->getMusic_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		Dynamic getMethod = tmp;		HX_STACK_VAR(getMethod,"getMethod");
		HX_STACK_LINE(376)
		::String id1 = id;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(376)
		Dynamic handler1 = handler;		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(376)
		(::DefaultAssetLibrary_obj::loading)++;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,handler1,Dynamic,getMethod,::String,id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",376,0x0fc48912)
			{
				HX_STACK_LINE(376)
				::String tmp1 = id1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(376)
				::openfl::_legacy::media::Sound tmp2 = getMethod(tmp1).Cast< ::openfl::_legacy::media::Sound >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(376)
				::openfl::_legacy::media::Sound data = tmp2;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(376)
				::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(376)
				::String tmp4 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(376)
				tmp3->add(tmp4);
				HX_STACK_LINE(376)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(376)
				::openfl::_legacy::media::Sound tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				tmp5->add(tmp6);
				HX_STACK_LINE(376)
				::cpp::vm::Deque tmp7 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				Dynamic tmp8 = handler1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(376)
				tmp7->add(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(376)
		::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(handler1,getMethod,id1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		::cpp::vm::Thread thread = tmp1;		HX_STACK_VAR(thread,"thread");
	}
return null();
}


Void DefaultAssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadSound",0x4fa64f07,"DefaultAssetLibrary.loadSound","DefaultAssetLibrary.hx",383,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(383)
		Dynamic tmp = this->getSound_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		Dynamic getMethod = tmp;		HX_STACK_VAR(getMethod,"getMethod");
		HX_STACK_LINE(383)
		::String id1 = id;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(383)
		Dynamic handler1 = handler;		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(383)
		(::DefaultAssetLibrary_obj::loading)++;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,handler1,Dynamic,getMethod,::String,id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",383,0x0fc48912)
			{
				HX_STACK_LINE(383)
				::String tmp1 = id1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(383)
				::openfl::_legacy::media::Sound tmp2 = getMethod(tmp1).Cast< ::openfl::_legacy::media::Sound >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(383)
				::openfl::_legacy::media::Sound data = tmp2;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(383)
				::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(383)
				::String tmp4 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(383)
				tmp3->add(tmp4);
				HX_STACK_LINE(383)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				::openfl::_legacy::media::Sound tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				tmp5->add(tmp6);
				HX_STACK_LINE(383)
				::cpp::vm::Deque tmp7 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(383)
				Dynamic tmp8 = handler1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(383)
				tmp7->add(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(383)
		::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(handler1,getMethod,id1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		::cpp::vm::Thread thread = tmp1;		HX_STACK_VAR(thread,"thread");
	}
return null();
}


Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",388,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",390,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(392)
				bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(392)
				if ((tmp)){
					HX_STACK_LINE(394)
					handler(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(398)
					int tmp1 = bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(398)
					::String tmp2 = bytes->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(398)
					handler(tmp2).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(390)
		Dynamic callback =  Dynamic(new _Function_1_1(handler));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(404)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		Dynamic tmp1 = callback;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		this->loadBytes(tmp,tmp1);
	}
return null();
}


Void DefaultAssetLibrary_obj::__load( Dynamic getMethod,::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","__load",0xcdf05448,"DefaultAssetLibrary.__load","DefaultAssetLibrary.hx",409,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(getMethod,"getMethod")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(411)
		(::DefaultAssetLibrary_obj::loading)++;

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,handler,Dynamic,getMethod,::String,id)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",413,0x0fc48912)
			{
				HX_STACK_LINE(415)
				::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(415)
				Dynamic tmp1 = getMethod(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(415)
				Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(417)
				::cpp::vm::Deque tmp2 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(417)
				::String tmp3 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(417)
				tmp2->add(tmp3);
				HX_STACK_LINE(418)
				::cpp::vm::Deque tmp4 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(418)
				Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				tmp4->add(tmp5);
				HX_STACK_LINE(419)
				::cpp::vm::Deque tmp6 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(419)
				Dynamic tmp7 = handler;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(419)
				tmp6->add(tmp7);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(413)
		::cpp::vm::Thread tmp = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(handler,getMethod,id)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		::cpp::vm::Thread thread = tmp;		HX_STACK_VAR(thread,"thread");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DefaultAssetLibrary_obj,__load,(void))

int DefaultAssetLibrary_obj::loaded;

int DefaultAssetLibrary_obj::loading;

::cpp::vm::Deque DefaultAssetLibrary_obj::threadQueue;

::String DefaultAssetLibrary_obj::threadTag;

Void DefaultAssetLibrary_obj::__poll( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","__poll",0xd0953861,"DefaultAssetLibrary.__poll","DefaultAssetLibrary.hx",426,0x0fc48912)
		HX_STACK_LINE(428)
		int tmp = ::DefaultAssetLibrary_obj::loading;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		int tmp1 = ::DefaultAssetLibrary_obj::loaded;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		if ((tmp2)){
			HX_STACK_LINE(430)
			::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			Dynamic tmp4 = tmp3->pop(false);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			Dynamic message = tmp4;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(432)
			bool tmp5 = (message != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(432)
			if ((tmp5)){
				HX_STACK_LINE(434)
				Dynamic tmp6 = message;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(434)
				::String tmp7 = ::DefaultAssetLibrary_obj::threadTag;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(434)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(434)
				if ((tmp8)){
					HX_STACK_LINE(436)
					(::DefaultAssetLibrary_obj::loaded)++;
					HX_STACK_LINE(438)
					::cpp::vm::Deque tmp9 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(438)
					Dynamic tmp10 = tmp9->pop(false);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(438)
					Dynamic data = tmp10;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(439)
					::cpp::vm::Deque tmp11 = ::DefaultAssetLibrary_obj::threadQueue;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(439)
					Dynamic tmp12 = tmp11->pop(false);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(439)
					Dynamic handler = tmp12;		HX_STACK_VAR(handler,"handler");
					HX_STACK_LINE(441)
					bool tmp13 = (handler != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(441)
					if ((tmp13)){
						HX_STACK_LINE(443)
						handler(data);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,__poll,(void))


DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::openfl::_legacy::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::openfl::_legacy::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"__load") ) { return __load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultAssetLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { outValue = loaded; return true;  }
		if (HX_FIELD_EQ(inName,"__poll") ) { outValue = __poll_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loading") ) { outValue = loading; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threadTag") ) { outValue = threadTag; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadQueue") ) { outValue = threadQueue; return true;  }
	}
	return false;
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultAssetLibrary_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loading") ) { loading=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threadTag") ) { threadTag=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadQueue") ) { threadQueue=ioValue.Cast< ::cpp::vm::Deque >(); return true; }
	}
	return false;
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DefaultAssetLibrary_obj::loaded,HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsInt,(void *) &DefaultAssetLibrary_obj::loading,HX_HCSTRING("loading","\x7c","\xce","\xf2","\x08")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(void *) &DefaultAssetLibrary_obj::threadQueue,HX_HCSTRING("threadQueue","\x67","\x26","\xdb","\xb1")},
	{hx::fsString,(void *) &DefaultAssetLibrary_obj::threadTag,HX_HCSTRING("threadTag","\xb0","\xf1","\xb3","\xd4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("__load","\x46","\xfd","\xaf","\xf6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::loaded,"loaded");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::loading,"loading");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::threadQueue,"threadQueue");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::threadTag,"threadTag");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::loaded,"loaded");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::loading,"loading");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::threadQueue,"threadQueue");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::threadTag,"threadTag");
};

#endif

hx::Class DefaultAssetLibrary_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("loading","\x7c","\xce","\xf2","\x08"),
	HX_HCSTRING("threadQueue","\x67","\x26","\xdb","\xb1"),
	HX_HCSTRING("threadTag","\xb0","\xf1","\xb3","\xd4"),
	HX_HCSTRING("__poll","\x5f","\xe1","\x54","\xf9"),
	::String(null()) };

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultAssetLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &DefaultAssetLibrary_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultAssetLibrary_obj >;
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

void DefaultAssetLibrary_obj::__boot()
{
	loaded= (int)0;
	loading= (int)0;
	threadQueue= ::cpp::vm::Deque_obj::__new();
	threadTag= HX_HCSTRING("__RESULT__","\x5d","\x8c","\xd4","\x7d");
}

