// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker__Fence;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ThreadWorker.Fence :1878
// {
uType* ThreadWorker__Fence_typeof();
void ThreadWorker__Fence__ctor__fn(ThreadWorker__Fence* __this);
void ThreadWorker__Fence__get_IsSignaled_fn(ThreadWorker__Fence* __this, bool* __retval);
void ThreadWorker__Fence__New1_fn(ThreadWorker__Fence** __retval);
void ThreadWorker__Fence__Signal_fn(ThreadWorker__Fence* __this);

struct ThreadWorker__Fence : uObject
{
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _signaled;

    void ctor_();
    bool IsSignaled();
    void Signal();
    static ThreadWorker__Fence* New1();
};
// }

}}} // ::g::Fuse::Reactive
