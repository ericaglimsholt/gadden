// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/UnoCore/1.1.3/source/uno/exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct NullReferenceException;}}

namespace g{
namespace Uno{

// public sealed class NullReferenceException :314
// {
::g::Uno::Exception_type* NullReferenceException_typeof();
void NullReferenceException__ctor_3_fn(NullReferenceException* __this);
void NullReferenceException__New4_fn(NullReferenceException** __retval);

struct NullReferenceException : ::g::Uno::Exception
{
    void ctor_3();
    static NullReferenceException* New4();
};
// }

}} // ::g::Uno
