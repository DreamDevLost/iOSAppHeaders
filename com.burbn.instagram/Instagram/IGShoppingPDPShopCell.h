//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFollowControllerDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGFollowController, IGProfilePictureImageView, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface IGShoppingPDPShopCell : UICollectionViewCell <IGFollowControllerDelegate, IGProfilePictureImageViewDelegate, UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGProfilePictureImageView *_profileImageView;
    UIImageView *_chevronView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    IGFollowController *_followController;
    _Bool _showFollowButton;
    id <IGShoppingPDPShopCellDelegate> _delegate;
}

+ (double)preferredHeightWithWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3 showFollowButton:(_Bool)arg4 followButtonState:(long long)arg5;
@property(nonatomic) __weak id <IGShoppingPDPShopCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)_didTapCell:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)configureWithMerchant:(id)arg1 userSession:(id)arg2 title:(id)arg3 subtitle:(id)arg4 showFollowButton:(_Bool)arg5 analyticsModule:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
