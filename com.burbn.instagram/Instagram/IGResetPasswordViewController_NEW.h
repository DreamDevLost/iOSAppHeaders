//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGResetPasswordViewDelegate_NEW.h"

@class IGResetPasswordView_NEW, IGUserSession, NSString, UIBarButtonItem;

@interface IGResetPasswordViewController_NEW : IGViewController <IGResetPasswordViewDelegate_NEW>
{
    IGResetPasswordView_NEW *_resetPasswordView;
    UIBarButtonItem *_saveBarButtonItem;
    IGUserSession *_userSession;
    NSString *_token;
    _Bool _isSubmitting;
}

- (void).cxx_destruct;
- (void)_logResetPasswordFailedWithReason:(id)arg1;
- (void)_logResetPasswordSucceeded;
- (void)_logBarButtonTappedIsLeftButton:(_Bool)arg1;
- (void)_resetPassword;
- (void)didTapSaveButton;
- (void)didTapCancelButton;
- (void)enableSaveButton:(_Bool)arg1;
- (id)analyticsModule;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 token:(id)arg2;

@end
