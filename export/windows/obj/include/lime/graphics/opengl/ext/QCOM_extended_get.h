// Generated by Haxe 4.1.2
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get
#define INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_34469f9be3ed880b_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_extended_get)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_extended_get_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_extended_get_obj OBJ_;
		QCOM_extended_get_obj();

	public:
		enum { _hx_ClassId = 0x0171ada5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_extended_get")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_extended_get"); }

		inline static ::hx::ObjectPtr< QCOM_extended_get_obj > __new() {
			::hx::ObjectPtr< QCOM_extended_get_obj > __this = new QCOM_extended_get_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_extended_get_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_extended_get_obj *__this = (QCOM_extended_get_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_extended_get_obj), false, "lime.graphics.opengl.ext.QCOM_extended_get"));
			*(void **)__this = QCOM_extended_get_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_34469f9be3ed880b_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->STATE_RESTORE = 35804;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_OBJECT_VALID_QCOM = 35803;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_TARGET_QCOM = 35802;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_NUM_LEVELS_QCOM = 35801;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_IMAGE_VALID_QCOM = 35800;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_TYPE_QCOM = 35799;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_FORMAT_QCOM = 35798;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_INTERNAL_FORMAT_QCOM = 35797;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_DEPTH_QCOM = 35796;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_HEIGHT_QCOM = 35795;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::QCOM_extended_get)(__this) )->TEXTURE_WIDTH_QCOM = 35794;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_extended_get_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_extended_get",3f,13,03,b6); }

		int TEXTURE_WIDTH_QCOM;
		int TEXTURE_HEIGHT_QCOM;
		int TEXTURE_DEPTH_QCOM;
		int TEXTURE_INTERNAL_FORMAT_QCOM;
		int TEXTURE_FORMAT_QCOM;
		int TEXTURE_TYPE_QCOM;
		int TEXTURE_IMAGE_VALID_QCOM;
		int TEXTURE_NUM_LEVELS_QCOM;
		int TEXTURE_TARGET_QCOM;
		int TEXTURE_OBJECT_VALID_QCOM;
		int STATE_RESTORE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get */ 