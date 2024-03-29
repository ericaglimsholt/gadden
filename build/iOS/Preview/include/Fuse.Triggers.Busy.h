// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Busy;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Busy :137
// {
::g::Fuse::Node_type* Busy_typeof();
void Busy__ctor_3_fn(Busy* __this);
void Busy__activate_fn(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args);
void Busy__get_Activity_fn(Busy* __this, int* __retval);
void Busy__set_Activity_fn(Busy* __this, int* value);
void Busy__deactivate_fn(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args);
void Busy__get_IsActive_fn(Busy* __this, bool* __retval);
void Busy__set_IsActive_fn(Busy* __this, bool* value);
void Busy__New2_fn(Busy** __retval);
void Busy__get_On_fn(Busy* __this, int* __retval);
void Busy__set_On_fn(Busy* __this, int* value);
void Busy__OnParameterChanged_fn(Busy* __this, uObject* s, ::g::Uno::EventArgs* args);
void Busy__OnRooted_fn(Busy* __this);
void Busy__OnUnrooted_fn(Busy* __this);
void Busy__UpdateState_fn(Busy* __this);

struct Busy : ::g::Fuse::Behavior
{
    int _activity;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    bool _isActive;
    int _on;
    int _rootOn;

    void ctor_3();
    int Activity();
    void Activity(int value);
    bool IsActive();
    void IsActive(bool value);
    int On();
    void On(int value);
    void OnParameterChanged(uObject* s, ::g::Uno::EventArgs* args);
    void UpdateState();
    static void activate(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args);
    static void deactivate(::g::Fuse::Scripting::Context* c, Busy* b, uArray* args);
    static Busy* New2();
};
// }

}}} // ::g::Fuse::Triggers
