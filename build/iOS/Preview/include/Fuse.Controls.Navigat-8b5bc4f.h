// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.5/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.While-4de49602.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct PageWhileNavigatingFreeze;}}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class PageWhileNavigatingFreeze :260
// {
::g::Fuse::Triggers::Trigger_type* PageWhileNavigatingFreeze_typeof();
void PageWhileNavigatingFreeze__ctor_7_fn(PageWhileNavigatingFreeze* __this, ::g::Fuse::Controls::Page* page1);
void PageWhileNavigatingFreeze__InitializeUX_fn(PageWhileNavigatingFreeze* __this);
void PageWhileNavigatingFreeze__New3_fn(::g::Fuse::Controls::Page* page1, PageWhileNavigatingFreeze** __retval);

struct PageWhileNavigatingFreeze : ::g::Fuse::Navigation::WhileNavigating
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return PageWhileNavigatingFreeze_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Controls::Page*> page;
    uStrong< ::g::Uno::UX::Property1*> page_IsFrozen_inst;

    void ctor_7(::g::Fuse::Controls::Page* page1);
    void InitializeUX();
    static PageWhileNavigatingFreeze* New3(::g::Fuse::Controls::Page* page1);
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
