// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseControlsNavigationControl_Active_Property;}

namespace g{

// internal sealed class gadden_FuseControlsNavigationControl_Active_Property :58
// {
::g::Uno::UX::Property1_type* gadden_FuseControlsNavigationControl_Active_Property_typeof();
void gadden_FuseControlsNavigationControl_Active_Property__ctor_3_fn(gadden_FuseControlsNavigationControl_Active_Property* __this, ::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseControlsNavigationControl_Active_Property__Get1_fn(gadden_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval);
void gadden_FuseControlsNavigationControl_Active_Property__New1_fn(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name, gadden_FuseControlsNavigationControl_Active_Property** __retval);
void gadden_FuseControlsNavigationControl_Active_Property__get_Object_fn(gadden_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseControlsNavigationControl_Active_Property__Set1_fn(gadden_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin);

struct gadden_FuseControlsNavigationControl_Active_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::NavigationControl*> _obj;

    void ctor_3(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseControlsNavigationControl_Active_Property* New1(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
