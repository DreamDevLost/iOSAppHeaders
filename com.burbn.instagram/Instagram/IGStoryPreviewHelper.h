//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGStoryPreviewHelper : NSObject
{
}

+ (void)applyLocationInfo:(struct IGOverlayViewLocationInfo)arg1 onView:(id)arg2;
+ (struct IGOverlayViewTapInfo)tapInfoForView:(id)arg1 relativeToView:(id)arg2;
+ (id)transformTargetForView:(id)arg1;
+ (id)actionSheetForType:(unsigned long long)arg1 title:(id)arg2;
+ (id)legibleSecondaryColorGivenPrimaryColor:(id)arg1;
+ (id)legibleForegroundColorBackgroundColor:(id)arg1;
+ (double)scaleToFitSize:(struct CGSize)arg1 boundingSize:(struct CGSize)arg2;
+ (double)maxHeightForViews:(id)arg1;

@end

