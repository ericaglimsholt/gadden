// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.5/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct FocusGained;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class FocusGained :440
// {
::g::Fuse::VisualEvent_type* FocusGained_typeof();
void FocusGained__ctor_1_fn(FocusGained* __this);
void FocusGained__Invoke_fn(FocusGained* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args);
void FocusGained__New1_fn(FocusGained** __retval);

struct FocusGained : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static FocusGained* New1();
};
// }

}}} // ::g::Fuse::Input
