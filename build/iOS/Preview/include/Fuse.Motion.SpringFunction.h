// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Motion/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Motion{struct SpringFunction;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class SpringFunction :427
// {
::g::Fuse::Reactive::Expression_type* SpringFunction_typeof();
void SpringFunction__ctor_1_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression* value);
void SpringFunction__New1_fn(::g::Fuse::Reactive::Expression* value, SpringFunction** __retval);
void SpringFunction__Subscribe_fn(SpringFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void SpringFunction__get_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression** __retval);
void SpringFunction__set_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression* value);

struct SpringFunction : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Value;

    void ctor_1(::g::Fuse::Reactive::Expression* value);
    ::g::Fuse::Reactive::Expression* Value();
    void Value(::g::Fuse::Reactive::Expression* value);
    static SpringFunction* New1(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Motion
