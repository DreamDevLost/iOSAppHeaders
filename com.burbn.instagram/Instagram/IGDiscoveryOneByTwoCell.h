//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGPresentableStoryViewer.h"
#import "IGStoryAnimatableDestinationView.h"

@class CALayer, IGGradientView, IGReel, IGRemoteImageView, IGStoryTrayAvatarView, NSString, UIImageView, UILabel, UIView;

@interface IGDiscoveryOneByTwoCell : UICollectionViewCell <IGStoryAnimatableDestinationView, IGPresentableStoryViewer>
{
    IGGradientView *_gradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_verifiedBadgeView;
    UIImageView *_badgeView;
    CALayer *_highlightOverlay;
    _Bool _showError;
    IGRemoteImageView *_previewImageView;
    IGStoryTrayAvatarView *_avatarView;
    IGReel *_currentReel;
    long long _alignmentStyle;
}

@property(readonly, nonatomic) IGStoryTrayAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *viewModelIdentifier;
@property(readonly, nonatomic) UIView *backgroundViewForAnimation;
@property(readonly, nonatomic) UIView *contentViewForSnapshot;
@property(readonly, nonatomic) UIView *contentViewForAnimation;
@property(readonly, nonatomic) UIView *profileImageViewForAnimation;
- (void)animateVisualMessageSendWithDuration:(double)arg1 delay:(double)arg2 style:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)contentViewForTransitionAnimation;
- (_Bool)canPerformAnimation;
- (void)_configurePreviewViewlWithReel:(id)arg1 reelSeenStateStore:(id)arg2 alignmentStyle:(long long)arg3;
- (void)_configureAvatarViewWithReel:(id)arg1 reelSeenStateStore:(id)arg2 alignmentStyle:(long long)arg3;
- (void)_updateStyle;
- (void)setShowError:(_Bool)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)configureWithCurrentReel:(id)arg1 reelSeenStateStore:(id)arg2 alignmentStyle:(long long)arg3;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)_layoutUsername;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imagePriority:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

