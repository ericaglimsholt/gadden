// This file was generated based on /Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.gadden_bundle.h>
#include <_root.gadden_FuseCont-44c720e0.h>
#include <_root.gadden_FuseCont-b48cdba6.h>
#include <_root.gadden_FuseCont-b9403983.h>
#include <_root.gadden_FuseElem-424f5598.h>
#include <_root.MainView.h>
#include <_root.MainView.Template5.h>
#include <_root.Paragraph.h>
#include <_root.SmallText.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
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
static uType* TYPES[7];

namespace g{

// public partial sealed class MainView.Template5 :384
// {
// static Template5() :403
static void MainView__Template5__cctor__fn(uType* __type)
{
    MainView__Template5::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb11"*/]);
    MainView__Template5::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Url"*/]);
    MainView__Template5::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    MainView__Template5::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Visibility"*/]);
}

static void MainView__Template5_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb11");
    ::STRINGS[1] = uString::Const("Url");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Visibility");
    ::STRINGS[4] = uString::Const("image");
    ::STRINGS[5] = uString::Const("name");
    ::STRINGS[6] = uString::Const("location");
    ::STRINGS[7] = uString::Const("programClicked");
    ::STRINGS[8] = uString::Const("2* ,3* ,1*");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template5, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template5, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template5, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView__Template5, ProgramDetails_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView__Template5, ProgramFeed_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template5, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template5, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView__Template5, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template5::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template5::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template5::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template5::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template5__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template5_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 14;
    options.ObjectSize = sizeof(MainView__Template5);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template5", options);
    type->fp_build_ = MainView__Template5_build;
    type->fp_cctor_ = MainView__Template5__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template5__New1_fn;
    return type;
}

// public Template5(MainView parent, MainView parentInstance) :388
void MainView__Template5__ctor_1_fn(MainView__Template5* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :406
void MainView__Template5__New1_fn(MainView__Template5* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template5", "New()");
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Url_inst = ::g::gadden_FuseControlsImage_Url_Property::New1(temp, MainView__Template5::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"image"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template5::__g_static_nametable1());
    ::g::Paragraph* temp1 = ::g::Paragraph::New4();
    __this->temp1_Value_inst = ::g::gadden_FuseControlsTextInputControl_Value_Property::New1(temp1, MainView__Template5::__selector1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"name"*/]);
    ::g::SmallText* temp2 = ::g::SmallText::New4();
    __this->temp2_Value_inst = ::g::gadden_FuseControlsTextControl_Value_Property::New1(temp2, MainView__Template5::__selector1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"location"*/]);
    __this->ProgramDetails_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(uPtr(__this->__parent1)->ProgramDetails, MainView__Template5::__selector2());
    __this->ProgramFeed_Visibility_inst = ::g::gadden_FuseElementsElement_Visibility_Property::New1(uPtr(__this->__parent1)->ProgramFeed, MainView__Template5::__selector2());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"programClic...*/]);
    ::g::Fuse::Controls::Grid* temp7 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Url_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp4, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp5, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp12 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp13 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp14 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->ProgramDetails_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp15 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], __this->ProgramFeed_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp16 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb111 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __this->__g_nametable1);
    temp7->Columns(::STRINGS[8/*"2* ,3* ,1*"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp7, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp->StretchMode(6);
    temp->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp->Alignment(13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp9->Alignment(13);
    temp9->Margin(::g::Uno::Float4__New2(3.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->TextWrapping(1);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    temp1->Font(::g::MainView::RalewayBlack());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp2->FontSize(12.0f);
    temp2->Margin(::g::Uno::Float4__New2(3.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp12->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    temp12->Alignment(3);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::gadden_bundle::ArrowRightWhite1d5f6f6b()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb111);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp14, uCRef<int>(0));
    temp14->Delay(0.2f);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp15, uCRef<int>(2));
    temp15->Delay(0.2f);
    temp16->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb111));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    return *__retval = __self1, void();
}

// public Template5 New(MainView parent, MainView parentInstance) :388
void MainView__Template5__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template5** __retval)
{
    *__retval = MainView__Template5::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template5::__g_static_nametable1_;
::g::Uno::UX::Selector MainView__Template5::__selector0_;
::g::Uno::UX::Selector MainView__Template5::__selector1_;
::g::Uno::UX::Selector MainView__Template5::__selector2_;

// public Template5(MainView parent, MainView parentInstance) [instance] :388
void MainView__Template5::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template5 New(MainView parent, MainView parentInstance) [static] :388
MainView__Template5* MainView__Template5::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template5* obj1 = (MainView__Template5*)uNew(MainView__Template5_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
