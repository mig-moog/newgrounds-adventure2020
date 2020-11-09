// Generated by Haxe 4.1.2
#include <hxcpp.h>

#ifndef INCLUDED_actors_Guy
#include <actors/Guy.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_452f8f49dbbdb468_7_new,"actors.Guy","new",0x2d64544d,"actors.Guy.new","actors/Guy.hx",7,0xf4faea84)
static const int _hx_array_data_4c9f29db_1[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_452f8f49dbbdb468_16_update,"actors.Guy","update",0x1790743c,"actors.Guy.update","actors/Guy.hx",16,0xf4faea84)
namespace actors{

void Guy_obj::__construct( ::flixel::FlxState scene,Float _x,Float _y){
            	HX_STACKFRAME(&_hx_pos_452f8f49dbbdb468_7_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(scene,"scene")
            	HX_STACK_ARG(_x,"_x")
            	HX_STACK_ARG(_y,"_y")
HXLINE(   7)
HXLINE(   8)		super::__construct(_x,_y,null());
HXLINE(   9)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
HXLINE(  10)		this->loadGraphic(HX_("assets/images/guy.png",fb,30,0b,3f),true,8,19,null(),null());
HXLINE(  11)		this->animation->add(HX_("walk",09,5d,f2,4e),::Array_obj< int >::fromData( _hx_array_data_4c9f29db_1,2),4,true,null(),null());
HXLINE(  13)		scene->add(::hx::ObjectPtr<OBJ_>(this)).StaticCast<  ::flixel::FlxBasic >();
            	}

Dynamic Guy_obj::__CreateEmpty() { return new Guy_obj; }

void *Guy_obj::_hx_vtable = 0;

Dynamic Guy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Guy_obj > _hx_result = new Guy_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Guy_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x51b5004d) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x51b5004d;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Guy_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_452f8f49dbbdb468_16_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  16)
HXLINE(  17)		this->animation->play(HX_("walk",09,5d,f2,4e),null(),null(),null());
HXLINE(  19)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< Guy_obj > Guy_obj::__new( ::flixel::FlxState scene,Float _x,Float _y) {
	::hx::ObjectPtr< Guy_obj > __this = new Guy_obj();
	__this->__construct(scene,_x,_y);
	return __this;
}

::hx::ObjectPtr< Guy_obj > Guy_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState scene,Float _x,Float _y) {
	Guy_obj *__this = (Guy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Guy_obj), true, "actors.Guy"));
	*(void **)__this = Guy_obj::_hx_vtable;
	__this->__construct(scene,_x,_y);
	return __this;
}

Guy_obj::Guy_obj()
{
}

::hx::Val Guy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Guy_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Guy_obj_sStaticStorageInfo = 0;
#endif

static ::String Guy_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Guy_obj::__mClass;

void Guy_obj::__register()
{
	Guy_obj _hx_dummy;
	Guy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("actors.Guy",db,29,9f,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Guy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Guy_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Guy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Guy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace actors