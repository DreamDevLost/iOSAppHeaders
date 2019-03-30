//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGTooltipViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class IGFeedItem, IGTooltipView, IGUserSession, NSString, UIButton, UITextView, UIView;

@interface IGFeedItemBusinessCell : UICollectionViewCell <UIWebViewDelegate, UIGestureRecognizerDelegate, IGTooltipViewDelegate>
{
    _Bool _shouldHideTooltipWhenTap;
    IGFeedItem *_feedItem;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedItemBusinessCellDelegate> _delegate;
    UIButton *_promoteButton;
    UIButton *_insightsButton;
    UITextView *_insightTipPostTextView;
    UIView *_lineView;
    unsigned long long _buttonStyle;
    IGTooltipView *_tooltipView;
    IGUserSession *_userSession;
}

+ (double)_insightTipTextHeight:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGSize)_sizeForInsightTipTextView:(id)arg1 inContainerWithWidth:(double)arg2 promoteButtonWidth:(double)arg3;
+ (struct CGSize)_sizeForPromoteButtonWithText:(id)arg1 userSession:(id)arg2 feedItem:(id)arg3;
+ (id)_hotPostAttributedString:(id)arg1;
+ (id)_promoteButtonTextForFeedItem:(id)arg1;
+ (id)_promoteButtonTextForToggle:(id)arg1;
+ (id)_promoteButtonTextForAggregatedEngagement:(id)arg1;
+ (unsigned long long)_promoteButtonStyleWithUserSession:(id)arg1 feedItem:(id)arg2;
+ (id)_fontForPromoteButtonWithStyle:(unsigned long long)arg1;
+ (double)heightForFeedItem:(id)arg1 withContainerWidth:(double)arg2 userSession:(id)arg3;
@property(nonatomic) _Bool shouldHideTooltipWhenTap; // @synthesize shouldHideTooltipWhenTap=_shouldHideTooltipWhenTap;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UITextView *insightTipPostTextView; // @synthesize insightTipPostTextView=_insightTipPostTextView;
@property(retain, nonatomic) UIButton *insightsButton; // @synthesize insightsButton=_insightsButton;
@property(retain, nonatomic) UIButton *promoteButton; // @synthesize promoteButton=_promoteButton;
@property(nonatomic) __weak id <IGFeedItemBusinessCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)configureWithFeedItem:(id)arg1 itemConfiguration:(id)arg2 cellDelegate:(id)arg3 userSession:(id)arg4;
- (void)_viewAdGuidelineButtonClick:(id)arg1;
- (void)_insightsButtonClick:(id)arg1;
- (void)_promoteButtonClick:(id)arg1;
- (void)didTapTooltipView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)_hideTooltip;
- (_Bool)_showTooltipsWithText:(id)arg1 time:(double)arg2 analyticsTag:(id)arg3;
- (_Bool)_shouldShowPromoteNux;
- (void)showPromoteNUXIfNecessary;
- (void)showPromoteUnavailableReason;
- (void)_showPromoteButtonTooltip;
- (void)_hotPostTapRecognizer:(id)arg1;
- (void)_setupInsightTipPostTextView;
- (void)_setupInsightsButton;
- (void)_setupBusinessPromoteButtonForFeedItemWithAggregatedEngagement:(id)arg1;
- (void)_setupPromoteButtonForFeedItem:(id)arg1;
- (void)_updateCellWithFeedItem:(id)arg1 userSession:(id)arg2;
- (void)setItemConfiguration:(id)arg1 userSession:(id)arg2;
- (void)setFeedItem:(id)arg1 userSession:(id)arg2;
- (id)_initializeHotPostTextView;
- (void)_updateInsightsButtonStyle:(unsigned long long)arg1;
- (id)_initializeInsightsButton;
- (id)_initializePromoteButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
