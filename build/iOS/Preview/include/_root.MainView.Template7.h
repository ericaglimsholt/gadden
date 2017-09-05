// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template7;}

namespace g{

// public partial sealed class MainView.Template7 :501
// {
::g::Uno::UX::Template_type* MainView__Template7_typeof();
void MainView__Template7__ctor_1_fn(MainView__Template7* __this, ::g::MainView* parent, ::g::MainView* parentInstance);
void MainView__Template7__New1_fn(MainView__Template7* __this, uObject** __retval);
void MainView__Template7__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template7** __retval);

struct MainView__Template7 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView__Template7_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MainView*> __parent1;
    uWeak< ::g::MainView*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template7_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::MainView* parent, ::g::MainView* parentInstance);
    static MainView__Template7* New2(::g::MainView* parent, ::g::MainView* parentInstance);
};
// }

} // ::g
