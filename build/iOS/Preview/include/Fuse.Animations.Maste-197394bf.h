// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Animations/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.Maste-4c7af709.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct MasterProperty;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class MasterProperty<T> :1729
// {
struct MasterProperty_type : ::g::Fuse::Animations::MasterBase_type
{
    ::g::Fuse::Animations::MasterPropertyGet interface1;
    ::g::Uno::UX::IPropertyListener interface2;
};

MasterProperty_type* MasterProperty_typeof();
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase);
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval);
void MasterProperty__GiveOriginSetterWarning_fn(MasterProperty* __this);
void MasterProperty__OnActive_fn(MasterProperty* __this);
void MasterProperty__OnInactive_fn(MasterProperty* __this);
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval);
void MasterProperty__Set_fn(MasterProperty* __this, void* value);
void MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(MasterProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property);

struct MasterProperty : ::g::Fuse::Animations::MasterBase
{
    bool _hasSetValue;
    bool _isListening;
    uTField _lastSetValue() { return __type->Field(this, 6); }
    uTField _restValue() { return __type->Field(this, 7); }
    bool _warningGiven;
    uStrong< ::g::Uno::UX::Property1*> Property;

    void ctor_1(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase);
    uObject* GetPropertyObject();
    void GiveOriginSetterWarning();
    template<class T>
    void Set(T value) { MasterProperty__Set_fn(this, uConstrain(__type->GetBase(MasterProperty_typeof())->T(0), value)); }
};
// }

}}} // ::g::Fuse::Animations
