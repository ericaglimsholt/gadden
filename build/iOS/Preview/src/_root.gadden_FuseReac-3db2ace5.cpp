// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_FuseReac-3db2ace5.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class gadden_FuseReactiveEach_Items_Property :84
// {
static void gadden_FuseReactiveEach_Items_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Each*/], offsetof(::g::gadden_FuseReactiveEach_Items_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* gadden_FuseReactiveEach_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(gadden_FuseReactiveEach_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("gadden_FuseReactiveEach_Items_Property", options);
    type->fp_build_ = gadden_FuseReactiveEach_Items_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))gadden_FuseReactiveEach_Items_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))gadden_FuseReactiveEach_Items_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))gadden_FuseReactiveEach_Items_Property__Set1_fn;
    return type;
}

// public gadden_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :87
void gadden_FuseReactiveEach_Items_Property__ctor_3_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :89
void gadden_FuseReactiveEach_Items_Property__Get1_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("gadden_FuseReactiveEach_Items_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Items(), void();
}

// public gadden_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :87
void gadden_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, gadden_FuseReactiveEach_Items_Property** __retval)
{
    *__retval = gadden_FuseReactiveEach_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :88
void gadden_FuseReactiveEach_Items_Property__get_Object_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :90
void gadden_FuseReactiveEach_Items_Property__Set1_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("gadden_FuseReactiveEach_Items_Property", "Set(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Items(v);
}

// public gadden_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :87
void gadden_FuseReactiveEach_Items_Property::ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public gadden_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :87
gadden_FuseReactiveEach_Items_Property* gadden_FuseReactiveEach_Items_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    gadden_FuseReactiveEach_Items_Property* obj1 = (gadden_FuseReactiveEach_Items_Property*)uNew(gadden_FuseReactiveEach_Items_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
