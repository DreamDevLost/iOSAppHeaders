//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGConstrainedSizeStickerViewType.h"
#import "IGEmojiSliderDelegate.h"
#import "IGTappableStickerViewType.h"
#import "IGUnpinnableStickerViewType.h"
#import "UITextViewDelegate.h"

@class IGEmojiModel, IGEmojiSlider, IGProfilePictureImageView, IGTextView, IGTooltipView, NSNumber, NSString, UIColor, UILabel;

@interface IGSliderStickerView : UIView <UITextViewDelegate, IGEmojiSliderDelegate, IGConstrainedSizeStickerViewType, IGUnpinnableStickerViewType, IGTappableStickerViewType>
{
    IGEmojiSlider *_slider;
    UIView *_borderView;
    UIView *_containerCardView;
    IGTextView *_textView;
    IGProfilePictureImageView *_voterProfilePictureView;
    UIView *_averageVoteView;
    long long _mode;
    NSNumber *_viewerVote;
    NSNumber *_averageVote;
    unsigned long long _voteCount;
    IGTooltipView *_averageVoteTooltip;
    _Bool _viewerCanVote;
    NSString *_sliderPk;
    UILabel *_emojiBalloonView;
    double _emojiBalloonXPosition;
    double _emojiBalloonScale;
    _Bool _editing;
    id <IGSliderStickerViewDelegate> _delegate;
    UIColor *_textColor;
    UIColor *_placeholderTextColor;
    UIColor *_cardBackgroundColor;
    IGEmojiModel *_emojiModel;
    double _editingTransitionProgress;
}

@property(nonatomic) double editingTransitionProgress; // @synthesize editingTransitionProgress=_editingTransitionProgress;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) IGEmojiModel *emojiModel; // @synthesize emojiModel=_emojiModel;
@property(retain, nonatomic) UIColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <IGSliderStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)outlinePath;
- (id)_emojiFlyAwayAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_emojiBounceAnimationWithYPosition:(double)arg1;
- (void)animateEmojiSlide;
- (double)_averageVoteXPosition;
- (double)_sliderThumbXPosition;
- (double)_rotationAngle;
- (id)_configureAttributedPlaceholderTextWithColor:(id)arg1;
- (id)_textViewWithQuestion:(id)arg1;
- (void)_updateVoteViewAnimated:(_Bool)arg1 shouldShowTooltip:(_Bool)arg2;
- (_Bool)_shouldShowBorderForBackgroundColor:(id)arg1;
- (void)_setBorderVisible:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)storyAssetDiffableIdentifier;
- (_Bool)disableStickerPinning;
- (id)tapModelObject;
- (id)stickerView;
- (id)loggingId;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (void)_scaleEmojiBalloonFromSlider:(id)arg1;
- (void)_sliderValueChanged:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)emojiSliderDidReceiveTapOnEmoji:(id)arg1;
- (void)emojiSliderDidEndSliding:(id)arg1;
- (void)emojiSliderDidBeginSliding:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
@property(nonatomic) long long trackStyle;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)sliderStickerModel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)removeAverageVoteTooltip;
- (void)returnEmojiToDefaultPosition;
- (void)configureWithUser:(id)arg1;
- (void)setInteractiveElementsEnabled:(_Bool)arg1;
- (id)initConsumptionViewWithModel:(id)arg1;
- (id)initCreationView;
- (void)_defaultInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
