//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGDirectAvatarView, IGRadioButtonView, IGReelOwnerPictureImageView, IGStoryBadgeView, IGStoryGradientRingView, IGStoryViewerDescriptionView, IGStoryViewerSource, IGTableLayoutSpec, IGTapButton, UIImageView, UIView;

@interface IGStoryViewerCell : UICollectionViewCell
{
    IGStoryViewerDescriptionView *_descriptionView;
    UIView *_followButton;
    _Bool _storyHidden;
    _Bool _viewerSelected;
    id <IGStoryViewerCellDelegate> _delegate;
    IGStoryViewerSource *_viewerSource;
    IGTapButton *_unhideButton;
    UIImageView *_selectedCheck;
    IGRadioButtonView *_radioButton;
    IGRadioButtonView *_clearRadioButton;
    UIView *_reelOwnerImageViewWrapper;
    IGReelOwnerPictureImageView *_reelOwnerImageView;
    IGStoryGradientRingView *_ringView;
    IGStoryBadgeView *_storyBadgeView;
    long long _accessoryType;
    IGTableLayoutSpec *_tableInterface;
    IGDirectAvatarView *_avatarView;
    IGTapButton *_directMessageButton;
    IGTapButton *_moreButton;
}

+ (double)preferredCellHeight;
@property(readonly, nonatomic) IGTapButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) IGTapButton *directMessageButton; // @synthesize directMessageButton=_directMessageButton;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(readonly, nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) _Bool viewerSelected; // @synthesize viewerSelected=_viewerSelected;
@property(nonatomic) _Bool storyHidden; // @synthesize storyHidden=_storyHidden;
@property(readonly, nonatomic) IGStoryBadgeView *storyBadgeView; // @synthesize storyBadgeView=_storyBadgeView;
@property(retain, nonatomic) IGStoryGradientRingView *ringView; // @synthesize ringView=_ringView;
@property(readonly, nonatomic) IGReelOwnerPictureImageView *reelOwnerImageView; // @synthesize reelOwnerImageView=_reelOwnerImageView;
@property(readonly, nonatomic) UIView *reelOwnerImageViewWrapper; // @synthesize reelOwnerImageViewWrapper=_reelOwnerImageViewWrapper;
@property(readonly, nonatomic) IGRadioButtonView *clearRadioButton; // @synthesize clearRadioButton=_clearRadioButton;
@property(readonly, nonatomic) IGRadioButtonView *radioButton; // @synthesize radioButton=_radioButton;
@property(readonly, nonatomic) UIImageView *selectedCheck; // @synthesize selectedCheck=_selectedCheck;
@property(readonly, nonatomic) IGTapButton *unhideButton; // @synthesize unhideButton=_unhideButton;
@property(readonly, nonatomic) IGStoryViewerSource *viewerSource; // @synthesize viewerSource=_viewerSource;
@property(nonatomic) __weak id <IGStoryViewerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_shouldShowBadgeView;
- (double)_maxLabelWidthWithConstrainingWidth:(double)arg1;
- (id)_accessoryButtons;
- (void)_configureDetailViewWithViewerSource:(id)arg1;
- (void)layoutSubviews;
- (void)_moreTapped;
- (void)_directMessageTapped;
- (void)_avatarTapped;
- (void)_unhideTapped;
- (void)_hideTapped;
- (id)reelOwnerProfileImageView;
- (void)configureWithViewerSource:(id)arg1 accessoryType:(long long)arg2 avatarSpec:(id)arg3 module:(id)arg4 followButton:(id)arg5;
- (double)dynamicCellHeightWithConstrainingWidth:(double)arg1;
- (void)setAvatarLoading:(_Bool)arg1;
- (void)_initializeAvatarViewIfNeeded;
- (void)_initializeRingAndStoryBadgeViewIfNeeded;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

