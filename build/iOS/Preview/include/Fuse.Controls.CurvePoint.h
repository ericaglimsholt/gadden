// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.5/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct CurvePoint;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class CurvePoint :277
// {
::g::Fuse::Node_type* CurvePoint_typeof();
void CurvePoint__ctor_2_fn(CurvePoint* __this);
void CurvePoint__get_At_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_At_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_ControlIn_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_ControlIn_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_ControlOut_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_ControlOut_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_HasControlIn_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_HasControlOut_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_HasTangentIn_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_HasTangentOut_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__New2_fn(CurvePoint** __retval);
void CurvePoint__get_Tangent_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_Tangent_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_TangentIn_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_TangentIn_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_TangentOut_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_TangentOut_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_X_fn(CurvePoint* __this, float* __retval);
void CurvePoint__set_X_fn(CurvePoint* __this, float* value);
void CurvePoint__get_Y_fn(CurvePoint* __this, float* __retval);
void CurvePoint__set_Y_fn(CurvePoint* __this, float* value);

struct CurvePoint : ::g::Fuse::Node
{
    ::g::Uno::Float2 _a;
    ::g::Uno::Float2 _at;
    ::g::Uno::Float2 _b;
    int _has;
    static ::g::Uno::UX::Selector NameAt_;
    static ::g::Uno::UX::Selector& NameAt() { return CurvePoint_typeof()->Init(), NameAt_; }
    static ::g::Uno::UX::Selector NameControlIn_;
    static ::g::Uno::UX::Selector& NameControlIn() { return CurvePoint_typeof()->Init(), NameControlIn_; }
    static ::g::Uno::UX::Selector NameControlOut_;
    static ::g::Uno::UX::Selector& NameControlOut() { return CurvePoint_typeof()->Init(), NameControlOut_; }
    static ::g::Uno::UX::Selector NameTangentIn_;
    static ::g::Uno::UX::Selector& NameTangentIn() { return CurvePoint_typeof()->Init(), NameTangentIn_; }
    static ::g::Uno::UX::Selector NameTangentOut_;
    static ::g::Uno::UX::Selector& NameTangentOut() { return CurvePoint_typeof()->Init(), NameTangentOut_; }

    void ctor_2();
    ::g::Uno::Float2 At();
    void At(::g::Uno::Float2 value);
    ::g::Uno::Float2 ControlIn();
    void ControlIn(::g::Uno::Float2 value);
    ::g::Uno::Float2 ControlOut();
    void ControlOut(::g::Uno::Float2 value);
    bool HasControlIn();
    bool HasControlOut();
    bool HasTangentIn();
    bool HasTangentOut();
    ::g::Uno::Float2 Tangent();
    void Tangent(::g::Uno::Float2 value);
    ::g::Uno::Float2 TangentIn();
    void TangentIn(::g::Uno::Float2 value);
    ::g::Uno::Float2 TangentOut();
    void TangentOut(::g::Uno::Float2 value);
    float X();
    void X(float value);
    float Y();
    void Y(float value);
    static CurvePoint* New2();
};
// }

}}} // ::g::Fuse::Controls
