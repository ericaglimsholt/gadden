// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Page :2038
// {
::g::Fuse::Controls::Panel_type* Page_typeof();
void Page__ctor_7_fn(Page* __this);
void Page__CleanupBusy_fn(Page* __this);
void Page__CleanupFreezeTrigger_fn(Page* __this);
void Page__get_Freeze_fn(Page* __this, int* __retval);
void Page__set_Freeze_fn(Page* __this, int* value);
void Page__ListenBusy_fn(Page* __this);
void Page__New4_fn(Page** __retval);
void Page__OnBusyUpdate_fn(Page* __this);
void Page__OnRestoreState_fn(Page* __this, uObject* state);
void Page__OnRooted_fn(Page* __this);
void Page__OnSaveState_fn(Page* __this, uObject** __retval);
void Page__OnUnrooted_fn(Page* __this);
void Page__Prepare_fn(Page* __this, uString* parameter);
void Page__get_PrepareBusy_fn(Page* __this, int* __retval);
void Page__set_PrepareBusy_fn(Page* __this, int* value);
void Page__RestoreState_fn(Page* __this, uObject* state);
void Page__SaveState_fn(Page* __this, uObject** __retval);
void Page__SetupFreezeTrigger_fn(Page* __this);
void Page__get_Title_fn(Page* __this, uString** __retval);
void Page__set_Title_fn(Page* __this, uString* value);

struct Page : ::g::Fuse::Controls::Panel
{
    int _busyFrames;
    int _freeze;
    uStrong< ::g::Fuse::Triggers::Trigger*> _freezeTrigger;
    bool _isBusy;
    int _prepare;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _prepareBusy;

    void ctor_7();
    void CleanupBusy();
    void CleanupFreezeTrigger();
    int Freeze();
    void Freeze(int value);
    void ListenBusy();
    void OnBusyUpdate();
    void OnRestoreState(uObject* state);
    uObject* OnSaveState();
    int PrepareBusy();
    void PrepareBusy(int value);
    void RestoreState(uObject* state);
    uObject* SaveState();
    void SetupFreezeTrigger();
    uString* Title();
    void Title(uString* value);
    static Page* New4();
};
// }

}}} // ::g::Fuse::Controls
