//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGChangePasswordViewDelegate.h"

@class IGChangePasswordView, IGUserSession, UIBarButtonItem;

@interface IGChangePasswordUpdatedViewController : IGViewController <IGChangePasswordViewDelegate>
{
    IGChangePasswordView *_resetPasswordView;
    UIBarButtonItem *_saveBarButtonItem;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)changePasswordViewDidTapForgotPasswordButton:(id)arg1;
- (void)didTapSaveButton;
- (void)enableSaveButton:(_Bool)arg1;
- (void)_validateAndSubmit;
- (void)_didTapSaveBarButtonItem;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

@end
