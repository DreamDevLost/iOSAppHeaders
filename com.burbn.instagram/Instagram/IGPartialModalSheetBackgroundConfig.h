//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class UIColor;

@interface IGPartialModalSheetBackgroundConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIColor *_solidBackgroundColor;
    UIColor *_extraLightBlur_backgroundColor;
}

+ (id)solidBackgroundColor:(id)arg1;
+ (id)extraLightBlurWithBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)matchSolidBackgroundColor:(CDUnknownBlockType)arg1 extraLightBlur:(CDUnknownBlockType)arg2;

@end

