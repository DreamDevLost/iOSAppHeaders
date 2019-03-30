//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, IGLiveCuratorContainerView, IGLiveIndicatorView, IGStoryGradientRingView;

@interface IGLiveWithStackedTrayAvatarView : UIView
{
    IGLiveCuratorContainerView *_frontProfileView;
    IGLiveCuratorContainerView *_backProfileView;
    unsigned long long _avatarAlignmentStyle;
    double _profileImageSizeRatioToView;
    UIView *_frontProfileBorderView;
    UIView *_backProfileBorderView;
    CAShapeLayer *_frontProfileRing;
    CAShapeLayer *_backProfileRing;
    IGLiveIndicatorView *_liveLabel;
    IGStoryGradientRingView *_frontGradientRing;
    IGStoryGradientRingView *_backGradientRing;
    CAShapeLayer *_frontGradientRingMask;
    CAShapeLayer *_backGradientRingMask;
}

@property(readonly, nonatomic) CAShapeLayer *backGradientRingMask; // @synthesize backGradientRingMask=_backGradientRingMask;
@property(readonly, nonatomic) CAShapeLayer *frontGradientRingMask; // @synthesize frontGradientRingMask=_frontGradientRingMask;
@property(readonly, nonatomic) IGStoryGradientRingView *backGradientRing; // @synthesize backGradientRing=_backGradientRing;
@property(readonly, nonatomic) IGStoryGradientRingView *frontGradientRing; // @synthesize frontGradientRing=_frontGradientRing;
@property(readonly, nonatomic) IGLiveIndicatorView *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(readonly, nonatomic) CAShapeLayer *backProfileRing; // @synthesize backProfileRing=_backProfileRing;
@property(readonly, nonatomic) CAShapeLayer *frontProfileRing; // @synthesize frontProfileRing=_frontProfileRing;
@property(readonly, nonatomic) UIView *backProfileBorderView; // @synthesize backProfileBorderView=_backProfileBorderView;
@property(readonly, nonatomic) UIView *frontProfileBorderView; // @synthesize frontProfileBorderView=_frontProfileBorderView;
@property(readonly, nonatomic) double profileImageSizeRatioToView; // @synthesize profileImageSizeRatioToView=_profileImageSizeRatioToView;
@property(nonatomic) unsigned long long avatarAlignmentStyle; // @synthesize avatarAlignmentStyle=_avatarAlignmentStyle;
@property(readonly, nonatomic) IGLiveCuratorContainerView *backProfileView; // @synthesize backProfileView=_backProfileView;
@property(readonly, nonatomic) IGLiveCuratorContainerView *frontProfileView; // @synthesize frontProfileView=_frontProfileView;
- (void).cxx_destruct;
- (id)_avatarBezierPathWithTargetView:(id)arg1;
- (id)_gradientRingMaskPath:(id)arg1;
- (void)_layoutGradientRing;
- (void)_updateInnerRingPath:(id)arg1 profileView:(id)arg2;
- (struct CGRect)_stackedFrontUserFrame;
- (struct CGRect)_stackedBackUserFrame;
- (void)layoutSubviews;
- (void)setFrontProfileUser:(id)arg1 backProfileUser:(id)arg2 hasBadgeBorder:(_Bool)arg3 module:(id)arg4;
- (void)_setUpStackedGradientRing;
- (void)_setUpStackedProfileView;
- (id)initWithProfileImageSize:(double)arg1 viewWidth:(double)arg2 avatarAlignmentStyle:(unsigned long long)arg3;

@end

