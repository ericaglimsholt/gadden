// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterModify;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class RouterModify :3323
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RouterModify_typeof();
void RouterModify__ctor_2_fn(RouterModify* __this);
void RouterModify__get_Bookmark_fn(RouterModify* __this, uString** __retval);
void RouterModify__set_Bookmark_fn(RouterModify* __this, uString* value);
void RouterModify__get_How_fn(RouterModify* __this, int* __retval);
void RouterModify__set_How_fn(RouterModify* __this, int* value);
void RouterModify__New2_fn(RouterModify** __retval);
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n);
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval);
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value);
void RouterModify__get_Style_fn(RouterModify* __this, uString** __retval);
void RouterModify__set_Style_fn(RouterModify* __this, uString* value);
void RouterModify__get_Transition_fn(RouterModify* __this, int* __retval);
void RouterModify__set_Transition_fn(RouterModify* __this, int* value);

struct RouterModify : ::g::Fuse::Triggers::Actions::TriggerAction
{
    int _how;
    int _transition;
    uStrong<uString*> _Bookmark;
    uStrong< ::g::Fuse::Navigation::Router*> _Router;
    uStrong<uString*> _Style;

    void ctor_2();
    uString* Bookmark();
    void Bookmark(uString* value);
    int How();
    void How(int value);
    ::g::Fuse::Navigation::Router* Router();
    void Router(::g::Fuse::Navigation::Router* value);
    uString* Style();
    void Style(uString* value);
    int Transition();
    void Transition(int value);
    static RouterModify* New2();
};
// }

}}} // ::g::Fuse::Navigation
