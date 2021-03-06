//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFollowControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAGradientLayer, IGCarouselImageView, IGFollowController, IGProfilePictureImageView, IGSuggestedUserInfo, IGUserSession, NSString, UILabel, UIView;

@interface IGDiscoveryAccountRecommendationsCellCollectionViewCell : UICollectionViewCell <IGFollowControllerDelegate, UIGestureRecognizerDelegate>
{
    IGCarouselImageView *_carouselImageView;
    CAGradientLayer *_gradientLayer;
    UIView *_contentOverlayView;
    IGProfilePictureImageView *_profilePicImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGFollowController *_followController;
    IGSuggestedUserInfo *_suggestedUserInfo;
    IGUserSession *_userSession;
    id <IGDiscoveryAccountRecommendationsSectionControllerLoggingProvider> _accountRecommendationsLoggingProvider;
    id <IGDiscoveryAccountRecommendationsCellCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoveryAccountRecommendationsCellCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)_didTapOnCell;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithSuggestedUserInfo:(id)arg1 userSession:(id)arg2 loggingProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

