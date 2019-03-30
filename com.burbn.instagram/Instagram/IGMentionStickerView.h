//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGOverlayTransformViewType.h"
#import "IGStickerBundleContentViewType.h"
#import "IGTappableStickerViewType.h"
#import "UITextViewDelegate.h"

@class CAShapeLayer, IGGradientView, IGUser, NSString, UILabel, UITextView;

@interface IGMentionStickerView : UIView <UITextViewDelegate, IGStickerBundleContentViewType, IGOverlayTransformViewType, IGTappableStickerViewType>
{
    IGGradientView *_gradientView;
    UILabel *_label;
    UITextView *_textView;
    CAShapeLayer *_backdropLayer;
    _Bool _isPlaceholderOn;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    id <IGMentionStickerViewDelegate> _delegate;
    IGUser *_user;
    NSString *_currentText;
    long long _currentStyle;
}

@property(nonatomic) _Bool isPlaceholderOn; // @synthesize isPlaceholderOn=_isPlaceholderOn;
@property(nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(copy, nonatomic) NSString *currentText; // @synthesize currentText=_currentText;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <IGMentionStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)outlinePath;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (id)tapModelObject;
- (id)stickerView;
- (id)loggingId;
- (id)storyAssetDiffableIdentifier;
- (id)transformTargetView;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)configureWithUser:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
