//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDrawBrushGLBase.h"

@class IGBrushSizeModel, IGSpacingModel, NSString;

@interface IGDrawPointBrush : IGDrawBrushGLBase
{
    IGBrushSizeModel *_brushSize;
    IGSpacingModel *_spacing;
    _Bool _ignoresColor;
    _Bool _isInternal;
    NSString *_name;
}

+ (id)createForModel:(id)arg1 context:(id)arg2 backingSize:(struct CGSize)arg3;
- (id)name;
- (_Bool)isInternal;
- (_Bool)ignoresColor;
- (void).cxx_destruct;
- (id)_initWithModel:(id)arg1 context:(id)arg2 backingSize:(struct CGSize)arg3;
- (id)createMark;
- (double)defaultSize;
- (double)maxSize;
- (double)minSize;
- (id)initWithContext:(id)arg1 vertexProgram:(id)arg2 fragmentProgram:(id)arg3;

@end

