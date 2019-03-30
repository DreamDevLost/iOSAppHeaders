//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectComposerBackgroundConfig, IGImageTintConfig, NSString, UIColor;

@interface IGDirectThreadInputViewConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showCameraButton;
    _Bool _showTrayButton;
    _Bool _showMoreButton;
    _Bool _shouldInsetCameraButtonWithinInputField;
    _Bool _shouldAnimateInputFieldChanges;
    IGDirectComposerBackgroundConfig *_backgroundConfig;
    UIColor *_textColor;
    UIColor *_placeholderTextColor;
    UIColor *_sendButtonColor;
    UIColor *_borderColor;
    NSString *_placeholderText;
    NSString *_placeholderAccessibilityText;
    unsigned long long _cameraButtonType;
    IGImageTintConfig *_cameraButtonTintConfig;
    double _defaultTextInputViewOvalPadding;
}

+ (id)postLiveViewerConfigWithTrayInViewerEnabled:(_Bool)arg1;
+ (id)clickToDirectAdsConfigWithTrayInViewerEnabled:(_Bool)arg1;
+ (id)storyViewerConfigWithTrayInViewerEnabled:(_Bool)arg1 storyAuthorName:(id)arg2 useReplyFormatPlaceholder:(_Bool)arg3;
@property(readonly, nonatomic) double defaultTextInputViewOvalPadding; // @synthesize defaultTextInputViewOvalPadding=_defaultTextInputViewOvalPadding;
@property(readonly, nonatomic) _Bool shouldAnimateInputFieldChanges; // @synthesize shouldAnimateInputFieldChanges=_shouldAnimateInputFieldChanges;
@property(readonly, nonatomic) _Bool shouldInsetCameraButtonWithinInputField; // @synthesize shouldInsetCameraButtonWithinInputField=_shouldInsetCameraButtonWithinInputField;
@property(readonly, copy, nonatomic) IGImageTintConfig *cameraButtonTintConfig; // @synthesize cameraButtonTintConfig=_cameraButtonTintConfig;
@property(readonly, nonatomic) unsigned long long cameraButtonType; // @synthesize cameraButtonType=_cameraButtonType;
@property(readonly, copy, nonatomic) NSString *placeholderAccessibilityText; // @synthesize placeholderAccessibilityText=_placeholderAccessibilityText;
@property(readonly, copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly, nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(readonly, nonatomic) _Bool showTrayButton; // @synthesize showTrayButton=_showTrayButton;
@property(readonly, nonatomic) _Bool showCameraButton; // @synthesize showCameraButton=_showCameraButton;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) UIColor *sendButtonColor; // @synthesize sendButtonColor=_sendButtonColor;
@property(readonly, copy, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) IGDirectComposerBackgroundConfig *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
- (void).cxx_destruct;
- (id)initWithBackgroundConfig:(id)arg1 textColor:(id)arg2 placeholderTextColor:(id)arg3 sendButtonColor:(id)arg4 borderColor:(id)arg5 showCameraButton:(_Bool)arg6 showTrayButton:(_Bool)arg7 showMoreButton:(_Bool)arg8 placeholderText:(id)arg9 placeholderAccessibilityText:(id)arg10 cameraButtonType:(unsigned long long)arg11 cameraButtonTintConfig:(id)arg12 shouldInsetCameraButtonWithinInputField:(_Bool)arg13 shouldAnimateInputFieldChanges:(_Bool)arg14 defaultTextInputViewOvalPadding:(double)arg15;

@end

