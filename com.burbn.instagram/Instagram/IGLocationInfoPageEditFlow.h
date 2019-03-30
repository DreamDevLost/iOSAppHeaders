//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBusinessToolAlertViewControllerDelegate.h"

@class IG4BLogger, IGInfoLinkedBusinessViewModel, IGUserSession, NSString, UIViewController;

@interface IGLocationInfoPageEditFlow : NSObject <IGBusinessToolAlertViewControllerDelegate>
{
    NSString *_pageID;
    UIViewController *_presentingViewController;
    IGUserSession *_userSession;
    IGInfoLinkedBusinessViewModel *_linkedBusinessModel;
    IG4BLogger *_logger;
}

- (void).cxx_destruct;
- (void)businessToolAlertViewControllerDidTapDismissActionButton:(id)arg1;
- (void)businessToolAlertViewControllerDidTapActionButton:(id)arg1;
- (_Bool)_shouldUseInternalFacebookToken;
- (void)handleViewWillDisappearForViewController:(id)arg1;
- (void)handleViewWillAppearForViewController:(id)arg1;
- (_Bool)isLastTimeOnScreenForViewController:(id)arg1;
- (_Bool)isFirstTimeOnScreenForViewController:(id)arg1;
- (void)_openEditPageInfoURL:(id)arg1 accessToken:(id)arg2;
- (void)_routeToExternalEditPageWebView;
- (void)start;
- (id)initWithPageID:(id)arg1 linkedBusinessModel:(id)arg2 userSession:(id)arg3 presentingViewController:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
