//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGStoryTrayBaseCell.h"

#import "IGStoryAnimatableDestinationView.h"

@class CAShapeLayer, IGStoryTrayAvatarView, IGStoryTrayCellViewModel, NSString, UIImageView, UILabel;

@interface IGStoryTrayCell : IGStoryTrayBaseCell <IGStoryAnimatableDestinationView>
{
    _Bool _shouldSkipTitleTransformation;
    _Bool _showError;
    IGStoryTrayAvatarView *_avatarView;
    IGStoryTrayCellViewModel *_model;
    double _percentCollapsed;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_verifiedBadgeView;
    UIImageView *_badgeView;
    CAShapeLayer *_overlayLayer;
}

@property(readonly, nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(readonly, nonatomic) CAShapeLayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(readonly, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UIImageView *verifiedBadgeView; // @synthesize verifiedBadgeView=_verifiedBadgeView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool shouldSkipTitleTransformation; // @synthesize shouldSkipTitleTransformation=_shouldSkipTitleTransformation;
@property(nonatomic) double percentCollapsed; // @synthesize percentCollapsed=_percentCollapsed;
@property(readonly, nonatomic) IGStoryTrayCellViewModel *model; // @synthesize model=_model;
- (id)avatarView;
- (void).cxx_destruct;
- (void)animateVisualMessageSendWithDuration:(double)arg1 delay:(double)arg2 style:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)contentViewForTransitionAnimation;
- (_Bool)canPerformAnimation;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_updateStyle;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)presentationAnimationNeedsCrossfade;
- (id)presentationAnimationToView;
- (id)presentationAnimationFromView;
- (id)profilePictureView;
- (void)setShowError:(_Bool)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
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
