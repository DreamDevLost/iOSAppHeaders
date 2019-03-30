//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGStandardizedNUXInterstitialViewDelegate.h"

@class IGNUXInterstitialView, IGNUXLayoutSpec, IGStandardizedNUXInterstitialView, IGStandardizedNUXLayoutSpec, IGUserSession, NSString;

@interface IGRetroRegistrationOneTapViewController : UIViewController <IGStandardizedNUXInterstitialViewDelegate, IGAnalyticsModule>
{
    IGUserSession *_userSession;
    IGNUXInterstitialView *_oneTapView;
    IGNUXLayoutSpec *_layoutSpec;
    IGStandardizedNUXInterstitialView *_standardizedOneTapView;
    IGStandardizedNUXLayoutSpec *_standardizedLayoutSpec;
    _Bool _isNUXRedesignEnabled;
    id <IGRetroRegistrationOneTapViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGRetroRegistrationOneTapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)standardizedNUXInterstitialViewDidTapSkip:(id)arg1;
- (void)standardizedNUXInterstitialViewDidTapNext:(id)arg1;
- (id)analyticsModule;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)_skipButtonTapped;
- (void)_rememberButtonTapped;
- (id)_standardizedOneTapView;
- (id)_oneTapView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 layoutSpec:(id)arg2 standardizedLayoutSpec:(id)arg3 isNUXRedesignEnabled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

