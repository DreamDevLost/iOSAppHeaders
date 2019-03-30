//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGRemoteImageViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAGradientLayer, CALayer, IGBlurredImageView, IGDiscoveryTopicModel, IGExploreTopicSelectorCollectionViewCellTitleView, IGProfilePictureImageView, IGRemoteImageView, NSString, UIImageView, UILongPressGestureRecognizer, UIView;

@interface IGExploreTopicSelectorCollectionViewCell : UICollectionViewCell <IGRemoteImageViewDelegate, UIGestureRecognizerDelegate>
{
    IGDiscoveryTopicModel *_topic;
    UIView *_containerView;
    IGRemoteImageView *_coverImageView;
    IGBlurredImageView *_backgroundBlurredImageView;
    CAGradientLayer *_gradientLayer;
    CALayer *_borderLayer;
    IGProfilePictureImageView *_profilePicImageView;
    UIImageView *_iconView;
    IGExploreTopicSelectorCollectionViewCellTitleView *_titleView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _ig_selected;
    _Bool _dimmingEnabled;
    double _expandedHeight;
    double _percentCollapsed;
    id <IGExploreTopicSelectorCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) _Bool dimmingEnabled; // @synthesize dimmingEnabled=_dimmingEnabled;
@property(nonatomic) __weak id <IGExploreTopicSelectorCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double percentCollapsed; // @synthesize percentCollapsed=_percentCollapsed;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(nonatomic) _Bool ig_selected; // @synthesize ig_selected=_ig_selected;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)remoteImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(id)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(id)arg2;
- (void)remoteImageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)remoteImageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)setDimmingEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateDimmedStateAnimated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setIg_selected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithTopic:(id)arg1 displayStyle:(long long)arg2 currentUser:(id)arg3 analyticsModule:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
