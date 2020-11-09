// Generated by Haxe 4.1.2
#ifndef INCLUDED_actors_Guy
#define INCLUDED_actors_Guy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(actors,Guy)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace actors{


class HXCPP_CLASS_ATTRIBUTES Guy_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Guy_obj OBJ_;
		Guy_obj();

	public:
		enum { _hx_ClassId = 0x51b5004d };

		void __construct( ::flixel::FlxState scene,Float _x,Float _y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="actors.Guy")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"actors.Guy"); }
		static ::hx::ObjectPtr< Guy_obj > __new( ::flixel::FlxState scene,Float _x,Float _y);
		static ::hx::ObjectPtr< Guy_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState scene,Float _x,Float _y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Guy_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Guy",6b,46,36,00); }

		void update(Float elapsed);

};

} // end namespace actors

#endif /* INCLUDED_actors_Guy */ 