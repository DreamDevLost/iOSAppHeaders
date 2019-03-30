//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBusinessConversionViewController.h"
#import "IGDismissableViewController.h"
#import "IGNUXIntroViewDelegate.h"

@class IG4BLogger, IGNUXIntroView, IGNUXIntroViewDataSource, IGUserSession, NSString;

@interface IGBusinessLoadQuickConversionSettingsViewController : IGViewController <IGDismissableViewController, IGNUXIntroViewDelegate, IGBusinessConversionViewController>
{
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    IGNUXIntroView *_introView;
    IGNUXIntroViewDataSource *_introDataSource;
    _Bool _isQuickConversionSettingsFetchFinished;
    _Bool _isContinueButtonTapped;
    id <IGBusinessConversionViewControllerDelegate> delegate;
    id <IGBusinessLoadQuickConversionSettingsDelegate> loadDelegate;
}

@property(nonatomic) __weak id <IGBusinessLoadQuickConversionSettingsDelegate> loadDelegate; // @synthesize loadDelegate;
@property(nonatomic) __weak id <IGBusinessConversionViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)didDismissViewController;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)nuxIntroView:(id)arg1 swipeableViewDidEndDecelerating:(id)arg2;
- (void)nuxIntroView:(id)arg1 didScrollSwipeableViewWithContentOffsetX:(double)arg2;
- (void)nuxIntroView:(id)arg1 didDisplayPageAt:(unsigned long long)arg2;
- (void)nuxIntroView:(id)arg1 didTapContinueButton:(id)arg2;
- (void)_tryToCompleteStep;
- (void)_handleFetchIntroSubtitleFailure:(id)arg1;
- (void)_handleFetchIntroSubtitleSuccess;
- (void)_fetchSocialContext;
- (long long)_layoutType;
- (void)_setupIntroView;
- (void)_handleFetchQuickConversionSettingsFailWithError:(id)arg1;
- (void)_handleFetchQuickConversionSettingsSuccessWithSetting:(id)arg1;
- (void)_fetchQuickConversionSettings;
- (void)_setupNavigationBar;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
