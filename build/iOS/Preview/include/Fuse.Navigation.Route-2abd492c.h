// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterCancelNavigation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class RouterCancelNavigation :3221
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RouterCancelNavigation_typeof();
void RouterCancelNavigation__ctor_2_fn(RouterCancelNavigation* __this);
void RouterCancelNavigation__New2_fn(RouterCancelNavigation** __retval);
void RouterCancelNavigation__Perform_fn(RouterCancelNavigation* __this, ::g::Fuse::Node* n);
void RouterCancelNavigation__get_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router** __retval);
void RouterCancelNavigation__set_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router* value);

struct RouterCancelNavigation : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Navigation::Router*> _Router;

    void ctor_2();
    ::g::Fuse::Navigation::Router* Router();
    void Router(::g::Fuse::Navigation::Router* value);
    static RouterCancelNavigation* New2();
};
// }

}}} // ::g::Fuse::Navigation
