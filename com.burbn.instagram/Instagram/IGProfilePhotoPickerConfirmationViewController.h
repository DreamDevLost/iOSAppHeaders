//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGProfilePhotoPickerConfirmationViewDelegate.h"

@class IGProfilePhotoPickerConfirmationView, IGUserSession, NSString, UIBarButtonItem, UIImage;

@interface IGProfilePhotoPickerConfirmationViewController : UIViewController <IGProfilePhotoPickerConfirmationViewDelegate>
{
    IGUserSession *_userSession;
    UIImage *_profileImage;
    IGProfilePhotoPickerConfirmationView *_containerView;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_doneButton;
    long long _profilePhotoOption;
    _Bool _postToFeedEnabled;
    id <IGEditProfilePhotoPickerConfirmationDelegate> _photoPickerDelegate;
}

@property(nonatomic) __weak id <IGEditProfilePhotoPickerConfirmationDelegate> photoPickerDelegate; // @synthesize photoPickerDelegate=_photoPickerDelegate;
- (void).cxx_destruct;
- (void)_didTapCancel;
- (void)_didTapDone;
- (void)profilePhotoPickerConfirmationView:(id)arg1 didTogglePostToFeedSwitchOn:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 profileImage:(id)arg2 profilePhotoOption:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

