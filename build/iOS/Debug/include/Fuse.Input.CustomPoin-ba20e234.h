// This file was generated based on '../../../../../Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct CustomPointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class CustomPointerEventArgs :1826
// {
uType* CustomPointerEventArgs_typeof();
void CustomPointerEventArgs__ctor_3_fn(CustomPointerEventArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);

struct CustomPointerEventArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
