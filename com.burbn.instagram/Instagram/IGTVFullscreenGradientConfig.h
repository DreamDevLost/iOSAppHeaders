//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGTVFullscreenGradientConfig : FBValueObject <NSCopying, NSCoding>
{
    double _topGradientHeight;
    double _topGradientAlpha;
    double _bottomGradientHeight;
    double _bottomGradientAlpha;
}

@property(readonly, nonatomic) double bottomGradientAlpha; // @synthesize bottomGradientAlpha=_bottomGradientAlpha;
@property(readonly, nonatomic) double bottomGradientHeight; // @synthesize bottomGradientHeight=_bottomGradientHeight;
@property(readonly, nonatomic) double topGradientAlpha; // @synthesize topGradientAlpha=_topGradientAlpha;
@property(readonly, nonatomic) double topGradientHeight; // @synthesize topGradientHeight=_topGradientHeight;
- (id)initWithTopGradientHeight:(double)arg1 topGradientAlpha:(double)arg2 bottomGradientHeight:(double)arg3 bottomGradientAlpha:(double)arg4;

@end

