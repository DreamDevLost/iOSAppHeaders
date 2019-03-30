//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class IGDirectShareSheetOneTapButton, IGDirectShareSheetOneTapButtonState, IGProfilePictureImageView, IGUser, NSString, UIButton, UILabel, UIView;

@interface IGStoryNudgesFriendCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    IGProfilePictureImageView *_profilePictureView;
    UILabel *_handleLabel;
    UILabel *_nameLabel;
    UILabel *_buttonLabel;
    UIView *_dividerView;
    UIButton *_dismissButton;
    IGDirectShareSheetOneTapButton *_oneTapButton;
    IGDirectShareSheetOneTapButtonState *_oneTapButtonState;
    UIView *_cardBackgroundView;
    IGUser *_user;
    id <IGStoryNudgesFriendCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryNudgesFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissButtonTapped;
- (void)_profilePicTapped;
- (void)configureCellWithUserInfo:(id)arg1 oneTapButtonState:(id)arg2 oneTapButtonDelegate:(id)arg3 module:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

