//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAREffectMoreInfoSheetViewControllerDelegate.h"
#import "IGPartialModalSheetListener.h"

@class IGAREffectMoreInfoSheetViewController, IGActionableConfirmationToastController, IGNavigationController, IGPartialModalSheetViewController, IGUserSession, NSString, UIViewController;

@interface IGARPlatformMoreInfoController : NSObject <IGPartialModalSheetListener, IGAREffectMoreInfoSheetViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGAREffectMoreInfoSheetViewController *_moreInfoSheetViewController;
    IGNavigationController *_navigationController;
    IGActionableConfirmationToastController *_toastController;
    id <IGARPlatformDataProvider> _platformDataProvider;
    UIViewController *_presentingViewController;
    id <IGARPlatformMoreInfoControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGARPlatformMoreInfoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)_hideActionableConfirmationToast;
- (void)arEffectMoreInfoSheetViewController:(id)arg1 didReportAREffectWithID:(id)arg2;
- (void)arEffectMoreInfoSheetViewController:(id)arg1 requestsPresentLicensingViewController:(id)arg2;
- (void)_presentViewControllerWithNavigationController:(id)arg1;
- (void)moreInfoSheetViewController:(id)arg1 didTapProfileForUserID:(id)arg2;
- (void)arEffectMoreInfoSheetViewController:(id)arg1 requestsPresentIPViolationViewController:(id)arg2;
- (id)arEffectMoreInfoSheetViewControllerAttributionModelForCurrentAREffect:(id)arg1;
- (void)arEffectMoreInfoSheetViewController:(id)arg1 didRequestRemoveEffectWithID:(id)arg2;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)partialModalSheetDidDismiss;
- (void)presentMoreInfoSheetForAREffectModel:(id)arg1;
- (_Bool)isValidAREffectModelForMoreInfoSheet:(id)arg1;
- (id)initWithUserSession:(id)arg1 platformDataProvider:(id)arg2 presentingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

