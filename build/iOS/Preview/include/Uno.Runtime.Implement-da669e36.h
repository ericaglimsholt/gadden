// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/UnoCore/1.0.13/source/uno/runtime/implementation/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Runtime.Implement-1faed10e.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringItem;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class FormatStringItem :880
// {
::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof();
void FormatStringItem__ctor_1_fn(FormatStringItem* __this, uString* lexeme);
void FormatStringItem__Equals_fn(FormatStringItem* __this, uObject* obj, bool* __retval);
void FormatStringItem__get_FormatString_fn(FormatStringItem* __this, uString** __retval);
void FormatStringItem__GetHashCode_fn(FormatStringItem* __this, int* __retval);
void FormatStringItem__New1_fn(uString* lexeme, FormatStringItem** __retval);
void FormatStringItem__get_Number_fn(FormatStringItem* __this, int* __retval);
void FormatStringItem__ToString1_fn(FormatStringItem* __this, uArray* objs, uString** __retval);

struct FormatStringItem : ::g::Uno::Runtime::Implementation::Internal::FormatStringToken
{
    void ctor_1(uString* lexeme);
    uString* FormatString();
    int Number();
    static FormatStringItem* New1(uString* lexeme);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
