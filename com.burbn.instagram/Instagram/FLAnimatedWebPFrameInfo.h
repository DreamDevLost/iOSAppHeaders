//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FLAnimatedWebPFrameInfo : NSObject <NSCopying>
{
    _Bool _disposeToBackground;
    _Bool _blendWithPreviousFrame;
    _Bool _hasAlpha;
    struct CGRect _frameRect;
}

@property(readonly, nonatomic) _Bool hasAlpha; // @synthesize hasAlpha=_hasAlpha;
@property(readonly, nonatomic) _Bool blendWithPreviousFrame; // @synthesize blendWithPreviousFrame=_blendWithPreviousFrame;
@property(readonly, nonatomic) _Bool disposeToBackground; // @synthesize disposeToBackground=_disposeToBackground;
@property(readonly, nonatomic) struct CGRect frameRect; // @synthesize frameRect=_frameRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrameRect:(struct CGRect)arg1 disposeToBackground:(_Bool)arg2 blendWithPreviousFrame:(_Bool)arg3 hasAlpha:(_Bool)arg4;

@end

