// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Motion/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Motion{struct DelayFunction;}}}
namespace g{namespace Fuse{namespace Motion{struct DelayFunction__SetClosure;}}}

namespace g{
namespace Fuse{
namespace Motion{

// private sealed class DelayFunction.SetClosure :530
// {
uType* DelayFunction__SetClosure_typeof();
void DelayFunction__SetClosure__ctor__fn(DelayFunction__SetClosure* __this, ::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v);
void DelayFunction__SetClosure__New1_fn(::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v, DelayFunction__SetClosure** __retval);
void DelayFunction__SetClosure__Run_fn(DelayFunction__SetClosure* __this);

struct DelayFunction__SetClosure : uObject
{
    uStrong< ::g::Fuse::Motion::DelayFunction*> _func;
    uStrong<uObject*> _target;
    uStrong<uObject*> _v;

    void ctor_(::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v);
    void Run();
    static DelayFunction__SetClosure* New1(::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v);
};
// }

}}} // ::g::Fuse::Motion
