// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/UnoCore/1.0.13/source/uno/time/utilities/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Constants;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{

// public static class Constants :5
// {
uClassType* Constants_typeof();

struct Constants : uObject
{
    static ::g::Uno::Time::Instant BclEpoch_;
    static ::g::Uno::Time::Instant& BclEpoch() { return Constants_typeof()->Init(), BclEpoch_; }
    static ::g::Uno::Time::Instant UnixEpoch_;
    static ::g::Uno::Time::Instant& UnixEpoch() { return Constants_typeof()->Init(), UnixEpoch_; }
};
// }

}}} // ::g::Uno::Time
