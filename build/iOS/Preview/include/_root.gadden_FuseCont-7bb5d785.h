// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/gadden.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct gadden_FuseControlsImage_Color_Property;}

namespace g{

// internal sealed class gadden_FuseControlsImage_Color_Property :133
// {
::g::Uno::UX::Property1_type* gadden_FuseControlsImage_Color_Property_typeof();
void gadden_FuseControlsImage_Color_Property__ctor_3_fn(gadden_FuseControlsImage_Color_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void gadden_FuseControlsImage_Color_Property__Get1_fn(gadden_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void gadden_FuseControlsImage_Color_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, gadden_FuseControlsImage_Color_Property** __retval);
void gadden_FuseControlsImage_Color_Property__get_Object_fn(gadden_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void gadden_FuseControlsImage_Color_Property__Set1_fn(gadden_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct gadden_FuseControlsImage_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static gadden_FuseControlsImage_Color_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
