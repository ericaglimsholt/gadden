// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct XFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class XFunction :3795
// {
::g::Fuse::Elements::LayoutFunction_type* XFunction_typeof();
void XFunction__ctor_3_fn(XFunction* __this, ::g::Fuse::Reactive::Expression* element);
void XFunction__GetCurrentValue_fn(XFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval);
void XFunction__GetValue_fn(XFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);
void XFunction__New1_fn(::g::Fuse::Reactive::Expression* element, XFunction** __retval);

struct XFunction : ::g::Fuse::Elements::LayoutFunction
{
    void ctor_3(::g::Fuse::Reactive::Expression* element);
    static XFunction* New1(::g::Fuse::Reactive::Expression* element);
};
// }

}}} // ::g::Fuse::Elements
