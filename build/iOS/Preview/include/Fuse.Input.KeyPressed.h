// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.5/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct KeyPressed;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class KeyPressed :987
// {
::g::Fuse::VisualEvent_type* KeyPressed_typeof();
void KeyPressed__ctor_1_fn(KeyPressed* __this);
void KeyPressed__Invoke_fn(KeyPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args);
void KeyPressed__New1_fn(KeyPressed** __retval);

struct KeyPressed : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static KeyPressed* New1();
};
// }

}}} // ::g::Fuse::Input
