// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_bundle.h>
#include <_root.gadden_FuseCont-44c720e0.h>
#include <_root.gadden_FuseCont-7bb5d785.h>
#include <_root.gadden_FuseElem-424f5598.h>
#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <_root.SmallText.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.ToUpper.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[9];

namespace g{

// public partial sealed class MainView.Template2 :208
// {
// static Template2() :232
static void MainView__Template2__cctor__fn(uType* __type)
{
    MainView__Template2::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"temp_eb10"*/], ::STRINGS[1/*"starImage"*/], ::STRINGS[2/*"yellowStar"*/], ::STRINGS[3/*"showDetails"*/]);
    MainView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    MainView__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Color"*/]);
    MainView__Template2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Visibility"*/]);
    MainView__Template2::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"starImage"*/]);
    MainView__Template2::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"yellowStar"*/]);
    MainView__Template2::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"showDetails"*/]);
}

static void MainView__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb10");
    ::STRINGS[1] = uString::Const("starImage");
    ::STRINGS[2] = uString::Const("yellowStar");
    ::STRINGS[3] = uString::Const("showDetails");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("Color");
    ::STRINGS[6] = uString::Const("Visibility");
    ::STRINGS[7] = uString::Const("exhibitorClicked");
    ::STRINGS[8] = uString::Const("name");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template2, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView__Template2, ExhibitorDetails_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView__Template2, ExibitorList_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView__Template2, starImage_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template2, temp_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template2::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template2__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 16;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent, MainView parentInstance) :212
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :235
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template2", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"exhibitorCl...*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template2::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"name"*/]);
    ::g::SmallText* temp = ::g::SmallText::New4();
    __this->temp_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp, MainView__Template2::__selector0());
    ::g::Fuse::Reactive::ToUpper* temp3 = ::g::Fuse::Reactive::ToUpper::New1(temp2);
    ::g::Fuse::Controls::Image* starImage1 = ::g::Fuse::Controls::Image::New3();
    __this->starImage_Color_inst = ::g::gadden_FuseControlsImage_Color_Property::New1(starImage1, MainView__Template2::__selector1());
    __this->ExhibitorDetails_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(uPtr(__this->__parent1)->ExhibitorDetails, MainView__Template2::__selector2());
    __this->ExibitorList_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(uPtr(__this->__parent1)->ExibitorList, MainView__Template2::__selector2());
    ::g::Fuse::Controls::Grid* temp4 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp5 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp6 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp7 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb101 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1, __this->__g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    ::g::Fuse::Gestures::Clicked* temp9 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp10 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::WhileTrue* yellowStar1 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], __this->starImage_Color_inst);
    ::g::Fuse::Triggers::WhileTrue* showDetails1 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], __this->ExhibitorDetails_Visibility_inst);
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], __this->ExibitorList_Visibility_inst);
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5921569f, 0.5921569f, 0.5921569f, 1.0f));
    temp4->RowCount(1);
    temp4->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), starImage1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), yellowStar1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), showDetails1);
    temp->Width(::g::Uno::UX::Size__New1(180.0f, 1));
    temp->Margin(::g::Uno::Float4__New2(10.0f, 3.0f, 0.0f, 3.0f));
    temp->Opacity(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb101);
    temp6->Target((uObject*)showDetails1);
    temp7->add_Handler(uDelegate::New(::TYPES[6/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb101));
    starImage1->Color(::g::Fuse::Drawing::Colors::White());
    starImage1->StretchMode(6);
    starImage1->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    starImage1->Alignment(15);
    starImage1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 7.0f));
    starImage1->Name(MainView__Template2::__selector3());
    starImage1->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::StarWhite6e65c160()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(starImage1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    temp10->Target((uObject*)yellowStar1);
    yellowStar1->Name(MainView__Template2::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(yellowStar1->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Fuse::Drawing::Colors::Yellow()));
    temp11->Duration(0.3);
    showDetails1->Name(MainView__Template2::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(showDetails1->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(showDetails1->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef<int>(0));
    temp12->Duration(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef<int>(2));
    temp14->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp14->Height(::g::Uno::UX::Size__New1(1.0f, 3));
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 3.0f));
    temp14->SnapToPixels(true);
    temp14->Fill(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), starImage1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), yellowStar1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), showDetails1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    return *__retval = __self1, void();
}

// public Template2 New(MainView parent, MainView parentInstance) :212
void MainView__Template2__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template2::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template2::__selector0_;
::g::Uno::UX::Selector MainView__Template2::__selector1_;
::g::Uno::UX::Selector MainView__Template2::__selector2_;
::g::Uno::UX::Selector MainView__Template2::__selector3_;
::g::Uno::UX::Selector MainView__Template2::__selector4_;
::g::Uno::UX::Selector MainView__Template2::__selector5_;

// public Template2(MainView parent, MainView parentInstance) [instance] :212
void MainView__Template2::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainView parent, MainView parentInstance) [static] :212
MainView__Template2* MainView__Template2::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
