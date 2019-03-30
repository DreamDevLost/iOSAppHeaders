//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGLiveWithAutoAcceptCountdownViewDelegate.h"

@class IGCameraViewController, IGLiveWithAutoAcceptCountdownView, IGProfilePictureImageView, IGUserSession, NSString;

@interface IGLiveAutoAcceptCountdownViewController : UIViewController <IGLiveWithAutoAcceptCountdownViewDelegate>
{
    NSString *_module;
    IGCameraViewController *_cameraViewController;
    IGLiveWithAutoAcceptCountdownView *_autoAcceptView;
    IGProfilePictureImageView *_avatarView;
    NSString *_broadcastOwnerUsername;
    IGUserSession *_userSession;
    id <IGLiveWithAutoAcceptCountdownViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLiveWithAutoAcceptCountdownViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(copy, nonatomic) NSString *broadcastOwnerUsername; // @synthesize broadcastOwnerUsername=_broadcastOwnerUsername;
@property(retain, nonatomic) IGProfilePictureImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) IGLiveWithAutoAcceptCountdownView *autoAcceptView; // @synthesize autoAcceptView=_autoAcceptView;
@property(retain, nonatomic) IGCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void).cxx_destruct;
- (void)autoAcceptCountdownViewCancelButtonTapped:(id)arg1;
- (void)_configureCameraView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 broadcastOwnerUsername:(id)arg2 delegate:(id)arg3 module:(id)arg4;

@end

