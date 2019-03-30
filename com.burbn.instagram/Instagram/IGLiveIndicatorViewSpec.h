//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface IGLiveIndicatorViewSpec : NSObject
{
    _Bool _hasDynamicFont;
    _Bool _hasBorder;
    double _fontSize;
    UIColor *_textColor;
    UIColor *_borderColor;
    long long _background;
    long long _labelContentType;
    struct UIEdgeInsets _insets;
}

+ (id)storyCameraTabColorTextSpec;
+ (id)storyCameraTabFilledSpec;
+ (id)storyCameraTabWhiteBorderSpec;
+ (id)exploreCollectionSpec;
+ (id)traySpecWithLabelContentType:(long long)arg1 grayed:(_Bool)arg2 hasBorder:(_Bool)arg3;
+ (id)liveQAHeaderSpec;
+ (id)liveDefaultHeaderSpec;
@property(readonly, nonatomic) long long labelContentType; // @synthesize labelContentType=_labelContentType;
@property(readonly, nonatomic) long long background; // @synthesize background=_background;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) _Bool hasDynamicFont; // @synthesize hasDynamicFont=_hasDynamicFont;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (id)_initWithFontSize:(double)arg1 hasDynamicFont:(_Bool)arg2 insets:(struct UIEdgeInsets)arg3 hasBorder:(_Bool)arg4 textColor:(id)arg5 borderColor:(id)arg6 background:(long long)arg7 labelContentType:(long long)arg8;

@end
