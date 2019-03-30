//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSlideshowGestureHandler.h"

@interface IGSlideshowGestureHandlerAllEdges : NSObject <IGSlideshowGestureHandler>
{
    double _topEdgeFraction;
    double _bottomEdgeFraction;
    _Bool _centerNext;
    long long _likeGesture;
    double _leadingEdgeFraction;
    double _trailingEdgeFraction;
}

@property(readonly, nonatomic) double trailingEdgeFraction; // @synthesize trailingEdgeFraction=_trailingEdgeFraction;
@property(readonly, nonatomic) double leadingEdgeFraction; // @synthesize leadingEdgeFraction=_leadingEdgeFraction;
- (_Bool)handlesGesture:(long long)arg1 atNormalizedLocation:(struct CGPoint)arg2;
- (long long)actionForGesture:(long long)arg1 atNormalizedLocation:(struct CGPoint)arg2;
- (unsigned long long)_regionsForNormalizedLocation:(struct CGPoint)arg1;
- (id)initWithLeadingEdgeFraction:(double)arg1 trailingEdgeFraction:(double)arg2 topEdgeFraction:(double)arg3 bottomEdgeFraction:(double)arg4 centerNext:(_Bool)arg5 likeGesture:(long long)arg6;

@end

