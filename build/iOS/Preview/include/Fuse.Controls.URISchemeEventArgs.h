// This file was generated based on '../../../Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct URISchemeEventArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class URISchemeEventArgs :804
// {
struct URISchemeEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

URISchemeEventArgs_type* URISchemeEventArgs_typeof();
void URISchemeEventArgs__ctor_1_fn(URISchemeEventArgs* __this, uString* url);
void URISchemeEventArgs__FuseScriptingIScriptEventSerialize_fn(URISchemeEventArgs* __this, uObject* s);
void URISchemeEventArgs__New2_fn(uString* url, URISchemeEventArgs** __retval);

struct URISchemeEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> Url;

    void ctor_1(uString* url);
    static URISchemeEventArgs* New2(uString* url);
};
// }

}}} // ::g::Fuse::Controls
