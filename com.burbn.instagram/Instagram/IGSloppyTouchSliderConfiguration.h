//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface IGSloppyTouchSliderConfiguration : NSObject
{
    UIColor *_defaultTrackColor;
    double _trackHeight;
    double _trackShadowRadius;
    double _trackShadowOpacity;
    double _thumbViewShadowRadius;
    double _thumbViewShadowOpacity;
    struct CGSize _trackShadowOffset;
    struct CGSize _thumbViewShadowOffset;
}

+ (id)defaultConfiguration;
@property(readonly, nonatomic) double thumbViewShadowOpacity; // @synthesize thumbViewShadowOpacity=_thumbViewShadowOpacity;
@property(readonly, nonatomic) struct CGSize thumbViewShadowOffset; // @synthesize thumbViewShadowOffset=_thumbViewShadowOffset;
@property(readonly, nonatomic) double thumbViewShadowRadius; // @synthesize thumbViewShadowRadius=_thumbViewShadowRadius;
@property(readonly, nonatomic) double trackShadowOpacity; // @synthesize trackShadowOpacity=_trackShadowOpacity;
@property(readonly, nonatomic) struct CGSize trackShadowOffset; // @synthesize trackShadowOffset=_trackShadowOffset;
@property(readonly, nonatomic) double trackShadowRadius; // @synthesize trackShadowRadius=_trackShadowRadius;
@property(readonly, nonatomic) double trackHeight; // @synthesize trackHeight=_trackHeight;
@property(readonly, nonatomic) UIColor *defaultTrackColor; // @synthesize defaultTrackColor=_defaultTrackColor;
- (void).cxx_destruct;
- (id)initWithDefaultTrackColor:(id)arg1 trackHeight:(double)arg2 trackShadowRadius:(double)arg3 trackShadowOffset:(struct CGSize)arg4 trackShadowOpacity:(double)arg5 thumbViewShadowRadius:(double)arg6 thumbViewShadowOffset:(struct CGSize)arg7 thumbViewShadowOpacity:(double)arg8;

@end

