//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class IGImageTintConfig, UIColor, UIFont;

@interface IGTallNavigationBarViewDisplayConfig : FBValueObject <NSCopying, NSCoding>
{
    IGImageTintConfig *_imageTintConfig;
    UIColor *_bottomBorderColor;
    double _bottomBorderHeight;
    UIColor *_shadowColor;
    double _shadowRadius;
    double _initialShadowOpacity;
    UIColor *_tintColor;
    UIFont *_titleFont;
    UIColor *_titleColor;
    long long _statusBarStyle;
    long long _titleViewAlignment;
    struct CGSize _shadowOffset;
}

@property(readonly, nonatomic) long long titleViewAlignment; // @synthesize titleViewAlignment=_titleViewAlignment;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) double initialShadowOpacity; // @synthesize initialShadowOpacity=_initialShadowOpacity;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, copy, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double bottomBorderHeight; // @synthesize bottomBorderHeight=_bottomBorderHeight;
@property(readonly, copy, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(readonly, copy, nonatomic) IGImageTintConfig *imageTintConfig; // @synthesize imageTintConfig=_imageTintConfig;
- (void).cxx_destruct;
- (id)initWithImageTintConfig:(id)arg1 bottomBorderColor:(id)arg2 bottomBorderHeight:(double)arg3 shadowColor:(id)arg4 shadowRadius:(double)arg5 shadowOffset:(struct CGSize)arg6 initialShadowOpacity:(double)arg7 tintColor:(id)arg8 titleFont:(id)arg9 titleColor:(id)arg10 statusBarStyle:(long long)arg11 titleViewAlignment:(long long)arg12;

@end

