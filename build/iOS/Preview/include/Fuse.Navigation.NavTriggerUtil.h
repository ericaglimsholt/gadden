// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Navigation{struct NavTriggerUtil;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal static class NavTriggerUtil :1133
// {
uClassType* NavTriggerUtil_typeof();
void NavTriggerUtil__CrossesZero_fn(double* a, double* b, bool* __retval);
void NavTriggerUtil__Opposite_fn(int* v, int* __retval);

struct NavTriggerUtil : uObject
{
    static bool CrossesZero(double a, double b);
    static int Opposite(int v);
};
// }

}}} // ::g::Fuse::Navigation
