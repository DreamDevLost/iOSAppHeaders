//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAppStoreViewControllerDelegate.h"
#import "IGBrowserControllerDelegate.h"
#import "IGCanvasViewerViewControllerDelegate.h"
#import "IGFeedItemDirectResponseLoggingProviderDelegate.h"
#import "IGLeadGenViewControllerDelegate.h"
#import "IGStoryFullscreenProfileViewControllerDelegate.h"

@class IGBrowserController, IGCanvasViewerViewController, IGLinkshimService, IGStoryCTAAnimationController, IGStoryCTALogger, IGUserSession, NSMutableDictionary, NSString, UIViewController;

@interface IGStoryCTAController : NSObject <IGAppStoreViewControllerDelegate, IGCanvasViewerViewControllerDelegate, IGFeedItemDirectResponseLoggingProviderDelegate, IGLeadGenViewControllerDelegate, IGStoryFullscreenProfileViewControllerDelegate, IGBrowserControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_sessionID;
    NSString *_entryTraySessionID;
    NSString *_analyticsModule;
    UIViewController *_hostViewController;
    IGStoryCTALogger *_logger;
    IGStoryCTAAnimationController *_ctaAnimationController;
    IGCanvasViewerViewController *_canvasViewerViewController;
    NSMutableDictionary *_lastURLs;
    IGBrowserController *_browserController;
    _Bool _supportSponsoredTracking;
    _Bool _isAppStorePreloadingEnabled;
    _Bool _shouldAppStoreModallyPresent;
    _Bool _shouldUseMAIUnificationKit;
    IGLinkshimService *_linkshimService;
    id <IGStoryCTAControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryCTAControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentViewForViewController:(id)arg1 presentingPanGesture:(id)arg2;
- (void)browserControllerDidDismissWithUrl:(id)arg1 uid:(id)arg2;
- (void)fullscreenProfileViewControllerDidDismiss;
- (_Bool)leadGenViewControllerShouldPullDownToDismiss:(id)arg1;
- (void)leadGenViewControllerDidDismiss:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
- (void)appStoreViewControllerDidFinish:(id)arg1;
- (void)canvasViewerViewControllerDidDismiss;
- (_Bool)_handleDeepLink:(id)arg1;
- (_Bool)_handleAppStoreLink:(id)arg1 presentingPanGesture:(id)arg2 storyItem:(id)arg3;
- (_Bool)_handleProfileVisitLink:(id)arg1 presentingPanGesture:(id)arg2 storyItem:(id)arg3 ctaContext:(unsigned long long)arg4;
- (void)_launchInstantExperienceBrowserWithUrl:(id)arg1 profileUser:(id)arg2;
- (_Bool)_handleWebLink:(id)arg1 presentingPanGesture:(id)arg2 storyItem:(id)arg3 extraFields:(id)arg4;
- (_Bool)_handleLeadAdForStoryItem:(id)arg1 presentingPanGesture:(id)arg2 ctaContext:(unsigned long long)arg3 link:(id)arg4 extraFields:(id)arg5;
- (_Bool)_handleAREffectLink:(id)arg1 presentingPanGesture:(id)arg2;
- (_Bool)_handleFelixLink:(id)arg1 presentingPanGesture:(id)arg2;
- (_Bool)_handleCanvasLink:(id)arg1 presentingPanGesture:(id)arg2 storyItem:(id)arg3;
- (void)showAlertViewForAppNavigationForLink:(id)arg1 completion:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)handleMessageFieldClickFromStoryItem:(id)arg1 ctaContext:(unsigned long long)arg2 extraFields:(id)arg3;
- (_Bool)_handleClickToDirectFromStoryItem:(id)arg1;
- (void)handleLinksForStoryItem:(id)arg1 presentingPanGesture:(id)arg2 ctaContext:(unsigned long long)arg3 swipeUpPoint:(id)arg4 extraFields:(id)arg5;
- (id)initWithUserSession:(id)arg1 sessionID:(id)arg2 entryTraySessionID:(id)arg3 analyticsModule:(id)arg4 viewController:(id)arg5 logger:(id)arg6 supportSponsoredTracking:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

