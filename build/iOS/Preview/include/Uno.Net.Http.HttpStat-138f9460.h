// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Uno.Net.Http/1.0.13/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpStatusReasonPhrase;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public static class HttpStatusReasonPhrase :750
// {
uClassType* HttpStatusReasonPhrase_typeof();
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int* statusCode, uString** __retval);

struct HttpStatusReasonPhrase : uObject
{
    static uSStrong<uObject*> ClientErrors_;
    static uSStrong<uObject*>& ClientErrors() { return HttpStatusReasonPhrase_typeof()->Init(), ClientErrors_; }
    static uSStrong<uObject*> Informational_;
    static uSStrong<uObject*>& Informational() { return HttpStatusReasonPhrase_typeof()->Init(), Informational_; }
    static uSStrong<uObject*> Redirection_;
    static uSStrong<uObject*>& Redirection() { return HttpStatusReasonPhrase_typeof()->Init(), Redirection_; }
    static uSStrong<uObject*> ServerErrors_;
    static uSStrong<uObject*>& ServerErrors() { return HttpStatusReasonPhrase_typeof()->Init(), ServerErrors_; }
    static uSStrong<uObject*> Success_;
    static uSStrong<uObject*>& Success() { return HttpStatusReasonPhrase_typeof()->Init(), Success_; }

    static uString* GetFromStatusCode(int statusCode);
};
// }

}}}} // ::g::Uno::Net::Http
