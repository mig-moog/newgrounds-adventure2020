// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_formats_swf_SWFLite
#include <openfl/_internal/formats/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73476240e0218aae_15_new,"openfl._internal.symbols.SWFSymbol","new",0x42b29449,"openfl._internal.symbols.SWFSymbol.new","openfl/_internal/symbols/SWFSymbol.hx",15,0xf7371d0a)
HX_LOCAL_STACK_FRAME(_hx_pos_73476240e0218aae_19___createObject,"openfl._internal.symbols.SWFSymbol","__createObject",0x3e7224b2,"openfl._internal.symbols.SWFSymbol.__createObject","openfl/_internal/symbols/SWFSymbol.hx",19,0xf7371d0a)
namespace openfl{
namespace _internal{
namespace symbols{

void SWFSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_73476240e0218aae_15_new)
            	HX_STACK_THIS(this)
HXLINE(  15)
            	}

Dynamic SWFSymbol_obj::__CreateEmpty() { return new SWFSymbol_obj; }

void *SWFSymbol_obj::_hx_vtable = 0;

Dynamic SWFSymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SWFSymbol_obj > _hx_result = new SWFSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SWFSymbol_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ec9976b;
}

 ::openfl::display::DisplayObject SWFSymbol_obj::_hx___createObject( ::openfl::_internal::formats::swf::SWFLite swf){
            	HX_STACKFRAME(&_hx_pos_73476240e0218aae_19___createObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(swf,"swf")
HXLINE(  19)
HXDLIN(  19)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFSymbol_obj,_hx___createObject,return )


::hx::ObjectPtr< SWFSymbol_obj > SWFSymbol_obj::__new() {
	::hx::ObjectPtr< SWFSymbol_obj > __this = new SWFSymbol_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SWFSymbol_obj > SWFSymbol_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SWFSymbol_obj *__this = (SWFSymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SWFSymbol_obj), true, "openfl._internal.symbols.SWFSymbol"));
	*(void **)__this = SWFSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SWFSymbol_obj::SWFSymbol_obj()
{
}

void SWFSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFSymbol);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void SWFSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(id,"id");
}

::hx::Val SWFSymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( className ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return ::hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SWFSymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SWFSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("id",db,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SWFSymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SWFSymbol_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsInt,(int)offsetof(SWFSymbol_obj,id),HX_("id",db,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SWFSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String SWFSymbol_obj_sMemberFields[] = {
	HX_("className",a3,92,3d,dc),
	HX_("id",db,5b,00,00),
	HX_("__createObject",fb,41,55,58),
	::String(null()) };

::hx::Class SWFSymbol_obj::__mClass;

void SWFSymbol_obj::__register()
{
	SWFSymbol_obj _hx_dummy;
	SWFSymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.SWFSymbol",d7,bb,56,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SWFSymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SWFSymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SWFSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SWFSymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols