//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGTwoFactorSetupIntroViewDelegate.h"

@class IGTwoFactorSetupIntroView, IGTwoFactorSetupLogger, IGTwoFactorStatusInfo, IGUserSession;

@interface IGTwoFactorSetupIntroViewController : IGViewController <IGTwoFactorSetupIntroViewDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorStatusInfo *_statusInfo;
    IGTwoFactorSetupIntroView *_setupIntroView;
    IGTwoFactorSetupLogger *_setupLogger;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)twoFactorSetupIntroView:(id)arg1 didTapOnLinkWithURL:(id)arg2;
- (void)twoFactorSetupIntroViewDidTapOnStartButton:(id)arg1;
- (_Bool)prefersTabBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 statusInfo:(id)arg2 setupLogger:(id)arg3;

@end
