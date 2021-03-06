//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectAvatarDotSpec, IGRingViewSpec;

@interface IGDirectAvatarViewSpec : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGRingViewSpec *_ring_gradientRingSpec;
    double _ring_innerRingWidth;
    double _ring_showOutterRing;
    IGDirectAvatarDotSpec *_dot_dotSpec;
    double _dot_outterRingWidthPadding;
    IGRingViewSpec *_ringAndDot_gradientRingSpec;
    IGDirectAvatarDotSpec *_ringAndDot_dotSpec;
    double _ringAndDot_innerRingWidth;
}

+ (id)ringWithGradientRingSpec:(id)arg1 innerRingWidth:(double)arg2 showOutterRing:(double)arg3;
+ (id)ringAndDotWithGradientRingSpec:(id)arg1 dotSpec:(id)arg2 innerRingWidth:(double)arg3;
+ (id)dotWithDotSpec:(id)arg1 outterRingWidthPadding:(double)arg2;
+ (id)threadsAppEmptySpec;
+ (id)noRingWithExtraSmallGreenDot;
+ (id)noRingWithSmallGreenDot;
+ (id)noRingWithMediumGreenDot;
+ (id)noRingWithLargeGreenDot;
+ (id)searchColorfulSpecWithRingNotVisible;
+ (id)searchColorfulSpecWithRingVisible;
+ (id)emptyStoryBadgeSpec;
+ (id)noneSpec;
+ (id)storyGreySpecWithExtraSmallGreenDot;
+ (id)storyGreySpecWithMediumGreenDot;
+ (id)storyGreySpec;
+ (id)storyColorfulSpec;
+ (id)feedItemHeaderFavoritesSpec;
+ (id)feedItemHeaderColorfulSpec;
+ (id)directThreadHeaderEmptySpec;
+ (id)directStoryColorfulSpec;
+ (id)directAppStoryColorfulSpec;
+ (id)directBlueSpec;
- (void).cxx_destruct;
- (void)matchRing:(CDUnknownBlockType)arg1 dot:(CDUnknownBlockType)arg2 ringAndDot:(CDUnknownBlockType)arg3;

@end

