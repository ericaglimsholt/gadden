// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct MobileBootstrapping;}}

namespace g{
namespace Fuse{

// internal sealed extern class MobileBootstrapping :2036
// {
uType* MobileBootstrapping_typeof();
void MobileBootstrapping__ctor__fn(MobileBootstrapping* __this);
void MobileBootstrapping__Init_fn();
void MobileBootstrapping__New1_fn(MobileBootstrapping** __retval);
void MobileBootstrapping__OnEnterForeground_fn(int* state);
void MobileBootstrapping__OnEnterInteractive_fn(int* state);
void MobileBootstrapping__OnExitInteractive_fn(int* state);
void MobileBootstrapping__OnStarted_fn(int* state);
void MobileBootstrapping__OnTerminating_fn(int* state);

struct MobileBootstrapping : uObject
{
    static bool _isInited_;
    static bool& _isInited() { return _isInited_; }

    void ctor_();
    static void Init();
    static MobileBootstrapping* New1();
    static void OnEnterForeground(int state);
    static void OnEnterInteractive(int state);
    static void OnExitInteractive(int state);
    static void OnStarted(int state);
    static void OnTerminating(int state);
};
// }

}} // ::g::Fuse
