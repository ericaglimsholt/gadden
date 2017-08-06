// This file was generated based on build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Uno.Float4.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return MainView_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return MainView_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return MainView_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return MainView_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return MainView_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return MainView_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return MainView_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return MainView_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return MainView_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return MainView_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return MainView_typeof()->Init(), __selector28_; }
    static ::g::Uno::UX::Selector __selector29_;
    static ::g::Uno::UX::Selector& __selector29() { return MainView_typeof()->Init(), __selector29_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector30_;
    static ::g::Uno::UX::Selector& __selector30() { return MainView_typeof()->Init(), __selector30_; }
    static ::g::Uno::UX::Selector __selector31_;
    static ::g::Uno::UX::Selector& __selector31() { return MainView_typeof()->Init(), __selector31_; }
    static ::g::Uno::UX::Selector __selector32_;
    static ::g::Uno::UX::Selector& __selector32() { return MainView_typeof()->Init(), __selector32_; }
    static ::g::Uno::UX::Selector __selector33_;
    static ::g::Uno::UX::Selector& __selector33() { return MainView_typeof()->Init(), __selector33_; }
    static ::g::Uno::UX::Selector __selector34_;
    static ::g::Uno::UX::Selector& __selector34() { return MainView_typeof()->Init(), __selector34_; }
    static ::g::Uno::UX::Selector __selector35_;
    static ::g::Uno::UX::Selector& __selector35() { return MainView_typeof()->Init(), __selector35_; }
    static ::g::Uno::UX::Selector __selector36_;
    static ::g::Uno::UX::Selector& __selector36() { return MainView_typeof()->Init(), __selector36_; }
    static ::g::Uno::UX::Selector __selector37_;
    static ::g::Uno::UX::Selector& __selector37() { return MainView_typeof()->Init(), __selector37_; }
    static ::g::Uno::UX::Selector __selector38_;
    static ::g::Uno::UX::Selector& __selector38() { return MainView_typeof()->Init(), __selector38_; }
    static ::g::Uno::UX::Selector __selector39_;
    static ::g::Uno::UX::Selector& __selector39() { return MainView_typeof()->Init(), __selector39_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector40_;
    static ::g::Uno::UX::Selector& __selector40() { return MainView_typeof()->Init(), __selector40_; }
    static ::g::Uno::UX::Selector __selector41_;
    static ::g::Uno::UX::Selector& __selector41() { return MainView_typeof()->Init(), __selector41_; }
    static ::g::Uno::UX::Selector __selector42_;
    static ::g::Uno::UX::Selector& __selector42() { return MainView_typeof()->Init(), __selector42_; }
    static ::g::Uno::UX::Selector __selector43_;
    static ::g::Uno::UX::Selector& __selector43() { return MainView_typeof()->Init(), __selector43_; }
    static ::g::Uno::UX::Selector __selector44_;
    static ::g::Uno::UX::Selector& __selector44() { return MainView_typeof()->Init(), __selector44_; }
    static ::g::Uno::UX::Selector __selector45_;
    static ::g::Uno::UX::Selector& __selector45() { return MainView_typeof()->Init(), __selector45_; }
    static ::g::Uno::UX::Selector __selector46_;
    static ::g::Uno::UX::Selector& __selector46() { return MainView_typeof()->Init(), __selector46_; }
    static ::g::Uno::UX::Selector __selector47_;
    static ::g::Uno::UX::Selector& __selector47() { return MainView_typeof()->Init(), __selector47_; }
    static ::g::Uno::UX::Selector __selector48_;
    static ::g::Uno::UX::Selector& __selector48() { return MainView_typeof()->Init(), __selector48_; }
    static ::g::Uno::UX::Selector __selector49_;
    static ::g::Uno::UX::Selector& __selector49() { return MainView_typeof()->Init(), __selector49_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector50_;
    static ::g::Uno::UX::Selector& __selector50() { return MainView_typeof()->Init(), __selector50_; }
    static ::g::Uno::UX::Selector __selector51_;
    static ::g::Uno::UX::Selector& __selector51() { return MainView_typeof()->Init(), __selector51_; }
    static ::g::Uno::UX::Selector __selector52_;
    static ::g::Uno::UX::Selector& __selector52() { return MainView_typeof()->Init(), __selector52_; }
    static ::g::Uno::UX::Selector __selector53_;
    static ::g::Uno::UX::Selector& __selector53() { return MainView_typeof()->Init(), __selector53_; }
    static ::g::Uno::UX::Selector __selector54_;
    static ::g::Uno::UX::Selector& __selector54() { return MainView_typeof()->Init(), __selector54_; }
    static ::g::Uno::UX::Selector __selector55_;
    static ::g::Uno::UX::Selector& __selector55() { return MainView_typeof()->Init(), __selector55_; }
    static ::g::Uno::UX::Selector __selector56_;
    static ::g::Uno::UX::Selector& __selector56() { return MainView_typeof()->Init(), __selector56_; }
    static ::g::Uno::UX::Selector __selector57_;
    static ::g::Uno::UX::Selector& __selector57() { return MainView_typeof()->Init(), __selector57_; }
    static ::g::Uno::UX::Selector __selector58_;
    static ::g::Uno::UX::Selector& __selector58() { return MainView_typeof()->Init(), __selector58_; }
    static ::g::Uno::UX::Selector __selector59_;
    static ::g::Uno::UX::Selector& __selector59() { return MainView_typeof()->Init(), __selector59_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector60_;
    static ::g::Uno::UX::Selector& __selector60() { return MainView_typeof()->Init(), __selector60_; }
    static ::g::Uno::UX::Selector __selector61_;
    static ::g::Uno::UX::Selector& __selector61() { return MainView_typeof()->Init(), __selector61_; }
    static ::g::Uno::UX::Selector __selector62_;
    static ::g::Uno::UX::Selector& __selector62() { return MainView_typeof()->Init(), __selector62_; }
    static ::g::Uno::UX::Selector __selector63_;
    static ::g::Uno::UX::Selector& __selector63() { return MainView_typeof()->Init(), __selector63_; }
    static ::g::Uno::UX::Selector __selector64_;
    static ::g::Uno::UX::Selector& __selector64() { return MainView_typeof()->Init(), __selector64_; }
    static ::g::Uno::UX::Selector __selector65_;
    static ::g::Uno::UX::Selector& __selector65() { return MainView_typeof()->Init(), __selector65_; }
    static ::g::Uno::UX::Selector __selector66_;
    static ::g::Uno::UX::Selector& __selector66() { return MainView_typeof()->Init(), __selector66_; }
    static ::g::Uno::UX::Selector __selector67_;
    static ::g::Uno::UX::Selector& __selector67() { return MainView_typeof()->Init(), __selector67_; }
    static ::g::Uno::UX::Selector __selector68_;
    static ::g::Uno::UX::Selector& __selector68() { return MainView_typeof()->Init(), __selector68_; }
    static ::g::Uno::UX::Selector __selector69_;
    static ::g::Uno::UX::Selector& __selector69() { return MainView_typeof()->Init(), __selector69_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Page*> about;
    uStrong< ::g::Fuse::Controls::Page*> aboutus;
    uStrong< ::g::Fuse::Controls::Panel*> AboutUsTab;
    uStrong< ::g::Fuse::Controls::Image*> BackgroundImage;
    uStrong< ::g::Fuse::Controls::Image*> crossIcon;
    uStrong< ::g::Uno::UX::Property1*> crossIcon_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> crossIconMap;
    uStrong< ::g::Uno::UX::Property1*> crossIconMap_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> crossIconMap2;
    uStrong< ::g::Uno::UX::Property1*> crossIconMap2_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Page*> exhibitor;
    uStrong< ::g::Fuse::Controls::Panel*> ExhibitorDetails;
    uStrong< ::g::Fuse::Controls::Panel*> ExibitorList;
    uStrong< ::g::Fuse::Controls::Page*> goodiebag;
    uStrong< ::g::Fuse::Controls::Panel*> GoodiebagTab;
    uStrong< ::g::Fuse::Controls::Page*> icebreaker;
    uStrong< ::g::Fuse::Controls::Panel*> iconPanel;
    uStrong< ::g::Fuse::Controls::Panel*> indicator;
    uStrong< ::g::Uno::UX::Property1*> indicator_Element_LayoutMaster_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicatorAbout;
    uStrong< ::g::Uno::UX::Property1*> indicatorAbout_Element_LayoutMaster_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicatorSponsor;
    uStrong< ::g::Uno::UX::Property1*> indicatorSponsor_Element_LayoutMaster_inst;
    uStrong< ::g::Fuse::Controls::Image*> infoIcon;
    uStrong< ::g::Uno::UX::Property1*> infoIcon_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> infoIconMap;
    uStrong< ::g::Uno::UX::Property1*> infoIconMap_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> infoIconMap2;
    uStrong< ::g::Uno::UX::Property1*> infoIconMap2_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Page*> login;
    uStrong< ::g::Fuse::Controls::Image*> logoImage;
    uStrong< ::g::Uno::UX::Property1*> logoImage_Width_inst;
    uStrong< ::g::Fuse::Controls::Page*> map;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> MapToggle;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> MapToggle2;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation;
    uStrong< ::g::Uno::UX::Property1*> navigation_Active_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> navigationControl;
    uStrong< ::g::Uno::UX::Property1*> navigationControl_Active_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> navigationControlAbout;
    uStrong< ::g::Uno::UX::Property1*> navigationControlAbout_Active_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> navigationSponsors;
    uStrong< ::g::Uno::UX::Property1*> navigationSponsors_Active_inst;
    uStrong< ::g::Fuse::Controls::Page*> news;
    uStrong< ::g::Fuse::Controls::Panel*> NewsDetails;
    uStrong< ::g::Uno::UX::Property1*> NewsDetails_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> NewsFeed;
    uStrong< ::g::Uno::UX::Property1*> NewsFeed_Opacity_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> opacityNews;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> opacityProgram;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> opacityToggle;
    uStrong< ::g::Fuse::Controls::Page*> partners;
    uStrong< ::g::Fuse::Controls::Page*> plan3;
    uStrong< ::g::Fuse::Controls::Panel*> plan3Tab;
    uStrong< ::g::Fuse::Controls::Page*> plan4;
    uStrong< ::g::Fuse::Controls::Panel*> plan4Tab;
    uStrong< ::g::Fuse::Controls::DockPanel*> popupBackground;
    uStrong< ::g::Fuse::Controls::Panel*> popupInfo;
    uStrong< ::g::Uno::UX::Property1*> popupInfo_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> popupInfoMap;
    uStrong< ::g::Uno::UX::Property1*> popupInfoMap_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> popupInfoMap2;
    uStrong< ::g::Fuse::Controls::Page*> program;
    uStrong< ::g::Fuse::Controls::Panel*> ProgramDetails;
    uStrong< ::g::Uno::UX::Property1*> ProgramDetails_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> ProgramFeed;
    uStrong< ::g::Uno::UX::Property1*> ProgramFeed_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Page*> project;
    uStrong< ::g::Fuse::Controls::Panel*> ProjectTab;
    static uSStrong< ::g::Fuse::Font*> Raleway_;
    static uSStrong< ::g::Fuse::Font*>& Raleway() { return MainView_typeof()->Init(), Raleway_; }
    static uSStrong< ::g::Fuse::Font*> RalewayBlack_;
    static uSStrong< ::g::Fuse::Font*>& RalewayBlack() { return MainView_typeof()->Init(), RalewayBlack_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Controls::Shadow*> shadow;
    uStrong< ::g::Uno::UX::Property1*> shadow_Color_inst;
    uStrong< ::g::Fuse::Controls::Shadow*> shadowProfile;
    uStrong< ::g::Fuse::Controls::Panel*> sidebar;
    uStrong< ::g::Fuse::Controls::Rectangle*> sidebarFade;
    uStrong< ::g::Uno::UX::Property1*> sidebarFade_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> sidebarProfile;
    uStrong< ::g::Fuse::Controls::Page*> sponsor;
    uStrong< ::g::Fuse::Controls::Page*> sponsors;
    uStrong< ::g::Fuse::Controls::Panel*> SponsorTab;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Data_inst;
    uStrong< ::g::Uno::UX::Property1*> temp11_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp12_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp13_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp14_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp15_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp16_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp17_Data_inst;
    uStrong< ::g::Uno::UX::Property1*> temp18_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp19_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp20_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp21_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp22_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Data_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;
    uStrong< ::g::Fuse::Controls::EdgeNavigator*> TheSidebar;
    uStrong< ::g::Fuse::Triggers::Timeline*> timeline;
    static uSStrong< ::g::Fuse::Font*> TitleFont_;
    static uSStrong< ::g::Fuse::Font*>& TitleFont() { return MainView_typeof()->Init(), TitleFont_; }
    uStrong< ::g::Fuse::Controls::Panel*> TitleTest;

    void ctor_4();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
