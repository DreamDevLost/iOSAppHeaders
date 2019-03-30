//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class UIView;

@interface IGLiveSheetTransitionStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    double _slide_screenHeightRatio;
    double _slideAndScale_screenHeightRatio;
    UIView *_slideAndScale_resizableContentView;
    struct CGRect _slideAndScale_contentViewFrame;
}

+ (id)slideWithScreenHeightRatio:(double)arg1;
+ (id)slideAndScaleWithScreenHeightRatio:(double)arg1 resizableContentView:(id)arg2 contentViewFrame:(struct CGRect)arg3;
+ (id)none;
+ (id)fade;
- (void).cxx_destruct;
- (void)matchSlide:(CDUnknownBlockType)arg1 slideAndScale:(CDUnknownBlockType)arg2 fade:(CDUnknownBlockType)arg3 none:(CDUnknownBlockType)arg4;

@end
