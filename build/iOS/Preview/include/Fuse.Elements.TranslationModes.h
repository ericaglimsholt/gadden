// This file was generated based on '/Users/ericaglimsholt/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct TranslationModes;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class TranslationModes :3542
// {
uClassType* TranslationModes_typeof();

struct TranslationModes : uObject
{
    static uSStrong<uObject*> PositionOffset_;
    static uSStrong<uObject*>& PositionOffset() { return TranslationModes_typeof()->Init(), PositionOffset_; }
    static uSStrong<uObject*> Size_;
    static uSStrong<uObject*>& Size() { return TranslationModes_typeof()->Init(), Size_; }
    static uSStrong<uObject*> SizeFactor_;
    static uSStrong<uObject*>& SizeFactor() { return TranslationModes_typeof()->Init(), SizeFactor_; }
    static uSStrong<uObject*> TransformOriginOffset_;
    static uSStrong<uObject*>& TransformOriginOffset() { return TranslationModes_typeof()->Init(), TransformOriginOffset_; }
};
// }

}}} // ::g::Fuse::Elements
