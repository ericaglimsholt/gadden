// This file was generated based on build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AboutAboutUs.h>
#include <_root.gadden_bundle.h>
#include <_root.gadden_FuseControlsImage_Url_Property.h>
#include <_root.gadden_FuseControlsNavigationControl_Active_Property.h>
#include <_root.gadden_FuseControlsShadow_Color_Property.h>
#include <_root.gadden_FuseControlsTextControl_Value_Property.h>
#include <_root.gadden_FuseControlsTextInputControl_Value_Property.h>
#include <_root.gadden_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.gadden_FuseElementsElement_Opacity_Property.h>
#include <_root.gadden_FuseElementsElement_Width_Property.h>
#include <_root.gadden_FuseReactiveEach_Items_Property.h>
#include <_root.gadden_FuseReactiveWith_Data_Property.h>
#include <_root.Hamburger.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MainView.Template6.h>
#include <_root.MainView.Template7.h>
#include <_root.MainView.Template8.h>
#include <_root.MainView.Template9.h>
#include <_root.Paragraph.h>
#include <_root.Profile.h>
#include <_root.SmallText.h>
#include <_root.Tab.h>
#include <_root.TabText.h>
#include <_root.Title.h>
#include <_root.TitleBig.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.ToUpper.h>
#include <Fuse.Reactive.With.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[232];
static uType* TYPES[14];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :837
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 69, ::STRINGS[0/*"TheSidebar"*/], ::STRINGS[1/*"sidebarProf...*/], ::STRINGS[2/*"shadowProfile"*/], ::STRINGS[3/*"sidebar"*/], ::STRINGS[4/*"shadow"*/], ::STRINGS[5/*"router"*/], ::STRINGS[6/*"temp_eb0"*/], ::STRINGS[7/*"temp_eb1"*/], ::STRINGS[8/*"temp_eb2"*/], ::STRINGS[9/*"temp_eb3"*/], ::STRINGS[10/*"temp_eb4"*/], ::STRINGS[11/*"temp_eb5"*/], ::STRINGS[12/*"temp_eb6"*/], ::STRINGS[13/*"temp_eb7"*/], ::STRINGS[14/*"sidebarFade"*/], ::STRINGS[15/*"navigation"*/], ::STRINGS[16/*"news"*/], ::STRINGS[17/*"NewsFeed"*/], ::STRINGS[18/*"logoImage"*/], ::STRINGS[19/*"opacityNews"*/], ::STRINGS[20/*"NewsDetails"*/], ::STRINGS[21/*"TitleTest"*/], ::STRINGS[22/*"BackgroundI...*/], ::STRINGS[23/*"partners"*/], ::STRINGS[24/*"exhibitor"*/], ::STRINGS[25/*"ExibitorList"*/], ::STRINGS[26/*"ExhibitorDe...*/], ::STRINGS[27/*"program"*/], ::STRINGS[28/*"ProgramFeed"*/], ::STRINGS[29/*"opacityProg...*/], ::STRINGS[30/*"ProgramDeta...*/], ::STRINGS[31/*"icebreaker"*/], ::STRINGS[32/*"popupBackgr...*/], ::STRINGS[33/*"infoIcon"*/], ::STRINGS[34/*"crossIcon"*/], ::STRINGS[35/*"opacityToggle"*/], ::STRINGS[36/*"popupInfo"*/], ::STRINGS[37/*"iconPanel"*/], ::STRINGS[38/*"timeline"*/], ::STRINGS[39/*"sponsors"*/], ::STRINGS[40/*"indicatorSp...*/], ::STRINGS[41/*"SponsorTab"*/], ::STRINGS[42/*"GoodiebagTab"*/], ::STRINGS[43/*"navigationS...*/], ::STRINGS[44/*"sponsor"*/], ::STRINGS[45/*"goodiebag"*/], ::STRINGS[46/*"map"*/], ::STRINGS[47/*"indicator"*/], ::STRINGS[48/*"plan3Tab"*/], ::STRINGS[49/*"plan4Tab"*/], ::STRINGS[50/*"navigationC...*/], ::STRINGS[51/*"plan3"*/], ::STRINGS[52/*"infoIconMap"*/], ::STRINGS[53/*"crossIconMap"*/], ::STRINGS[54/*"MapToggle"*/], ::STRINGS[55/*"popupInfoMap"*/], ::STRINGS[56/*"plan4"*/], ::STRINGS[57/*"infoIconMap2"*/], ::STRINGS[58/*"crossIconMap2"*/], ::STRINGS[59/*"MapToggle2"*/], ::STRINGS[60/*"popupInfoMap2"*/], ::STRINGS[61/*"aboutus"*/], ::STRINGS[62/*"indicatorAb...*/], ::STRINGS[63/*"AboutUsTab"*/], 
        ::STRINGS[64/*"ProjectTab"*/], ::STRINGS[65/*"navigationC...*/], ::STRINGS[66/*"about"*/], ::STRINGS[67/*"project"*/], ::STRINGS[68/*"login"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[69/*"Color"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[70/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[71/*"Active"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[72/*"Items"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[73/*"Width"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[74/*"Url"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[75/*"Value"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[76/*"Data"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[77/*"Element.Lay...*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TheSidebar"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"sidebarProf...*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"shadowProfile"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"sidebar"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"shadow"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"router"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"sidebarFade"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"navigation"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"news"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"NewsFeed"*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"logoImage"*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"opacityNews"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"NewsDetails"*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"TitleTest"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"BackgroundI...*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"partners"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"exhibitor"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"ExibitorList"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"ExhibitorDe...*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"program"*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"ProgramFeed"*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"opacityProg...*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"ProgramDeta...*/]);
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"icebreaker"*/]);
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"popupBackgr...*/]);
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"infoIcon"*/]);
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"crossIcon"*/]);
    MainView::__selector36_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"opacityToggle"*/]);
    MainView::__selector37_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"popupInfo"*/]);
    MainView::__selector38_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"iconPanel"*/]);
    MainView::__selector39_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"timeline"*/]);
    MainView::__selector40_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"sponsors"*/]);
    MainView::__selector41_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"indicatorSp...*/]);
    MainView::__selector42_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"SponsorTab"*/]);
    MainView::__selector43_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"GoodiebagTab"*/]);
    MainView::__selector44_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"navigationS...*/]);
    MainView::__selector45_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"sponsor"*/]);
    MainView::__selector46_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"goodiebag"*/]);
    MainView::__selector47_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[46/*"map"*/]);
    MainView::__selector48_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[47/*"indicator"*/]);
    MainView::__selector49_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[48/*"plan3Tab"*/]);
    MainView::__selector50_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[49/*"plan4Tab"*/]);
    MainView::__selector51_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[50/*"navigationC...*/]);
    MainView::__selector52_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[51/*"plan3"*/]);
    MainView::__selector53_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[52/*"infoIconMap"*/]);
    MainView::__selector54_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[53/*"crossIconMap"*/]);
    MainView::__selector55_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[54/*"MapToggle"*/]);
    MainView::__selector56_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[55/*"popupInfoMap"*/]);
    MainView::__selector57_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[56/*"plan4"*/]);
    MainView::__selector58_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[57/*"infoIconMap2"*/]);
    MainView::__selector59_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[58/*"crossIconMap2"*/]);
    MainView::__selector60_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[59/*"MapToggle2"*/]);
    MainView::__selector61_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[60/*"popupInfoMap2"*/]);
    MainView::__selector62_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[61/*"aboutus"*/]);
    MainView::__selector63_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[62/*"indicatorAb...*/]);
    MainView::__selector64_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[63/*"AboutUsTab"*/]);
    MainView::__selector65_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[64/*"ProjectTab"*/]);
    MainView::__selector66_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[65/*"navigationC...*/]);
    MainView::__selector67_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[66/*"about"*/]);
    MainView::__selector68_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[67/*"project"*/]);
    MainView::__selector69_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[68/*"login"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[78/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[79/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[80/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[81/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[82/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[83/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[84/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[85/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[86/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[87/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[88/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[89/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[90/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[91/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[92/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[93/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[94/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[95/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[96/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[97/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[98/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[99/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[100/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[101/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[102/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[103/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[104/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[105/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[106/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[107/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[108/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[109/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[109/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[110/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[110/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[111/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[111/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[112/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[112/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[113/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[113/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[114/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[114/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[115/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[115/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[116/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[116/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[117/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[117/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[118/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[118/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[119/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[119/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[120/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[120/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[121/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[121/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[122/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[122/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[123/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[123/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[124/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[124/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[125/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[125/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[126/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[127/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[128/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[129/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[130/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[131/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[132/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[133/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[134/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[134/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[135/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[136/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[137/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[137/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[138/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[139/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[140/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[140/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[141/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[142/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[143/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[144/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[145/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[146/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[147/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[148/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[149/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[150/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[151/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[152/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[153/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[154/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[155/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[156/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[157/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[158/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[159/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[160/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[161/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[162/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[73/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[163/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Raleway_, ::STRINGS[164/*"Raleway"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RalewayBlack_, ::STRINGS[165/*"RalewayBlack"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::TitleFont_, ::STRINGS[166/*"TitleFont"*/]);
    MainView::Raleway_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::RalewayRegular78093407()));
    MainView::RalewayBlack_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::RalewayBlackcc425b56()));
    MainView::TitleFont_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::font752a4b0a()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Raleway_, ::STRINGS[164/*"Raleway"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::RalewayBlack_, ::STRINGS[165/*"RalewayBlack"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::TitleFont_, ::STRINGS[166/*"TitleFont"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TheSidebar");
    ::STRINGS[1] = uString::Const("sidebarProfile");
    ::STRINGS[2] = uString::Const("shadowProfile");
    ::STRINGS[3] = uString::Const("sidebar");
    ::STRINGS[4] = uString::Const("shadow");
    ::STRINGS[5] = uString::Const("router");
    ::STRINGS[6] = uString::Const("temp_eb0");
    ::STRINGS[7] = uString::Const("temp_eb1");
    ::STRINGS[8] = uString::Const("temp_eb2");
    ::STRINGS[9] = uString::Const("temp_eb3");
    ::STRINGS[10] = uString::Const("temp_eb4");
    ::STRINGS[11] = uString::Const("temp_eb5");
    ::STRINGS[12] = uString::Const("temp_eb6");
    ::STRINGS[13] = uString::Const("temp_eb7");
    ::STRINGS[14] = uString::Const("sidebarFade");
    ::STRINGS[15] = uString::Const("navigation");
    ::STRINGS[16] = uString::Const("news");
    ::STRINGS[17] = uString::Const("NewsFeed");
    ::STRINGS[18] = uString::Const("logoImage");
    ::STRINGS[19] = uString::Const("opacityNews");
    ::STRINGS[20] = uString::Const("NewsDetails");
    ::STRINGS[21] = uString::Const("TitleTest");
    ::STRINGS[22] = uString::Const("BackgroundImage");
    ::STRINGS[23] = uString::Const("partners");
    ::STRINGS[24] = uString::Const("exhibitor");
    ::STRINGS[25] = uString::Const("ExibitorList");
    ::STRINGS[26] = uString::Const("ExhibitorDetails");
    ::STRINGS[27] = uString::Const("program");
    ::STRINGS[28] = uString::Const("ProgramFeed");
    ::STRINGS[29] = uString::Const("opacityProgram");
    ::STRINGS[30] = uString::Const("ProgramDetails");
    ::STRINGS[31] = uString::Const("icebreaker");
    ::STRINGS[32] = uString::Const("popupBackground");
    ::STRINGS[33] = uString::Const("infoIcon");
    ::STRINGS[34] = uString::Const("crossIcon");
    ::STRINGS[35] = uString::Const("opacityToggle");
    ::STRINGS[36] = uString::Const("popupInfo");
    ::STRINGS[37] = uString::Const("iconPanel");
    ::STRINGS[38] = uString::Const("timeline");
    ::STRINGS[39] = uString::Const("sponsors");
    ::STRINGS[40] = uString::Const("indicatorSponsor");
    ::STRINGS[41] = uString::Const("SponsorTab");
    ::STRINGS[42] = uString::Const("GoodiebagTab");
    ::STRINGS[43] = uString::Const("navigationSponsors");
    ::STRINGS[44] = uString::Const("sponsor");
    ::STRINGS[45] = uString::Const("goodiebag");
    ::STRINGS[46] = uString::Const("map");
    ::STRINGS[47] = uString::Const("indicator");
    ::STRINGS[48] = uString::Const("plan3Tab");
    ::STRINGS[49] = uString::Const("plan4Tab");
    ::STRINGS[50] = uString::Const("navigationControl");
    ::STRINGS[51] = uString::Const("plan3");
    ::STRINGS[52] = uString::Const("infoIconMap");
    ::STRINGS[53] = uString::Const("crossIconMap");
    ::STRINGS[54] = uString::Const("MapToggle");
    ::STRINGS[55] = uString::Const("popupInfoMap");
    ::STRINGS[56] = uString::Const("plan4");
    ::STRINGS[57] = uString::Const("infoIconMap2");
    ::STRINGS[58] = uString::Const("crossIconMap2");
    ::STRINGS[59] = uString::Const("MapToggle2");
    ::STRINGS[60] = uString::Const("popupInfoMap2");
    ::STRINGS[61] = uString::Const("aboutus");
    ::STRINGS[62] = uString::Const("indicatorAbout");
    ::STRINGS[63] = uString::Const("AboutUsTab");
    ::STRINGS[64] = uString::Const("ProjectTab");
    ::STRINGS[65] = uString::Const("navigationControlAbout");
    ::STRINGS[66] = uString::Const("about");
    ::STRINGS[67] = uString::Const("project");
    ::STRINGS[68] = uString::Const("login");
    ::STRINGS[69] = uString::Const("Color");
    ::STRINGS[70] = uString::Const("Opacity");
    ::STRINGS[71] = uString::Const("Active");
    ::STRINGS[72] = uString::Const("Items");
    ::STRINGS[73] = uString::Const("Width");
    ::STRINGS[74] = uString::Const("Url");
    ::STRINGS[75] = uString::Const("Value");
    ::STRINGS[76] = uString::Const("Data");
    ::STRINGS[77] = uString::Const("Element.LayoutMaster");
    ::STRINGS[78] = uString::Const("Linear");
    ::STRINGS[79] = uString::Const("QuadraticIn");
    ::STRINGS[80] = uString::Const("QuadraticOut");
    ::STRINGS[81] = uString::Const("QuadraticInOut");
    ::STRINGS[82] = uString::Const("CubicIn");
    ::STRINGS[83] = uString::Const("CubicOut");
    ::STRINGS[84] = uString::Const("CubicInOut");
    ::STRINGS[85] = uString::Const("QuarticIn");
    ::STRINGS[86] = uString::Const("QuarticOut");
    ::STRINGS[87] = uString::Const("QuarticInOut");
    ::STRINGS[88] = uString::Const("QuinticIn");
    ::STRINGS[89] = uString::Const("QuinticOut");
    ::STRINGS[90] = uString::Const("QuinticInOut");
    ::STRINGS[91] = uString::Const("SinusoidalIn");
    ::STRINGS[92] = uString::Const("SinusoidalOut");
    ::STRINGS[93] = uString::Const("SinusoidalInOut");
    ::STRINGS[94] = uString::Const("ExponentialIn");
    ::STRINGS[95] = uString::Const("ExponentialOut");
    ::STRINGS[96] = uString::Const("ExponentialInOut");
    ::STRINGS[97] = uString::Const("CircularIn");
    ::STRINGS[98] = uString::Const("CircularOut");
    ::STRINGS[99] = uString::Const("CircularInOut");
    ::STRINGS[100] = uString::Const("ElasticIn");
    ::STRINGS[101] = uString::Const("ElasticOut");
    ::STRINGS[102] = uString::Const("ElasticInOut");
    ::STRINGS[103] = uString::Const("BackIn");
    ::STRINGS[104] = uString::Const("BackOut");
    ::STRINGS[105] = uString::Const("BackInOut");
    ::STRINGS[106] = uString::Const("BounceIn");
    ::STRINGS[107] = uString::Const("BounceOut");
    ::STRINGS[108] = uString::Const("BounceInOut");
    ::STRINGS[109] = uString::Const("Transparent");
    ::STRINGS[110] = uString::Const("Black");
    ::STRINGS[111] = uString::Const("Silver");
    ::STRINGS[112] = uString::Const("Gray");
    ::STRINGS[113] = uString::Const("White");
    ::STRINGS[114] = uString::Const("Maroon");
    ::STRINGS[115] = uString::Const("Red");
    ::STRINGS[116] = uString::Const("Purple");
    ::STRINGS[117] = uString::Const("Fuchsia");
    ::STRINGS[118] = uString::Const("Green");
    ::STRINGS[119] = uString::Const("Lime");
    ::STRINGS[120] = uString::Const("Olive");
    ::STRINGS[121] = uString::Const("Yellow");
    ::STRINGS[122] = uString::Const("Navy");
    ::STRINGS[123] = uString::Const("Blue");
    ::STRINGS[124] = uString::Const("Teal");
    ::STRINGS[125] = uString::Const("Aqua");
    ::STRINGS[126] = uString::Const("TopLeft");
    ::STRINGS[127] = uString::Const("Center");
    ::STRINGS[128] = uString::Const("Anchor");
    ::STRINGS[129] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[130] = uString::Const("VerticalBoxCenter");
    ::STRINGS[131] = uString::Const("TransformOriginOffset");
    ::STRINGS[132] = uString::Const("PositionOffset");
    ::STRINGS[133] = uString::Const("SizeFactor");
    ::STRINGS[134] = uString::Const("Size");
    ::STRINGS[135] = uString::Const("GiveFocus");
    ::STRINGS[136] = uString::Const("Keyboard");
    ::STRINGS[137] = uString::Const("LayoutChange");
    ::STRINGS[138] = uString::Const("WorldPositionChange");
    ::STRINGS[139] = uString::Const("PositionChange");
    ::STRINGS[140] = uString::Const("SizeChange");
    ::STRINGS[141] = uString::Const("Points");
    ::STRINGS[142] = uString::Const("Pixels");
    ::STRINGS[143] = uString::Const("ContentSize");
    ::STRINGS[144] = uString::Const("ScrollViewSize");
    ::STRINGS[145] = uString::Const("PreloadRetain");
    ::STRINGS[146] = uString::Const("UnloadUnused");
    ::STRINGS[147] = uString::Const("QuickUnload");
    ::STRINGS[148] = uString::Const("UnloadInBackground");
    ::STRINGS[149] = uString::Const("Thin");
    ::STRINGS[150] = uString::Const("Light");
    ::STRINGS[151] = uString::Const("Regular");
    ::STRINGS[152] = uString::Const("Medium");
    ::STRINGS[153] = uString::Const("Bold");
    ::STRINGS[154] = uString::Const("ThinItalic");
    ::STRINGS[155] = uString::Const("LightItalic");
    ::STRINGS[156] = uString::Const("Italic");
    ::STRINGS[157] = uString::Const("MediumItalic");
    ::STRINGS[158] = uString::Const("BoldItalic");
    ::STRINGS[159] = uString::Const("PlatformDefault");
    ::STRINGS[160] = uString::Const("Identity");
    ::STRINGS[161] = uString::Const("Local");
    ::STRINGS[162] = uString::Const("ParentSize");
    ::STRINGS[163] = uString::Const("Height");
    ::STRINGS[164] = uString::Const("Raleway");
    ::STRINGS[165] = uString::Const("RalewayBlack");
    ::STRINGS[166] = uString::Const("TitleFont");
    ::STRINGS[167] = uString::Const("closeTest");
    ::STRINGS[168] = uString::Const("dataSource");
    ::STRINGS[169] = uString::Const("image");
    ::STRINGS[170] = uString::Const("title");
    ::STRINGS[171] = uString::Const("text");
    ::STRINGS[172] = uString::Const("selectedArticle");
    ::STRINGS[173] = uString::Const("logo");
    ::STRINGS[174] = uString::Const("name");
    ::STRINGS[175] = uString::Const("selectedExhibitor");
    ::STRINGS[176] = uString::Const("dataProgram");
    ::STRINGS[177] = uString::Const("date");
    ::STRINGS[178] = uString::Const(" ");
    ::STRINGS[179] = uString::Const("time");
    ::STRINGS[180] = uString::Const("location");
    ::STRINGS[181] = uString::Const("description");
    ::STRINGS[182] = uString::Const("selectedProgram");
    ::STRINGS[183] = uString::Const("IceBreakers");
    ::STRINGS[184] = uString::Const("dataSponsors");
    ::STRINGS[185] = uString::Const("dataGoodiebag");
    ::STRINGS[186] = uString::Const("dataInfo");
    ::STRINGS[187] = uString::Const("dataContact");
    ::STRINGS[188] = uString::Const("\n"
        "\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "    function closeTest(){\n"
        "        TheSidebar.dismiss()\n"
        "    }\n"
        "\n"
        "    module.exports = {\n"
        "\t\t\tcloseTest: closeTest\n"
        "\t\t};\n"
        "\t");
    ::STRINGS[189] = uString::Const("MainView.ux");
    ::STRINGS[190] = uString::Const("LOGGA IN");
    ::STRINGS[191] = uString::Const("STJ\303\204RNMARKERADE UTST\303\204LLARE");
    ::STRINGS[192] = uString::Const("F\303\226REL\303\204SNING");
    ::STRINGS[193] = uString::Const("14.00 SEKTION 4 SAL 3");
    ::STRINGS[194] = uString::Const("NYHETER");
    ::STRINGS[195] = uString::Const("PARTNERS");
    ::STRINGS[196] = uString::Const("UTST\303\204LLARE");
    ::STRINGS[197] = uString::Const("PROGRAM");
    ::STRINGS[198] = uString::Const("ICE BREAKER");
    ::STRINGS[199] = uString::Const("SPONSORER");
    ::STRINGS[200] = uString::Const("KARTA");
    ::STRINGS[201] = uString::Const("OM OSS");
    ::STRINGS[202] = uString::Const("Pages/News/NewsPage.ux");
    ::STRINGS[203] = uString::Const("Pages/Partners/PartnersPage.ux");
    ::STRINGS[204] = uString::Const("Pages/Exhibitor/ExhibitorPage.ux");
    ::STRINGS[205] = uString::Const("S\303\266k utst\303\244llare");
    ::STRINGS[206] = uString::Const("Pages/Program/ProgramPage.ux");
    ::STRINGS[207] = uString::Const("ONSDAG 8/11");
    ::STRINGS[208] = uString::Const("BOKA F\303\226REL\303\204SNING");
    ::STRINGS[209] = uString::Const("Pages/IceBreakers/IceBreakersPage.ux");
    ::STRINGS[210] = uString::Const("clicked");
    ::STRINGS[211] = uString::Const("Gadden har 4000 bes\303\266kare varje \303\245r. Hur sjutton g\303\266r man ett bra och best\303\245ende f\303\266rsta intryck i den konkurrensen?\n"
        "\n"
        "                    Lugn, vi hj\303\244lper dig! Skaka telefonen och f\303\245 tips p\303\245 hur du kan bryta isen med din dr\303\266marbetsgivare.");
    ::STRINGS[212] = uString::Const("SHAKE TO BREAK");
    ::STRINGS[213] = uString::Const("Skaka telefonen f\303\266r att f\303\245 tips p\303\245 ice breakers");
    ::STRINGS[214] = uString::Const("Pages/Sponsors/SponsorsPage.ux");
    ::STRINGS[215] = uString::Const("GOODIEBAG");
    ::STRINGS[216] = uString::Const("Tack!");
    ::STRINGS[217] = uString::Const("Pages/Map/MapPage.ux");
    ::STRINGS[218] = uString::Const("PLAN 3");
    ::STRINGS[219] = uString::Const("PLAN 4");
    ::STRINGS[220] = uString::Const("Infodisk");
    ::STRINGS[221] = uString::Const("F\303\266retagsgarderob");
    ::STRINGS[222] = uString::Const("F\303\266retagslounge");
    ::STRINGS[223] = uString::Const("Studentgarderob");
    ::STRINGS[224] = uString::Const("Studentlounge");
    ::STRINGS[225] = uString::Const("Pages/AboutUs/AboutUsPage.ux");
    ::STRINGS[226] = uString::Const("PROJEKTKOMMITT\303\210N");
    ::STRINGS[227] = uString::Const("PROJEKTKOMMIT\303\211N");
    ::STRINGS[228] = uString::Const("Pages/Login/Login.ux");
    ::STRINGS[229] = uString::Const("E-POST");
    ::STRINGS[230] = uString::Const("NAMN");
    ::STRINGS[231] = uString::Const("LOGGA IN / REGISTRERA");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, about), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, aboutus), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, AboutUsTab), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, BackgroundImage), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, crossIcon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, crossIcon_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, crossIconMap), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, crossIconMap_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, crossIconMap2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, crossIconMap2_Opacity_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, exhibitor), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ExhibitorDetails), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ExibitorList), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, goodiebag), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, GoodiebagTab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, icebreaker), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, iconPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicatorAbout), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicatorAbout_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicatorSponsor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::MainView, indicatorSponsor_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, infoIcon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, infoIcon_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, infoIconMap), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, infoIconMap_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, infoIconMap2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, infoIconMap2_Opacity_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, login), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, logoImage), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::MainView, logoImage_Width_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, map), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, MapToggle), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, MapToggle2), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigation_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationControl), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationControl_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationControlAbout), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationControlAbout_Active_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigationSponsors), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, navigationSponsors_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, news), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, NewsDetails), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, NewsDetails_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, NewsFeed), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, NewsFeed_Opacity_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, opacityNews), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, opacityProgram), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, opacityToggle), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, partners), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, plan3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plan3Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, plan4), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plan4Tab), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::MainView, popupBackground), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupInfo), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, popupInfo_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupInfoMap), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, popupInfoMap_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, popupInfoMap2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, program), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ProgramDetails), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, ProgramDetails_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ProgramFeed), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, ProgramFeed_Opacity_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, project), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, ProjectTab), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, router), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(::g::MainView, shadow), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, shadow_Color_inst), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(::g::MainView, shadowProfile), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebar), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, sidebarFade), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, sidebarFade_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebarProfile), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsor), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sponsors), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, SponsorTab), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb7), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp10_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp11_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp12_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp17_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp18_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp19_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp20_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp21_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp22_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp4_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp5_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp6_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp7_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp9_Value_inst), 0,
        ::g::Fuse::Controls::EdgeNavigator_typeof(), offsetof(::g::MainView, TheSidebar), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::MainView, timeline), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, TitleTest), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector45_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector46_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector47_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector48_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector49_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector50_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector51_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector52_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector53_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector54_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector55_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector56_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector57_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector58_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector59_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector60_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector61_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector62_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector63_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector64_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector65_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector66_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector67_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector68_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector69_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Raleway_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::RalewayBlack_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::TitleFont_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Raleway", 197),
        new uField("RalewayBlack", 198),
        new uField("TitleFont", 199));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 200;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :957
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :961
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :957
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector24_;
::g::Uno::UX::Selector MainView::__selector25_;
::g::Uno::UX::Selector MainView::__selector26_;
::g::Uno::UX::Selector MainView::__selector27_;
::g::Uno::UX::Selector MainView::__selector28_;
::g::Uno::UX::Selector MainView::__selector29_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector30_;
::g::Uno::UX::Selector MainView::__selector31_;
::g::Uno::UX::Selector MainView::__selector32_;
::g::Uno::UX::Selector MainView::__selector33_;
::g::Uno::UX::Selector MainView::__selector34_;
::g::Uno::UX::Selector MainView::__selector35_;
::g::Uno::UX::Selector MainView::__selector36_;
::g::Uno::UX::Selector MainView::__selector37_;
::g::Uno::UX::Selector MainView::__selector38_;
::g::Uno::UX::Selector MainView::__selector39_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector40_;
::g::Uno::UX::Selector MainView::__selector41_;
::g::Uno::UX::Selector MainView::__selector42_;
::g::Uno::UX::Selector MainView::__selector43_;
::g::Uno::UX::Selector MainView::__selector44_;
::g::Uno::UX::Selector MainView::__selector45_;
::g::Uno::UX::Selector MainView::__selector46_;
::g::Uno::UX::Selector MainView::__selector47_;
::g::Uno::UX::Selector MainView::__selector48_;
::g::Uno::UX::Selector MainView::__selector49_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector50_;
::g::Uno::UX::Selector MainView::__selector51_;
::g::Uno::UX::Selector MainView::__selector52_;
::g::Uno::UX::Selector MainView::__selector53_;
::g::Uno::UX::Selector MainView::__selector54_;
::g::Uno::UX::Selector MainView::__selector55_;
::g::Uno::UX::Selector MainView::__selector56_;
::g::Uno::UX::Selector MainView::__selector57_;
::g::Uno::UX::Selector MainView::__selector58_;
::g::Uno::UX::Selector MainView::__selector59_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector60_;
::g::Uno::UX::Selector MainView::__selector61_;
::g::Uno::UX::Selector MainView::__selector62_;
::g::Uno::UX::Selector MainView::__selector63_;
::g::Uno::UX::Selector MainView::__selector64_;
::g::Uno::UX::Selector MainView::__selector65_;
::g::Uno::UX::Selector MainView::__selector66_;
::g::Uno::UX::Selector MainView::__selector67_;
::g::Uno::UX::Selector MainView::__selector68_;
::g::Uno::UX::Selector MainView::__selector69_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
uSStrong< ::g::Fuse::Font*> MainView::Raleway_;
uSStrong< ::g::Fuse::Font*> MainView::RalewayBlack_;
uSStrong< ::g::Fuse::Font*> MainView::TitleFont_;

// public MainView() [instance] :957
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :961
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp23 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp24 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp25 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp26 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp27 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp28 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp29 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp30 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp31 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp32 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp33 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp34 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp35 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp36 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp37 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp38 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp39 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::gadden_FuseControlsShadow_Color_Property::New1(shadow, MainView::__selector0());
    sidebarFade = ::g::Fuse::Controls::Rectangle::New3();
    sidebarFade_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(sidebarFade, MainView::__selector1());
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigation, MainView::__selector2());
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp41 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp42 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp44 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp46 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Data* temp47 = ::g::Fuse::Reactive::Data::New1(::STRINGS[167/*"closeTest"*/]);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(::STRINGS[168/*"dataSource"*/]);
    NewsDetails = ::g::Fuse::Controls::Panel::New3();
    NewsDetails_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(NewsDetails, MainView::__selector1());
    logoImage = ::g::Fuse::Controls::Image::New3();
    logoImage_Width_inst = ::g::gadden_FuseElementsElement_Width_Property::New1(logoImage, MainView::__selector4());
    NewsFeed = ::g::Fuse::Controls::Panel::New3();
    NewsFeed_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(NewsFeed, MainView::__selector1());
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    temp1_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp1, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(::STRINGS[169/*"image"*/]);
    ::g::Title* temp2 = ::g::Title::New4();
    temp2_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp2, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp50 = ::g::Fuse::Reactive::Data::New1(::STRINGS[170/*"title"*/]);
    ::g::Paragraph* temp3 = ::g::Paragraph::New4();
    temp3_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp3, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp51 = ::g::Fuse::Reactive::Data::New1(::STRINGS[171/*"text"*/]);
    ::g::Fuse::Reactive::With* temp4 = ::g::Fuse::Reactive::With::New2();
    temp4_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp4, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp52 = ::g::Fuse::Reactive::Data::New1(::STRINGS[172/*"selectedArt...*/]);
    ::g::Fuse::Reactive::Each* temp5 = ::g::Fuse::Reactive::Each::New4();
    temp5_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp5, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp53 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"partners"*/]);
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New4();
    temp6_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp6, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp54 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"exhibitor"*/]);
    ::g::Fuse::Controls::Image* temp7 = ::g::Fuse::Controls::Image::New3();
    temp7_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp7, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp55 = ::g::Fuse::Reactive::Data::New1(::STRINGS[173/*"logo"*/]);
    ::g::Title* temp8 = ::g::Title::New4();
    temp8_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp8, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp56 = ::g::Fuse::Reactive::Data::New1(::STRINGS[174/*"name"*/]);
    ::g::Paragraph* temp9 = ::g::Paragraph::New4();
    temp9_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp9, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp57 = ::g::Fuse::Reactive::Data::New1(::STRINGS[66/*"about"*/]);
    ::g::Fuse::Reactive::With* temp10 = ::g::Fuse::Reactive::With::New2();
    temp10_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp10, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp58 = ::g::Fuse::Reactive::Data::New1(::STRINGS[175/*"selectedExh...*/]);
    ::g::Fuse::Reactive::Each* temp11 = ::g::Fuse::Reactive::Each::New4();
    temp11_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp11, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp59 = ::g::Fuse::Reactive::Data::New1(::STRINGS[176/*"dataProgram"*/]);
    ProgramDetails = ::g::Fuse::Controls::Panel::New3();
    ProgramDetails_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(ProgramDetails, MainView::__selector1());
    ProgramFeed = ::g::Fuse::Controls::Panel::New3();
    ProgramFeed_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(ProgramFeed, MainView::__selector1());
    ::g::Fuse::Controls::Image* temp12 = ::g::Fuse::Controls::Image::New3();
    temp12_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp12, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp60 = ::g::Fuse::Reactive::Data::New1(::STRINGS[169/*"image"*/]);
    ::g::Title* temp13 = ::g::Title::New4();
    temp13_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp13, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp61 = ::g::Fuse::Reactive::Data::New1(::STRINGS[174/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp62 = ::g::Fuse::Reactive::Data::New1(::STRINGS[177/*"date"*/]);
    ::g::Fuse::Reactive::ToUpper* temp63 = ::g::Fuse::Reactive::ToUpper::New1(temp62);
    uString* temp64 = ::STRINGS[178/*" "*/];
    ::g::Fuse::Reactive::Constant* temp65 = ::g::Fuse::Reactive::Constant::New1(temp64);
    ::g::Fuse::Reactive::Data* temp66 = ::g::Fuse::Reactive::Data::New1(::STRINGS[179/*"time"*/]);
    ::g::Fuse::Reactive::Add* temp67 = ::g::Fuse::Reactive::Add::New1(temp65, temp66);
    ::g::SmallText* temp14 = ::g::SmallText::New4();
    temp14_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp14, MainView::__selector6());
    ::g::Fuse::Reactive::Add* temp68 = ::g::Fuse::Reactive::Add::New1(temp63, temp67);
    ::g::Fuse::Reactive::Data* temp69 = ::g::Fuse::Reactive::Data::New1(::STRINGS[180/*"location"*/]);
    ::g::SmallText* temp15 = ::g::SmallText::New4();
    temp15_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp15, MainView::__selector6());
    ::g::Fuse::Reactive::ToUpper* temp70 = ::g::Fuse::Reactive::ToUpper::New1(temp69);
    ::g::Paragraph* temp16 = ::g::Paragraph::New4();
    temp16_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp16, MainView::__selector6());
    ::g::Fuse::Reactive::Data* temp71 = ::g::Fuse::Reactive::Data::New1(::STRINGS[181/*"description"*/]);
    ::g::Fuse::Reactive::With* temp17 = ::g::Fuse::Reactive::With::New2();
    temp17_Data_inst = ::g::gadden_FuseReactiveWith_Data_Property::New1(temp17, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp72 = ::g::Fuse::Reactive::Data::New1(::STRINGS[182/*"selectedPro...*/]);
    popupInfo = ::g::Fuse::Controls::Panel::New3();
    popupInfo_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(popupInfo, MainView::__selector1());
    infoIcon = ::g::Fuse::Controls::Image::New3();
    infoIcon_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(infoIcon, MainView::__selector1());
    crossIcon = ::g::Fuse::Controls::Image::New3();
    crossIcon_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(crossIcon, MainView::__selector1());
    ::g::Fuse::Reactive::Each* temp18 = ::g::Fuse::Reactive::Each::New4();
    temp18_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp18, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp73 = ::g::Fuse::Reactive::Data::New1(::STRINGS[183/*"IceBreakers"*/]);
    navigationSponsors = ::g::Fuse::Controls::PageControl::New4();
    navigationSponsors_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationSponsors, MainView::__selector2());
    indicatorSponsor = ::g::Fuse::Controls::Rectangle::New3();
    indicatorSponsor_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicatorSponsor, MainView::__selector8());
    ::g::Fuse::Reactive::Each* temp19 = ::g::Fuse::Reactive::Each::New4();
    temp19_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp19, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp74 = ::g::Fuse::Reactive::Data::New1(::STRINGS[184/*"dataSponsors"*/]);
    ::g::Fuse::Reactive::Each* temp20 = ::g::Fuse::Reactive::Each::New4();
    temp20_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp20, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp75 = ::g::Fuse::Reactive::Data::New1(::STRINGS[185/*"dataGoodiebag"*/]);
    navigationControl = ::g::Fuse::Controls::PageControl::New4();
    navigationControl_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationControl, MainView::__selector2());
    indicator = ::g::Fuse::Controls::Panel::New3();
    indicator_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MainView::__selector8());
    popupInfoMap = ::g::Fuse::Controls::Panel::New3();
    popupInfoMap_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(popupInfoMap, MainView::__selector1());
    infoIconMap = ::g::Fuse::Controls::Image::New3();
    infoIconMap_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(infoIconMap, MainView::__selector1());
    crossIconMap = ::g::Fuse::Controls::Image::New3();
    crossIconMap_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(crossIconMap, MainView::__selector1());
    infoIconMap2 = ::g::Fuse::Controls::Image::New3();
    infoIconMap2_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(infoIconMap2, MainView::__selector1());
    crossIconMap2 = ::g::Fuse::Controls::Image::New3();
    crossIconMap2_Opacity_inst = ::g::gadden_FuseElementsElement_Opacity_Property::New1(crossIconMap2, MainView::__selector1());
    navigationControlAbout = ::g::Fuse::Controls::PageControl::New4();
    navigationControlAbout_Active_inst = ::g::gadden_FuseControlsNavigationControl_Active_Property::New1(navigationControlAbout, MainView::__selector2());
    indicatorAbout = ::g::Fuse::Controls::Rectangle::New3();
    indicatorAbout_Element_LayoutMaster_inst = ::g::gadden_FuseElementsElement_ElementLayoutMaster_Property::New1(indicatorAbout, MainView::__selector8());
    ::g::Fuse::Reactive::Each* temp21 = ::g::Fuse::Reactive::Each::New4();
    temp21_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp21, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp76 = ::g::Fuse::Reactive::Data::New1(::STRINGS[186/*"dataInfo"*/]);
    ::g::Fuse::Reactive::Each* temp22 = ::g::Fuse::Reactive::Each::New4();
    temp22_Items_inst = ::g::gadden_FuseReactiveEach_Items_Property::New1(temp22, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp77 = ::g::Fuse::Reactive::Data::New1(::STRINGS[187/*"dataContact"*/]);
    ::g::Fuse::iOS::StatusBarConfig* temp78 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp79 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    TheSidebar = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebarProfile = ::g::Fuse::Controls::Panel::New3();
    shadowProfile = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp80 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp81 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], shadow_Color_inst);
    ::g::Fuse::Animations::Change* temp82 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], sidebarFade_Opacity_inst);
    ::g::Fuse::Controls::StackPanel* temp83 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp84 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp85 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp86 = ::g::Paragraph::New4();
    ::g::Fuse::Gestures::Clicked* temp87 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp88 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Controls::Rectangle* temp89 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Title* temp90 = ::g::Title::New4();
    ::g::Fuse::Controls::Grid* temp91 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp92 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp93 = ::g::Fuse::Controls::Grid::New4();
    ::g::Paragraph* temp94 = ::g::Paragraph::New4();
    ::g::Paragraph* temp95 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::Rectangle* temp96 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp97 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp98 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sidebar = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp99 = ::g::Fuse::Controls::Image::New3();
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::StackPanel* temp100 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp101 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp102 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp103 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp104 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp105 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp106 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp107 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp40, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp108 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp109 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp110 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp111 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp112 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp41, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp113 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp114 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp115 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp116 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp117 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp42, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp118 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp119 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp120 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp121 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp122 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp43, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp123 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp124 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp125 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp126 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp127 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp44, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp128 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp129 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp130 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp131 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp132 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp45, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp133 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp134 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp135 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp136 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp137 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp46, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp138 = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp139 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp140 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp141 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp142 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp47, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp143 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp144 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp145 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp146 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp147 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp148 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp149 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::EdgeNavigator* temp150 = ::g::Fuse::Controls::EdgeNavigator::New4();
    ::g::Fuse::Controls::DockPanel* temp151 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp152 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp153 = ::g::Fuse::Controls::Panel::New3();
    ::g::Hamburger* temp154 = ::g::Hamburger::New5();
    ::g::Fuse::Gestures::Clicked* temp155 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp156 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Profile* temp157 = ::g::Profile::New5();
    ::g::Fuse::Gestures::Clicked* temp158 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp159 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Image* temp160 = ::g::Fuse::Controls::Image::New3();
    news = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp161 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp162 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp163 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp164 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template* temp165 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp166 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp48, __g_nametable1, 3);
    opacityNews = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp167 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], NewsDetails_Opacity_inst);
    ::g::Fuse::Animations::Change* temp168 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<Uno.UX.Size>*/], logoImage_Width_inst);
    ::g::Fuse::Animations::Change* temp169 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], NewsFeed_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp170 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp171 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp172 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp173 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp174 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp175 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp49, __g_nametable1, 3);
    TitleTest = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp176 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp50, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp177 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp178 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp179 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp180 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp181 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp51, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp182 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp183 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Data_inst, (uObject*)temp52, __g_nametable1, 3);
    BackgroundImage = ::g::Fuse::Controls::Image::New3();
    partners = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp184 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp185 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp186 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ScrollView* temp187 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp188 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template1* temp189 = MainView__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp190 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Items_inst, (uObject*)temp53, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp191 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    exhibitor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp192 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp193 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ExibitorList = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ScrollView* temp194 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp195 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextInput* temp196 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Image* temp197 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp198 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp199 = ::g::Fuse::Drawing::Stroke::New2();
    MainView__Template2* temp200 = MainView__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp201 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Items_inst, (uObject*)temp54, __g_nametable1, 3);
    ExhibitorDetails = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp202 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp203 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp204 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp205 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp206 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp207 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp208 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Url_inst, (uObject*)temp55, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp209 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp210 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp56, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp211 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp212 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp57, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp213 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Data_inst, (uObject*)temp58, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp214 = ::g::Fuse::Controls::Image::New3();
    program = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp215 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp216 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp217 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp218 = ::g::TitleBig::New4();
    MainView__Template3* temp219 = MainView__Template3::New2(this, this);
    MainView__Template4* temp220 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp221 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Items_inst, (uObject*)temp59, __g_nametable1, 3);
    opacityProgram = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp222 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], ProgramDetails_Opacity_inst);
    ::g::Fuse::Animations::Change* temp223 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], ProgramFeed_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp224 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp225 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp226 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp227 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp228 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Url_inst, (uObject*)temp60, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp229 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp230 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp61, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp231 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp232 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp233 = ::g::Fuse::Reactive::DataBinding::New1(temp14_Value_inst, (uObject*)temp68, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp234 = ::g::Fuse::Reactive::DataBinding::New1(temp15_Value_inst, (uObject*)temp70, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp235 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp236 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Panel* temp237 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp238 = ::g::Fuse::Reactive::DataBinding::New1(temp16_Value_inst, (uObject*)temp71, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp239 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp240 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp241 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Paragraph* temp242 = ::g::Paragraph::New4();
    ::g::Fuse::Reactive::DataBinding* temp243 = ::g::Fuse::Reactive::DataBinding::New1(temp17_Data_inst, (uObject*)temp72, __g_nametable1, 3);
    ::g::Fuse::Controls::DockPanel* temp244 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp245 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp246 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    icebreaker = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp247 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp248 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    popupBackground = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp249 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp250 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp251 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Controls::Image* temp252 = ::g::Fuse::Controls::Image::New3();
    opacityToggle = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp253 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], popupInfo_Opacity_inst);
    ::g::Fuse::Animations::Change* temp254 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], infoIcon_Opacity_inst);
    ::g::Fuse::Animations::Change* temp255 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], crossIcon_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp256 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Paragraph* temp257 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp258 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4f));
    ::g::Fuse::Controls::StackPanel* temp259 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextView* temp260 = ::g::Fuse::Controls::TextView::New3();
    ::g::Paragraph* temp261 = ::g::Paragraph::New4();
    iconPanel = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp262 = ::g::Fuse::Controls::Image::New3();
    timeline = ::g::Fuse::Triggers::Timeline::New2();
    ::g::Fuse::Animations::Move* temp263 = ::g::Fuse::Animations::Move::New2();
    MainView__Template5* temp264 = MainView__Template5::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp265 = ::g::Fuse::Reactive::DataBinding::New1(temp18_Items_inst, (uObject*)temp73, __g_nametable1, 3);
    sponsors = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp266 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp267 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp268 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp269 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp270 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp271 = ::g::Fuse::Controls::Grid::New4();
    SponsorTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp272 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp273 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp274 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    GoodiebagTab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp275 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp276 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp277 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationSponsors_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp278 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    sponsor = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp279 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp280 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::ScrollView* temp281 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Panel* temp282 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp283 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp284 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp285 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp286 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp287 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template6* temp288 = MainView__Template6::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp289 = ::g::Fuse::Reactive::DataBinding::New1(temp19_Items_inst, (uObject*)temp74, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp290 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp291 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    goodiebag = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp292 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp293 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorSponsor_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::ScrollView* temp294 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp295 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template7* temp296 = MainView__Template7::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp297 = ::g::Fuse::Reactive::DataBinding::New1(temp20_Items_inst, (uObject*)temp75, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp298 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    map = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp299 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp300 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::TabText* temp301 = ::g::TabText::New4();
    ::g::Fuse::Controls::Text* temp302 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp303 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Triggers::LayoutAnimation* temp304 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp305 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp306 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp307 = ::g::Fuse::Controls::Grid::New4();
    plan3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp308 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp309 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp310 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    plan4Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::TabText* temp311 = ::g::TabText::New4();
    ::g::Fuse::Gestures::Clicked* temp312 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp313 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControl_Active_inst);
    plan3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp314 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp315 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Gestures::Clicked* temp316 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp317 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    MapToggle = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp318 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], popupInfoMap_Opacity_inst);
    ::g::Fuse::Animations::Change* temp319 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], infoIconMap_Opacity_inst);
    ::g::Fuse::Animations::Change* temp320 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], crossIconMap_Opacity_inst);
    ::g::Fuse::Controls::Rectangle* temp321 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp322 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp323 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp324 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp325 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp326 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp327 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp328 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp329 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp330 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp331 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp332 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp333 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp334 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp335 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp336 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp337 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp338 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4f));
    ::g::Fuse::Controls::Image* temp339 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp340 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    plan4 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp341 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp342 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Gestures::Clicked* temp343 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp344 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    MapToggle2 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp345 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], popupInfoMap_Opacity_inst);
    ::g::Fuse::Animations::Change* temp346 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], infoIconMap2_Opacity_inst);
    ::g::Fuse::Animations::Change* temp347 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], crossIconMap2_Opacity_inst);
    popupInfoMap2 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp348 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp349 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp350 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp351 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp352 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp353 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp354 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp355 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp356 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp357 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp358 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp359 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp360 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp361 = ::g::Paragraph::New4();
    ::g::Fuse::Controls::StackPanel* temp362 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp363 = ::g::Fuse::Controls::Image::New3();
    ::g::Paragraph* temp364 = ::g::Paragraph::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp365 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4f));
    ::g::Fuse::Controls::Image* temp366 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp367 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    aboutus = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp368 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp369 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp370 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp371 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp372 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Triggers::LayoutAnimation* temp373 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp374 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp375 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp376 = ::g::Fuse::Controls::Grid::New4();
    AboutUsTab = ::g::Fuse::Controls::Panel::New3();
    ::g::AboutAboutUs* temp377 = ::g::AboutAboutUs::New4();
    ::g::Fuse::Gestures::Clicked* temp378 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp379 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControlAbout_Active_inst);
    ProjectTab = ::g::Fuse::Controls::Panel::New3();
    ::g::AboutAboutUs* temp380 = ::g::AboutAboutUs::New4();
    ::g::Fuse::Gestures::Clicked* temp381 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp382 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigationControlAbout_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp383 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    about = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp384 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp385 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorAbout_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp386 = ::g::Fuse::Controls::StackPanel::New4();
    MainView__Template8* temp387 = MainView__Template8::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp388 = ::g::Fuse::Reactive::DataBinding::New1(temp21_Items_inst, (uObject*)temp76, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp389 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp390 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    project = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp391 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp392 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicatorAbout_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp393 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TitleBig* temp394 = ::g::TitleBig::New4();
    ::g::Fuse::Controls::Rectangle* temp395 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp396 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    ::g::Fuse::Controls::Grid* temp397 = ::g::Fuse::Controls::Grid::New4();
    MainView__Template9* temp398 = MainView__Template9::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp399 = ::g::Fuse::Reactive::DataBinding::New1(temp22_Items_inst, (uObject*)temp77, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp400 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp401 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Image* temp402 = ::g::Fuse::Controls::Image::New3();
    login = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Page* temp403 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Reactive::JavaScript* temp404 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Image* temp405 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp406 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::TextInput* temp407 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp408 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::TextInput* temp409 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp410 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp411 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp412 = ::g::Fuse::Controls::Text::New3();
    temp78->Style(1);
    temp79->Code(::STRINGS[188/*"\n\tvar Obs...*/]);
    temp79->LineNumber(4);
    temp79->FileName(::STRINGS[189/*"MainView.ux"*/]);
    uPtr(TheSidebar)->Name(MainView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TheSidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    uPtr(sidebarProfile)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebarProfile)->Margin(::g::Uno::Float4__New2(56.0f, 0.0f, 0.0f, 0.0f));
    uPtr(sidebarProfile)->Name(MainView::__selector10());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebarProfile, 1);
    uPtr(sidebarProfile)->Background(temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), shadowProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebarProfile)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    uPtr(shadowProfile)->Angle(180.0f);
    uPtr(shadowProfile)->Distance(8.0f);
    uPtr(shadowProfile)->Size(16.0f);
    uPtr(shadowProfile)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadowProfile)->Name(MainView::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp82);
    ::g::Fuse::Animations::Change__set_Value_fn(temp81, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp82, uCRef(1.0f));
    temp83->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    temp84->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp84->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp84->Alignment(6);
    temp84->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    temp84->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Strokes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    temp85->Color(::g::Fuse::Drawing::Colors::White());
    temp85->Width(1.0f);
    temp86->Value(::STRINGS[190/*"LOGGA IN"*/]);
    temp86->FontSize(18.0f);
    temp86->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp88);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp88, login);
    temp89->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp89->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp89->Alignment(10);
    temp89->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp89->SnapToPixels(true);
    temp89->Fill(::g::Fuse::Drawing::Brushes::White());
    temp90->Value(::STRINGS[191/*"STJÄRNMARKE...*/]);
    temp90->Alignment(10);
    temp90->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp91->RowCount(1);
    temp91->ColumnCount(2);
    temp91->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp91->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    temp92->StretchMode(6);
    temp92->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp92->Alignment(13);
    temp92->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImage4045e5e2()));
    temp93->RowCount(2);
    temp93->ColumnCount(1);
    temp93->Alignment(13);
    temp93->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    temp94->Value(::STRINGS[192/*"FÖRELÄSNING"*/]);
    temp94->TextWrapping(1);
    temp94->Font(MainView::RalewayBlack());
    temp95->Value(::STRINGS[193/*"14.00 SEKTI...*/]);
    temp95->FontSize(10.0f);
    temp96->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp96->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp96->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp96->SnapToPixels(true);
    temp96->Fill(temp97);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 56.0f, 0.0f));
    uPtr(sidebar)->Name(MainView::__selector12());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector13());
    temp99->StretchMode(3);
    temp99->Layer(1);
    temp99->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MenuBackground3850cdc3()));
    uPtr(router)->Name(MainView::__selector14());
    temp100->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    temp101->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    temp102->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp102->Alignment(7);
    temp102->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhite27dedb53()));
    temp103->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    temp104->Text(::STRINGS[194/*"NYHETER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp106, news);
    temp107->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp108->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    temp109->Text(::STRINGS[195/*"PARTNERS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp111, partners);
    temp112->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp113->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    temp114->Text(::STRINGS[196/*"UTSTÄLLARE"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp116, exhibitor);
    temp117->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp118->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp118->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    temp119->Text(::STRINGS[197/*"PROGRAM"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp120->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp121, program);
    temp122->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp123->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    temp124->Text(::STRINGS[198/*"ICE BREAKER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp126, icebreaker);
    temp127->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp128->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    temp129->Text(::STRINGS[199/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp131, sponsors);
    temp132->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp133->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    temp134->Text(::STRINGS[200/*"KARTA"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp136, map);
    temp137->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp138->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    temp139->Text(::STRINGS[201/*"OM OSS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp141, aboutus);
    temp142->add_Handler(uDelegate::New(::TYPES[11/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    temp143->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp143->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp143->Alignment(3);
    temp143->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 20.0f, 0.0f));
    temp143->SnapToPixels(true);
    temp143->Fill(temp144);
    temp145->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp145->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    temp146->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp146->Alignment(7);
    temp146->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HandelsbankenLogotypeWhite560d96ca()));
    temp147->Width(::g::Uno::UX::Size__New1(10.0f, 4));
    temp147->Alignment(11);
    temp147->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ErnstYoungLogotypeWhite44e6fb50()));
    temp148->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp148->Alignment(15);
    temp148->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::HHGSLogotypWhitea2525c3b()));
    temp151->Color(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp152->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp152->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp152, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    temp153->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    temp154->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp156);
    temp156->Target(sidebar);
    uPtr(sidebarFade)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3333333f));
    uPtr(sidebarFade)->HitTestMode(0);
    uPtr(sidebarFade)->Opacity(0.0f);
    uPtr(sidebarFade)->Layer(3);
    uPtr(sidebarFade)->Name(MainView::__selector15());
    temp157->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp159);
    temp159->Target(sidebarProfile);
    temp160->Width(::g::Uno::UX::Size__New1(20.0f, 4));
    temp160->Alignment(10);
    temp160->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeSmallWhite621a2112()));
    uPtr(navigation)->Name(MainView::__selector16());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), aboutus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), login);
    uPtr(news)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(news)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), NewsFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), opacityNews);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), NewsDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), BackgroundImage);
    temp162->LineNumber(7);
    temp162->FileName(::STRINGS[202/*"Pages/News/...*/]);
    temp162->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsPagef08a2105()));
    uPtr(NewsFeed)->Opacity(1.0f);
    uPtr(NewsFeed)->Name(MainView::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(NewsFeed)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), logoImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    uPtr(logoImage)->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(logoImage)->Alignment(6);
    uPtr(logoImage)->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(logoImage)->Name(MainView::__selector19());
    uPtr(logoImage)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhite27dedb53()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp166);
    uPtr(opacityNews)->Name(MainView::__selector20());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityNews)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityNews)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityNews)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp169);
    ::g::Fuse::Animations::Change__set_Value_fn(temp167, uCRef(1.0f));
    temp167->Duration(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp168, uCRef(::g::Uno::UX::Size__New1(0.0f, 4)));
    temp168->Duration(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp169, uCRef(0.0f));
    temp169->Duration(0.2);
    uPtr(NewsDetails)->Opacity(0.0f);
    uPtr(NewsDetails)->Name(MainView::__selector21());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(NewsDetails)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp170);
    temp170->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp170->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp170->ZOffset(1.0f);
    temp170->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp170->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp183);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    temp172->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp172->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), TitleTest);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp182);
    temp173->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp174);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp174->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp174->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp174->Alignment(7);
    temp174->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp174->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon31fe63c7()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp175);
    uPtr(TitleTest)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(TitleTest)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(TitleTest)->Alignment(13);
    uPtr(TitleTest)->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    uPtr(TitleTest)->Name(MainView::__selector22());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TitleTest)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->LineSpacing(10.0f);
    temp2->FontSize(28.0f);
    temp2->TextAlignment(0);
    temp2->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp176);
    temp177->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp177->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp177->Alignment(5);
    temp177->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp177->SnapToPixels(true);
    temp177->Fill(temp178);
    temp179->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp180);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp181);
    temp182->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp182->Alignment(14);
    temp182->Layer(1);
    temp182->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails6bf63bb9()));
    uPtr(BackgroundImage)->StretchMode(6);
    uPtr(BackgroundImage)->Alignment(10);
    uPtr(BackgroundImage)->Opacity(1.0f);
    uPtr(BackgroundImage)->Name(MainView::__selector23());
    uPtr(BackgroundImage)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaint3ab98602()));
    uPtr(partners)->Name(MainView::__selector24());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(partners)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp185);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp186);
    temp185->LineNumber(7);
    temp185->FileName(::STRINGS[203/*"Pages/Partn...*/]);
    temp185->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::PartnersPage7ad3ecb1()));
    temp186->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp186->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp186->Background(temp191);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp187);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp187->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp190);
    uPtr(exhibitor)->Name(MainView::__selector25());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(exhibitor)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), ExibitorList);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), ExhibitorDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp214);
    temp193->LineNumber(12);
    temp193->FileName(::STRINGS[204/*"Pages/Exhib...*/]);
    temp193->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ExhibitorPage370784e5()));
    uPtr(ExibitorList)->Opacity(1.0f);
    uPtr(ExibitorList)->Name(MainView::__selector26());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ExibitorList)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    temp195->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp196->PlaceholderText(::STRINGS[205/*"Sök utställ...*/]);
    temp196->PlaceholderColor(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp196->TextAlignment(1);
    temp196->TextColor(::g::Fuse::Drawing::Colors::White());
    temp196->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp196->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp196->Alignment(6);
    temp196->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    temp196->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    temp197->StretchMode(6);
    temp197->Height(::g::Uno::UX::Size__New1(13.0f, 1));
    temp197->Alignment(10);
    temp197->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 120.0f, 0.0f));
    temp197->Layer(1);
    temp197->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SearchGreyd711650d()));
    temp198->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp198->Layer(1);
    temp198->Fill(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Strokes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp199);
    temp199->Color(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp199->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp201);
    uPtr(ExhibitorDetails)->Opacity(0.0f);
    uPtr(ExhibitorDetails)->Name(MainView::__selector27());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ExhibitorDetails)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp202);
    temp202->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp202->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp202->ZOffset(3.0f);
    temp202->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp202->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp205);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp209);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp211);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp213);
    temp205->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp205->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp206);
    temp206->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp206->Alignment(6);
    temp206->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::NewsExampleImage4045e5e2()));
    temp207->MaxHeight(::g::Uno::UX::Size__New1(60.0f, 1));
    temp207->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp208);
    temp209->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp209->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp209->Alignment(13);
    temp209->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp209->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->LineSpacing(10.0f);
    temp8->FontSize(28.0f);
    temp8->TextAlignment(0);
    temp8->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp210);
    temp211->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp211->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp212);
    temp214->StretchMode(3);
    temp214->Layer(1);
    temp214->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundExhibitor997fe850()));
    uPtr(program)->Name(MainView::__selector28());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(program)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp215);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp216);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), ProgramFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), opacityProgram);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), ProgramDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp215->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp244);
    temp216->LineNumber(8);
    temp216->FileName(::STRINGS[206/*"Pages/Progr...*/]);
    temp216->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ProgramPage03813005()));
    uPtr(ProgramFeed)->Name(MainView::__selector29());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ProgramFeed)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp217);
    temp217->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp217->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp218);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp217->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp218->Value(::STRINGS[207/*"ONSDAG 8/11"*/]);
    temp218->Color(::g::Fuse::Drawing::Colors::Black());
    temp218->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp219);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp220);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp221);
    uPtr(opacityProgram)->Name(MainView::__selector30());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityProgram)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityProgram)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp223);
    ::g::Fuse::Animations::Change__set_Value_fn(temp222, uCRef(1.0f));
    temp222->Duration(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp223, uCRef(0.0f));
    uPtr(ProgramDetails)->Opacity(0.0f);
    uPtr(ProgramDetails)->Name(MainView::__selector31());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ProgramDetails)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp224);
    temp224->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp224->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp224->ZOffset(1.0f);
    temp224->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp224->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp225);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp225->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp226);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp227);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp229);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp231);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp235);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp237);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Nodes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp239);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp243);
    temp227->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp227->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp227->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp12->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp228);
    temp229->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp229->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp229->Alignment(13);
    temp229->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->LineSpacing(10.0f);
    temp13->FontSize(28.0f);
    temp13->TextAlignment(0);
    temp13->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp13->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp230);
    temp231->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp231->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp232);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp14->FontSize(18.0f);
    temp14->Color(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp233);
    temp15->FontSize(12.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp234);
    temp235->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp235->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp235->Alignment(1);
    temp235->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp235->SnapToPixels(true);
    temp235->Fill(temp236);
    temp237->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp237->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp238);
    temp239->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp239->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp240);
    temp240->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp240->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp240->Alignment(10);
    temp240->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp240->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp240->Strokes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp241);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp240->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp242);
    temp241->Color(::g::Fuse::Drawing::Colors::White());
    temp241->Width(1.0f);
    temp242->Value(::STRINGS[208/*"BOKA FÖRELÄ...*/]);
    temp242->FontSize(16.0f);
    temp242->Alignment(10);
    temp244->Background(temp246);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp244->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp245);
    temp245->StretchMode(3);
    temp245->Layer(1);
    temp245->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundProgram0494fe4c()));
    uPtr(icebreaker)->Name(MainView::__selector32());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(icebreaker)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp247);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp248);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), popupBackground);
    temp248->LineNumber(12);
    temp248->FileName(::STRINGS[209/*"Pages/IceBr...*/]);
    temp248->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakersPagefe8bc945()));
    uPtr(popupBackground)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupBackground)->Opacity(1.0f);
    uPtr(popupBackground)->Name(MainView::__selector33());
    uPtr(popupBackground)->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), infoIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), crossIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp252);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), opacityToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), popupInfo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp259);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), iconPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), timeline);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupBackground)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    uPtr(infoIcon)->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIcon)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIcon)->Alignment(7);
    uPtr(infoIcon)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(infoIcon)->Opacity(1.0f);
    uPtr(infoIcon)->Name(MainView::__selector34());
    uPtr(infoIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoIconWhiteadc9575a()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoIcon)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp249);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp249->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp250);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp249->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp251);
    temp250->Target((uObject*)opacityToggle);
    temp251->Message(::STRINGS[210/*"clicked"*/]);
    uPtr(crossIcon)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIcon)->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIcon)->Alignment(7);
    uPtr(crossIcon)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(crossIcon)->Opacity(0.0f);
    uPtr(crossIcon)->Name(MainView::__selector35());
    uPtr(crossIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon31fe63c7()));
    temp252->Alignment(6);
    temp252->Layer(1);
    temp252->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundIceBreakerf4d40df3()));
    uPtr(opacityToggle)->Name(MainView::__selector36());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityToggle)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp253);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityToggle)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp254);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(opacityToggle)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp255);
    ::g::Fuse::Animations::Change__set_Value_fn(temp253, uCRef(1.0f));
    temp253->Duration(0.1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp254, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp255, uCRef(1.0f));
    uPtr(popupInfo)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfo)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfo)->Opacity(0.0f);
    uPtr(popupInfo)->Name(MainView::__selector37());
    uPtr(popupInfo)->Background(temp258);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupInfo)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp256);
    temp256->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp256->Color(::g::Fuse::Drawing::Colors::White());
    temp256->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp256->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp256->Alignment(6);
    temp256->Margin(::g::Uno::Float4__New2(20.0f, 60.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp257);
    temp257->Value(::STRINGS[211/*"Gadden har ...*/]);
    temp257->TextAlignment(1);
    temp257->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp257->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp257->Alignment(6);
    temp257->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp259->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp259->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp260);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp259->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp261);
    temp260->Value(::STRINGS[212/*"SHAKE TO BR...*/]);
    temp260->TextWrapping(1);
    temp260->LineSpacing(20.0f);
    temp260->FontSize(65.0f);
    temp260->TextAlignment(1);
    temp260->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp260->Alignment(4);
    temp260->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    temp260->Font(MainView::TitleFont());
    temp261->Value(::STRINGS[213/*"Skaka telef...*/]);
    temp261->TextAlignment(1);
    temp261->Alignment(14);
    uPtr(iconPanel)->Name(MainView::__selector38());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(iconPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp262);
    temp262->Width(::g::Uno::UX::Size__New1(40.0f, 4));
    temp262->Alignment(14);
    temp262->Layer(1);
    temp262->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::IceBreakerIconc3443ffe()));
    uPtr(timeline)->Name(MainView::__selector39());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp263);
    temp263->Y(0.5f);
    temp263->Duration(1.0);
    temp263->Delay(1.0);
    temp263->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp263->Target(iconPanel);
    temp263->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp264);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp265);
    uPtr(sponsors)->Name(MainView::__selector40());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsors)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp266);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp266->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp267);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp266->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp266->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp270);
    temp267->LineNumber(2);
    temp267->FileName(::STRINGS[214/*"Pages/Spons...*/]);
    temp267->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::SponsorsPage812dd3c5()));
    uPtr(indicatorSponsor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicatorSponsor)->Name(MainView::__selector41());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicatorSponsor, SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicatorSponsor)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp268);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp268->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp269);
    temp269->X(1.0f);
    temp269->Duration(0.4);
    temp269->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp269->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp270->Background(temp298);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp271);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationSponsors);
    temp271->ColumnCount(2);
    temp271->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp271, 2);
    temp271->Background(temp278);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp271->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp271->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), GoodiebagTab);
    uPtr(SponsorTab)->Name(MainView::__selector42());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(SponsorTab)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp272);
    temp272->Text(::STRINGS[199/*"SPONSORER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp272->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp273);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp273->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp274);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp274, sponsor);
    uPtr(GoodiebagTab)->Name(MainView::__selector43());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(GoodiebagTab)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp275);
    temp275->Text(::STRINGS[215/*"GOODIEBAG"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp276);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp276->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp277);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp277, goodiebag);
    uPtr(navigationSponsors)->Name(MainView::__selector44());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationSponsors)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), goodiebag);
    uPtr(sponsor)->Name(MainView::__selector45());
    uPtr(sponsor)->Background(temp291);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp279);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sponsor)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp281);
    temp279->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp279->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp280);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp280, SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp281->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp282);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp282->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp283);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp284);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp285);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp287);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp283->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp290);
    temp284->Value(::STRINGS[216/*"Tack!"*/]);
    temp284->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp285->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp285->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp285->Alignment(6);
    temp285->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp285->SnapToPixels(true);
    temp285->Fill(temp286);
    temp287->ColumnCount(3);
    ::g::Fuse::Controls::Grid::SetRow(temp287, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp287->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp288);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp289);
    temp290->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp290->Alignment(14);
    temp290->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp290->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails6bf63bb9()));
    uPtr(goodiebag)->Name(MainView::__selector46());
    uPtr(goodiebag)->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp292);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(goodiebag)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp294);
    temp292->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp292->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp293);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp293, GoodiebagTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp294->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp295);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp295->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp296);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp297);
    uPtr(map)->Name(MainView::__selector47());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(map)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp299);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp300);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp306);
    temp300->LineNumber(8);
    temp300->FileName(::STRINGS[217/*"Pages/Map/M...*/]);
    temp300->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPage9c6a8045()));
    uPtr(indicator)->Name(MainView::__selector48());
    uPtr(indicator)->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp301);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp304);
    temp301->ZOffset(1.0f);
    temp301->Background(temp303);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp301->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp302);
    temp302->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp302->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp304->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp305);
    temp305->X(1.0f);
    temp305->Duration(0.4);
    temp305->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp305->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp306->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp307);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp306->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationControl);
    temp307->ColumnCount(2);
    temp307->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp307, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp307->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp307->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4Tab);
    uPtr(plan3Tab)->Name(MainView::__selector49());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3Tab)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp308);
    temp308->Text(::STRINGS[218/*"PLAN 3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp308->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp309);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp309->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp310);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp310, plan3);
    uPtr(plan4Tab)->Name(MainView::__selector50());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4Tab)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp311);
    temp311->Text(::STRINGS[219/*"PLAN 4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp311->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp312);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp312->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp313);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp313, plan4);
    uPtr(navigationControl)->Name(MainView::__selector51());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControl)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), plan4);
    uPtr(plan3)->Name(MainView::__selector52());
    uPtr(plan3)->Background(temp340);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp314);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), infoIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), crossIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), MapToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), popupInfoMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan3)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp339);
    temp314->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp314->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp315);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp315, plan3Tab);
    uPtr(infoIconMap)->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap)->Alignment(7);
    uPtr(infoIconMap)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(infoIconMap)->Name(MainView::__selector53());
    uPtr(infoIconMap)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoIconWhiteadc9575a()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoIconMap)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp316);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp316->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp317);
    temp317->Target((uObject*)MapToggle);
    uPtr(crossIconMap)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap)->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap)->Alignment(7);
    uPtr(crossIconMap)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(crossIconMap)->Opacity(0.0f);
    uPtr(crossIconMap)->Name(MainView::__selector54());
    uPtr(crossIconMap)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon31fe63c7()));
    uPtr(MapToggle)->Name(MainView::__selector55());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp318);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp319);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp320);
    ::g::Fuse::Animations::Change__set_Value_fn(temp318, uCRef(1.0f));
    temp318->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp319, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp320, uCRef(1.0f));
    uPtr(popupInfoMap)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap)->Opacity(0.0f);
    uPtr(popupInfoMap)->Name(MainView::__selector56());
    uPtr(popupInfoMap)->Background(temp338);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupInfoMap)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp321);
    temp321->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp321->Color(::g::Fuse::Drawing::Colors::White());
    temp321->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp321->Height(::g::Uno::UX::Size__New1(270.0f, 1));
    temp321->Alignment(6);
    temp321->Margin(::g::Uno::Float4__New2(20.0f, 60.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp321->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp322);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp322->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp323);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp322->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp326);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp322->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp329);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp322->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp332);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp322->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp335);
    temp323->Orientation(0);
    temp323->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp323->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp324);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp323->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp325);
    temp324->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp324->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp324->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 10.0f));
    temp324->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoDiskIcon9d016be2()));
    temp325->Value(::STRINGS[220/*"Infodisk"*/]);
    temp325->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp325->Alignment(10);
    temp326->Orientation(0);
    temp326->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp326->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp327);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp326->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp328);
    temp327->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp327->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp327->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp327->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsGarderobIcon586d1d8c()));
    temp328->Value(::STRINGS[221/*"Företagsgar...*/]);
    temp328->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp328->Alignment(10);
    temp329->Orientation(0);
    temp329->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp329->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp330);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp329->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp331);
    temp330->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp330->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp330->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp330->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsLoungeIcon1a726802()));
    temp331->Value(::STRINGS[222/*"Företagslou...*/]);
    temp331->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp331->Alignment(10);
    temp332->Orientation(0);
    temp332->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp332->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp333);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp332->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp334);
    temp333->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp333->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp333->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp333->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentGarderobIcon667a7b62()));
    temp334->Value(::STRINGS[223/*"Studentgard...*/]);
    temp334->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp334->Alignment(10);
    temp335->Orientation(0);
    temp335->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp336);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp335->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp337);
    temp336->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp336->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp336->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp336->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentLoungeIcon3858c138()));
    temp337->Value(::STRINGS[224/*"Studentlounge"*/]);
    temp337->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp337->Alignment(10);
    temp339->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp339->Alignment(10);
    temp339->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan39f3a5e5c()));
    uPtr(plan4)->Name(MainView::__selector57());
    uPtr(plan4)->Background(temp367);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp341);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), infoIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), crossIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), MapToggle2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), popupInfoMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plan4)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp366);
    temp341->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp341->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp342);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp342, plan4Tab);
    uPtr(infoIconMap2)->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap2)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(infoIconMap2)->Alignment(7);
    uPtr(infoIconMap2)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(infoIconMap2)->Name(MainView::__selector58());
    uPtr(infoIconMap2)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoIconWhiteadc9575a()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoIconMap2)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp343);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp343->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp344);
    temp344->Target((uObject*)MapToggle2);
    uPtr(crossIconMap2)->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap2)->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    uPtr(crossIconMap2)->Alignment(7);
    uPtr(crossIconMap2)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(crossIconMap2)->Opacity(0.0f);
    uPtr(crossIconMap2)->Name(MainView::__selector59());
    uPtr(crossIconMap2)->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::CrossIcon31fe63c7()));
    uPtr(MapToggle2)->Name(MainView::__selector60());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle2)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp345);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle2)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp346);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MapToggle2)->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp347);
    ::g::Fuse::Animations::Change__set_Value_fn(temp345, uCRef(1.0f));
    temp345->Duration(0.3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp346, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp347, uCRef(1.0f));
    uPtr(popupInfoMap2)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap2)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(popupInfoMap2)->Opacity(0.0f);
    uPtr(popupInfoMap2)->Name(MainView::__selector61());
    uPtr(popupInfoMap2)->Background(temp365);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(popupInfoMap2)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp348);
    temp348->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp348->Color(::g::Fuse::Drawing::Colors::White());
    temp348->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp348->Height(::g::Uno::UX::Size__New1(270.0f, 1));
    temp348->Alignment(6);
    temp348->Margin(::g::Uno::Float4__New2(20.0f, 60.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp348->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp349);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp349->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp350);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp349->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp353);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp349->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp356);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp349->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp359);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp349->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp362);
    temp350->Orientation(0);
    temp350->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp350->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp351);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp350->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp352);
    temp351->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp351->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp351->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 10.0f));
    temp351->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::InfoDiskIcon9d016be2()));
    temp352->Value(::STRINGS[220/*"Infodisk"*/]);
    temp352->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp352->Alignment(10);
    temp353->Orientation(0);
    temp353->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp353->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp354);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp353->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp355);
    temp354->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp354->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp354->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp354->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsGarderobIcon586d1d8c()));
    temp355->Value(::STRINGS[221/*"Företagsgar...*/]);
    temp355->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp355->Alignment(10);
    temp356->Orientation(0);
    temp356->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp356->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp357);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp356->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp358);
    temp357->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp357->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp357->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp357->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ForetagsLoungeIcon1a726802()));
    temp358->Value(::STRINGS[222/*"Företagslou...*/]);
    temp358->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp358->Alignment(10);
    temp359->Orientation(0);
    temp359->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp359->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp360);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp359->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp361);
    temp360->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp360->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp360->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp360->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentGarderobIcon667a7b62()));
    temp361->Value(::STRINGS[223/*"Studentgard...*/]);
    temp361->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp361->Alignment(10);
    temp362->Orientation(0);
    temp362->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp362->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp363);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp362->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp364);
    temp363->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp363->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp363->Margin(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    temp363->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StudentLoungeIcon3858c138()));
    temp364->Value(::STRINGS[224/*"Studentlounge"*/]);
    temp364->TextColor(::g::Fuse::Drawing::Colors::Black());
    temp364->Alignment(10);
    temp366->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp366->Alignment(10);
    temp366->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MapPlan45ec07dc1()));
    uPtr(aboutus)->Name(MainView::__selector62());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(aboutus)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp368);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp369);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp370);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp402);
    temp369->LineNumber(2);
    temp369->FileName(::STRINGS[225/*"Pages/About...*/]);
    temp369->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::AboutUsPagee4053205()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp370->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp371);
    temp371->ItemSpacing(16.0f);
    temp371->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp371->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp372);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp371->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorAbout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp371->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp375);
    temp372->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp372->Alignment(6);
    temp372->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp372->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::GaddenLogotypeWhite27dedb53()));
    uPtr(indicatorAbout)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicatorAbout)->Name(MainView::__selector63());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicatorAbout, AboutUsTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicatorAbout)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp373);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp373->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp374);
    temp374->X(1.0f);
    temp374->Duration(0.4);
    temp374->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp374->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp375->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp376);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp375->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), navigationControlAbout);
    temp376->ColumnCount(2);
    temp376->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp376, 2);
    temp376->Background(temp383);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp376->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), AboutUsTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp376->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), ProjectTab);
    uPtr(AboutUsTab)->Name(MainView::__selector64());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AboutUsTab)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp377);
    temp377->Text(::STRINGS[201/*"OM OSS"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp377->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp378);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp378->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp379);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp379, about);
    uPtr(ProjectTab)->Name(MainView::__selector65());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ProjectTab)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp380);
    temp380->Text(::STRINGS[226/*"PROJEKTKOMM...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp380->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp381);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp381->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp382);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp382, project);
    uPtr(navigationControlAbout)->Name(MainView::__selector66());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControlAbout)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), about);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigationControlAbout)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), project);
    uPtr(about)->Name(MainView::__selector67());
    uPtr(about)->Background(temp390);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(about)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp384);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(about)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp386);
    temp384->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp384->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp385);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp385, AboutUsTab);
    temp386->Padding(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp386->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp386->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp386->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp389);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp387);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp388);
    temp389->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp389->Alignment(10);
    temp389->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp389->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::MiljomarktLogotypeWhitef4019c60()));
    uPtr(project)->Name(MainView::__selector68());
    uPtr(project)->Background(temp401);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(project)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp391);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(project)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp393);
    temp391->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp391->Actions()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp392);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp392, ProjectTab);
    temp393->Padding(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp393->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp393->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp394);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp393->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp395);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp393->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp397);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp393->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp400);
    temp394->Value(::STRINGS[227/*"PROJEKTKOMM...*/]);
    temp394->Alignment(10);
    temp395->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp395->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp395->Alignment(6);
    temp395->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp395->Fill(temp396);
    temp397->ColumnCount(2);
    ::g::Fuse::Controls::Grid::SetRow(temp397, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp397->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Templates()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp398);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp399);
    temp400->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp400->Alignment(10);
    temp400->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundNewsDetails6bf63bb9()));
    temp402->StretchMode(6);
    temp402->Alignment(10);
    temp402->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundAbstractPaint3ab98602()));
    uPtr(login)->Name(MainView::__selector69());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(login)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp403);
    temp403->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp403->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp404);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp403->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp405);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp403->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp406);
    temp404->LineNumber(2);
    temp404->FileName(::STRINGS[228/*"Pages/Login...*/]);
    temp404->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::Login745d21be()));
    temp405->Alignment(6);
    temp405->Layer(1);
    temp405->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::BackgroundIceBreakerf4d40df3()));
    temp406->Margin(::g::Uno::Float4__New2(60.0f, 120.0f, 60.0f, 60.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp406->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp407);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp406->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp408);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp406->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp409);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp406->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp410);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp406->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp411);
    temp407->PlaceholderText(::STRINGS[229/*"E-POST"*/]);
    temp407->PlaceholderColor(::g::Fuse::Drawing::Colors::White());
    temp407->TextAlignment(1);
    temp407->TextColor(::g::Fuse::Drawing::Colors::White());
    temp407->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp407->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp407, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp407, 1);
    temp407->Font(MainView::Raleway());
    temp408->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp408->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp408->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp408, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp408, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp408, 2);
    temp409->PlaceholderText(::STRINGS[230/*"NAMN"*/]);
    temp409->PlaceholderColor(::g::Fuse::Drawing::Colors::White());
    temp409->TextAlignment(1);
    temp409->TextColor(::g::Fuse::Drawing::Colors::White());
    temp409->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp409->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp409->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp409, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp409, 1);
    temp409->Font(MainView::Raleway());
    temp410->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp410->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp410->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp410, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp410, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp410, 2);
    temp411->Width(::g::Uno::UX::Size__New1(260.0f, 1));
    temp411->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp411->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 15.0f));
    temp411->Background(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp411->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp412);
    temp412->Value(::STRINGS[231/*"LOGGA IN / ...*/]);
    temp412->Color(::g::Fuse::Drawing::Colors::Black());
    temp412->Alignment(10);
    temp412->Font(MainView::RalewayBlack());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), TheSidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), sidebarProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), shadowProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), news);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), NewsFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), logoImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), opacityNews);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), NewsDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), TitleTest);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), BackgroundImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), partners);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), exhibitor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), ExibitorList);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), ExhibitorDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), program);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), ProgramFeed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), opacityProgram);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), ProgramDetails);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), icebreaker);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), popupBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), infoIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), crossIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), opacityToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), popupInfo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), iconPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), timeline);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), sponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), indicatorSponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), SponsorTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), GoodiebagTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), navigationSponsors);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), sponsor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), goodiebag);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), map);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), plan3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), plan4Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), navigationControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), plan3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), infoIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), crossIconMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), MapToggle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), popupInfoMap);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), plan4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), infoIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), crossIconMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), MapToggle2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), popupInfoMap2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), aboutus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), indicatorAbout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), AboutUsTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), ProjectTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), navigationControlAbout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), about);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), project);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[13/*Uno.Collections.ICollection<object>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), TheSidebar);
}

// public MainView New() [static] :957
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
