//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class UIColor;

@interface IGDirectComposerBackgroundConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIColor *_flat_color;
    UIColor *_lightBlur_backgroundColor;
}

+ (id)transparent;
+ (id)lightBlurWithBackgroundColor:(id)arg1;
+ (id)flatWithColor:(id)arg1;
- (void).cxx_destruct;
- (void)matchTransparent:(CDUnknownBlockType)arg1 flat:(CDUnknownBlockType)arg2 lightBlur:(CDUnknownBlockType)arg3;

@end
