// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileNotEmpty;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class WhileNotEmpty :2535
// {
::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof();
void WhileNotEmpty__ctor_7_fn(WhileNotEmpty* __this);
void WhileNotEmpty__New3_fn(WhileNotEmpty** __retval);

struct WhileNotEmpty : ::g::Fuse::Reactive::WhileCount
{
    void ctor_7();
    static WhileNotEmpty* New3();
};
// }

}}} // ::g::Fuse::Reactive
