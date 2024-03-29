// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.5/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Scrolled;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Scrolled :223
// {
::g::Fuse::Triggers::Trigger_type* Scrolled_typeof();
void Scrolled__ctor_6_fn(Scrolled* __this);
void Scrolled__check_fn(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args);
void Scrolled__Check_fn(Scrolled* __this);
void Scrolled__New2_fn(Scrolled** __retval);
void Scrolled__OnRooted_fn(Scrolled* __this);
void Scrolled__OnScrollPositionChanged_fn(Scrolled* __this, uObject* s, uObject* args);
void Scrolled__OnUnrooted_fn(Scrolled* __this);
void Scrolled__get_RelativeTo_fn(Scrolled* __this, uObject** __retval);
void Scrolled__set_RelativeTo_fn(Scrolled* __this, uObject* value);
void Scrolled__get_To_fn(Scrolled* __this, int* __retval);
void Scrolled__set_To_fn(Scrolled* __this, int* value);
void Scrolled__Update_fn(Scrolled* __this);
void Scrolled__get_Within_fn(Scrolled* __this, float* __retval);
void Scrolled__set_Within_fn(Scrolled* __this, float* value);

struct Scrolled : ::g::Fuse::Triggers::PulseTrigger
{
    bool _inZone;
    uStrong< ::g::Fuse::Triggers::ScrollRegion*> _region;
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;

    void ctor_6();
    void Check();
    void OnScrollPositionChanged(uObject* s, uObject* args);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    int To();
    void To(int value);
    void Update();
    float Within();
    void Within(float value);
    static void check(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args);
    static Scrolled* New2();
};
// }

}}} // ::g::Fuse::Triggers
