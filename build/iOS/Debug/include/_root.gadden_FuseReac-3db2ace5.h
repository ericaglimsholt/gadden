// This file was generated based on '.uno/ux11/gadden.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class gadden_FuseReactiveEach_Items_Property :65
// {
::g::Uno::UX::Property1_type* gadden_FuseReactiveEach_Items_Property_typeof();
void gadden_FuseReactiveEach_Items_Property__ctor_3_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseReactiveEach_Items_Property__Get1_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void gadden_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, gadden_FuseReactiveEach_Items_Property** __retval);
void gadden_FuseReactiveEach_Items_Property__get_Object_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseReactiveEach_Items_Property__Set1_fn(gadden_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct gadden_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
