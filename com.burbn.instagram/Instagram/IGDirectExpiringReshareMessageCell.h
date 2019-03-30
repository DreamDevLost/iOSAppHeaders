//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageCell.h"

#import "IGDirectLoadingViewProtocol.h"
#import "IGDirectMediaViewerCellProtocol.h"

@class IGCoreTextView, IGDirectExpiringMediaSeparatorView, IGDirectTextMessageBubbleView, IGImageProgressView, IGLiveViewerHeaderView, IGSingleDoubleTapGestureRecognizer, IGStoryGradientRingView, IGTapButton, NSString, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface IGDirectExpiringReshareMessageCell : IGDirectMessageCell <IGDirectLoadingViewProtocol, IGDirectMediaViewerCellProtocol>
{
    struct CGSize _imageSize;
    struct CGSize _textBubbleSize;
    double _contentHeight;
    double _cellWidth;
    struct CGSize _placeholderTextViewSize;
    struct CGSize _addToStoryButtonSize;
    struct CGSize _persistedLabelViewSize;
    struct CGSize _persistedImageViewSize;
    IGSingleDoubleTapGestureRecognizer *_thumbnailTapGestureRecognizer;
    IGStoryGradientRingView *_loadingSpinnerView;
    UIVisualEffectView *_blurView;
    UIImageView *_hiddenIcon;
    id <IGDirectExpiringReshareMessageCellDelegate> _delegate;
    IGImageProgressView *_imageView;
    id <IGDirectStoryRepostDelegate> _storyRepostDelegate;
    UILabel *_headerLabel;
    IGDirectTextMessageBubbleView *_textBubbleView;
    IGDirectExpiringMediaSeparatorView *_dottedLineView;
    IGCoreTextView *_placeholderTextView;
    UILabel *_quickReactionLabel;
    IGLiveViewerHeaderView *_liveReshareHeaderView;
    UIView *_liveHeaderGradientView;
    UILabel *_CTALabel;
    IGTapButton *_addToStoryButton;
    UILabel *_persistedLabel;
    UIImageView *_persistedImageView;
}

+ (_Bool)needsToPassTouchEvents;
+ (_Bool)needsContainerStyling;
+ (_Bool)needsReactionsView;
+ (_Bool)needsDoubleTapGesture;
@property(readonly, nonatomic) UIImageView *persistedImageView; // @synthesize persistedImageView=_persistedImageView;
@property(readonly, nonatomic) UILabel *persistedLabel; // @synthesize persistedLabel=_persistedLabel;
@property(readonly, nonatomic) IGTapButton *addToStoryButton; // @synthesize addToStoryButton=_addToStoryButton;
@property(readonly, nonatomic) UILabel *CTALabel; // @synthesize CTALabel=_CTALabel;
@property(readonly, nonatomic) UIView *liveHeaderGradientView; // @synthesize liveHeaderGradientView=_liveHeaderGradientView;
@property(readonly, nonatomic) IGLiveViewerHeaderView *liveReshareHeaderView; // @synthesize liveReshareHeaderView=_liveReshareHeaderView;
@property(readonly, nonatomic) UILabel *quickReactionLabel; // @synthesize quickReactionLabel=_quickReactionLabel;
@property(readonly, nonatomic) IGCoreTextView *placeholderTextView; // @synthesize placeholderTextView=_placeholderTextView;
@property(readonly, nonatomic) IGDirectExpiringMediaSeparatorView *dottedLineView; // @synthesize dottedLineView=_dottedLineView;
@property(readonly, nonatomic) IGDirectTextMessageBubbleView *textBubbleView; // @synthesize textBubbleView=_textBubbleView;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak id <IGDirectStoryRepostDelegate> storyRepostDelegate; // @synthesize storyRepostDelegate=_storyRepostDelegate;
@property(readonly, nonatomic) IGImageProgressView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)previewImageForMediaViewer;
- (id)imageViewForMediaViewer;
- (void)_didTapAddToStory;
- (struct CGRect)messageContentAnchoringFrame;
- (struct CGSize)messageContentSize;
- (void)setLoading:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (double)reactionsOriginXOffsetForOutgoingMessage;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)_didTapImageView;
- (void)_setUpSensitivityView;
- (void)_setUpExtraAccessibilityElements;
- (void)_setUpPersistedView;
- (void)_setUpAddToStoryButton;
- (void)_setUpLiveReshareImageViewOverlay;
- (void)_setupQuickReactionLabel;
- (void)_setupLoadingSpinnerView;
- (void)_setupPlaceholderTextView;
- (void)_setupImageViewGestureRecognizer;
- (void)_setupImageView;
- (void)_setupDottedLineView;
- (void)_setupHeaderLabel;
- (void)_setupTextBubbleView;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

