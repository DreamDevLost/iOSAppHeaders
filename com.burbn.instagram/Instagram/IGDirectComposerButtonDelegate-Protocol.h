//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton, UIGestureRecognizer, UILongPressGestureRecognizer, UIView;

@protocol IGDirectComposerButtonDelegate <NSObject>
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapQuickReplyButton:(UIButton *)arg2 isHighlighted:(_Bool)arg3 text:(NSString *)arg4;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapOverlayedTextCameraButton:(UIView *)arg2 withText:(NSString *)arg3;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(UIGestureRecognizer *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didLongPressCameraButtonWithGesture:(UILongPressGestureRecognizer *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapStickerButton:(UIButton *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapVoiceMessageButton:(UIButton *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapAnimatedMediaButton:(UIButton *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapSendButtonWithText:(NSString *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapMoreButton:(UIButton *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapLikeButton:(UIButton *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapGalleryButton:(UIButton *)arg2;
- (void)inputView:(id <IGDirectComposerProtocol>)arg1 didTapCameraButton:(UIButton *)arg2;
@end

