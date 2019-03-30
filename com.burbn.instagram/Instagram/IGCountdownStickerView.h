//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGConstrainedSizeStickerViewType.h"
#import "IGCountdownStickerTimeViewDelegate.h"
#import "IGStoryStickerDeletable.h"
#import "IGTappableStickerViewType.h"
#import "IGUnpinnableStickerViewType.h"
#import "UITextViewDelegate.h"

@class IGCountdownStickerAttributionView, IGCountdownStickerTimeView, IGGradientView, IGTapButton, IGTextView, IGUser, NSArray, NSDate, NSString, UIColor, UITapGestureRecognizer;

@interface IGCountdownStickerView : UIView <UITextViewDelegate, IGCountdownStickerTimeViewDelegate, IGConstrainedSizeStickerViewType, IGUnpinnableStickerViewType, IGStoryStickerDeletable, IGTappableStickerViewType>
{
    IGGradientView *_gradientView;
    IGTextView *_nameTextView;
    IGCountdownStickerTimeView *_countdownTimeView;
    IGCountdownStickerAttributionView *_attributionView;
    UITapGestureRecognizer *_countdownTapGesture;
    IGTapButton *_rightArrowButton;
    _Bool _hasInputAccessoryView;
    _Bool _isViewerCountdownOwner;
    _Bool _isViewerFollowing;
    _Bool _isNonDeletable;
    _Bool _editable;
    _Bool _followingEnabled;
    id <IGCountdownStickerViewDelegate> _delegate;
    id <IGCountdownStickerViewConsumptionDelegate> _consumptionDelegate;
    NSString *_pk;
    IGUser *_attributionUser;
    unsigned long long _backgroundColor_creation_only;
    NSArray *_backgroundColors;
    UIColor *_numberColor;
    UIColor *_legibleColor;
    UIColor *_timeDigitCardColor;
}

@property(nonatomic) _Bool followingEnabled; // @synthesize followingEnabled=_followingEnabled;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIColor *timeDigitCardColor; // @synthesize timeDigitCardColor=_timeDigitCardColor;
@property(retain, nonatomic) UIColor *legibleColor; // @synthesize legibleColor=_legibleColor;
@property(retain, nonatomic) UIColor *numberColor; // @synthesize numberColor=_numberColor;
@property(retain, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(nonatomic) unsigned long long backgroundColor_creation_only; // @synthesize backgroundColor_creation_only=_backgroundColor_creation_only;
@property(retain, nonatomic) IGUser *attributionUser; // @synthesize attributionUser=_attributionUser;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(nonatomic) __weak id <IGCountdownStickerViewConsumptionDelegate> consumptionDelegate; // @synthesize consumptionDelegate=_consumptionDelegate;
@property(nonatomic) __weak id <IGCountdownStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (void).cxx_destruct;
- (id)_configureAttributedPlaceholderTextWithColor:(id)arg1;
- (double)_countdownCardBottomPadding;
- (_Bool)_backgroundIsWhite:(id)arg1;
- (id)outlinePath;
- (void)countdownStickerTimeViewDidReachEndDate:(id)arg1;
- (id)storyAssetDiffableIdentifier;
- (id)tapModelObject;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (_Bool)disableStickerPinning;
- (id)stickerView;
- (id)loggingId;
- (void)_didTapCountdown;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
@property(nonatomic) unsigned long long timeLabelState;
@property(readonly, nonatomic) struct CGPoint tooltipPoint;
@property(retain, nonatomic) UIView *inputAccessoryView;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSDate *countdownDate;
- (void)showFakeTick;
- (void)animateCountdownFinishedWithFastTickingDown:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setRightArrowButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowAnonymousAttribution:(_Bool)arg1;
- (id)countdownConsumptionModel;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)paste:(id)arg1;
- (void)layoutSubviews;
- (void)_defaultInit;
- (id)initConsumptionViewWithConsumptionModel:(id)arg1;
- (id)initCreationViewWithConsumptionModelTemplate:(id)arg1;
- (id)initCreationView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

