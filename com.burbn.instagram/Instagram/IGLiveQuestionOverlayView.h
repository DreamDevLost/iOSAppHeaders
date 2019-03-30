//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGProfilePictureImageViewDelegate.h"

@class IGProfilePictureImageView, IGTapButton, IGUser, UILabel;

@interface IGLiveQuestionOverlayView : UIView <IGProfilePictureImageViewDelegate>
{
    UIView *_backgroundView;
    UILabel *_questionLabel;
    UIView *_headerView;
    UIView *_headerDimmingView;
    UILabel *_headerLabel;
    IGProfilePictureImageView *_profilePictureImageView;
    IGTapButton *_removeButton;
    IGUser *_submittedByUser;
    id <IGLiveQuestionOverlayViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLiveQuestionOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeButtonTapped;
- (void)_layoutHeaderContents;
- (void)_createAndInstallHeaderContents;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
