//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAppNavigationHandler.h"
#import "IGCustomViewController.h"
#import "IGFavoritesAlertControllerDelegate.h"
#import "IGFeedCreationFlowDelegate.h"
#import "IGFeedCreationFlowHandler.h"
#import "IGShareMediaOptionsViewControllerDelegate.h"
#import "IGStorySuperHackyPostCaptureEditingViewControllerDelegate.h"
#import "IGWarmStartListener.h"

@class IGAREffectDownloader, IGFavoritesAlertController, IGMainAppScrollingContainerViewController, IGStoryDismissCard, IGTabBarController, IGUserSession, NSMutableArray, NSString;

@interface IGMainAppViewController : UIViewController <IGFeedCreationFlowDelegate, IGFavoritesAlertControllerDelegate, IGFeedCreationFlowHandler, IGShareMediaOptionsViewControllerDelegate, IGStorySuperHackyPostCaptureEditingViewControllerDelegate, IGWarmStartListener, IGCustomViewController, IGAppNavigationHandler>
{
    IGFavoritesAlertController *_favoritesAlertController;
    _Bool _mainFeedCreationEnabled;
    IGTabBarController *_tabBarController;
    IGUserSession *_userSession;
    NSMutableArray *_activeViewControllers;
    UIViewController *_cameraController;
    id <UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
    IGMainAppScrollingContainerViewController *_scrollingContainer;
    IGStoryDismissCard *_dismissCard;
    long long _dismissCardSource;
    IGAREffectDownloader *_arEffectDownloader;
}

@property(retain, nonatomic) IGAREffectDownloader *arEffectDownloader; // @synthesize arEffectDownloader=_arEffectDownloader;
@property(readonly, nonatomic) long long dismissCardSource; // @synthesize dismissCardSource=_dismissCardSource;
@property(readonly, nonatomic) IGStoryDismissCard *dismissCard; // @synthesize dismissCard=_dismissCard;
@property(retain, nonatomic) IGMainAppScrollingContainerViewController *scrollingContainer; // @synthesize scrollingContainer=_scrollingContainer;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> cameraTransitionDelegate; // @synthesize cameraTransitionDelegate=_cameraTransitionDelegate;
@property(retain, nonatomic) UIViewController *cameraController; // @synthesize cameraController=_cameraController;
@property(readonly) NSMutableArray *activeViewControllers; // @synthesize activeViewControllers=_activeViewControllers;
@property(readonly, nonatomic) _Bool mainFeedCreationEnabled; // @synthesize mainFeedCreationEnabled=_mainFeedCreationEnabled;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (void).cxx_destruct;
- (void)_toggleStoryInjectionDebugBar;
- (void)_toggleSchedulerRecorder;
- (void)_toggleSchedulerDebugger;
- (void)_toggleDebugScrollPerf;
- (void)_toggleDebugBar;
- (void)ig_dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerCreatePostToolTipIfNeeded;
- (void)_presentPendingInboxWithEntryPoint:(id)arg1;
- (void)_presentThreadAnimated:(_Bool)arg1 directThreadItem:(id)arg2 entryPoint:(id)arg3;
- (void)_presentInboxCameraFromEntryPoint:(unsigned long long)arg1;
- (void)_presentInboxAnimated:(_Bool)arg1 scrollToTop:(_Bool)arg2 entryPoint:(id)arg3 selectedFilter:(id)arg4;
- (void)_presentLiveCameraWithEntryPoint:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_presentStoryCameraWithEntryPoint:(unsigned long long)arg1 focusedSwitcherMode:(id)arg2 animated:(_Bool)arg3;
- (void)_presentStoryCameraWithEntryPoint:(unsigned long long)arg1 targetEffectID:(id)arg2 cryptohash:(id)arg3 animated:(_Bool)arg4;
- (void)_presentProfileAnimated:(_Bool)arg1;
- (void)_dismissCameraControllerAnimated:(_Bool)arg1;
- (void)_presentCameraController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentActivityAnimated:(_Bool)arg1;
- (void)_dismissInboxAnimated:(_Bool)arg1;
- (id)_inboxControllerFromViewControllerStack;
- (void)feedCreationFlowDidCancel;
- (void)feedCreationFlowDidFinishWithVideoComposition:(id)arg1;
- (void)feedCreationFlowDidFinishWithSingleMedia:(_Bool)arg1;
- (void)feedCreationFlowDidFinishWithPhoto:(id)arg1 fromOrigin:(long long)arg2;
- (void)superHackyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 directRecipients:(id)arg3 exitPoint:(long long)arg4;
- (void)superHackyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)shareMediaOptionsViewControllerDidDismiss:(id)arg1;
- (_Bool)isUserInFeedCreationFlow;
- (void)presentShareMediaOptionsWithMediaMetadata:(id)arg1;
- (void)presentCameraWithMetadata:(id)arg1 captureFlowViewModel:(id)arg2 mode:(long long)arg3 existingWaterfallEventName:(id)arg4 animated:(_Bool)arg5;
- (void)presentCameraWithMetadata:(id)arg1 captureFlowViewModel:(id)arg2 mode:(long long)arg3;
- (void)dismissPushedProfileViewControllerAnimated:(_Bool)arg1;
- (_Bool)isUserInMaximizedVideoCall;
- (_Bool)isUserViewingThreadWithThreadId:(id)arg1;
- (void)reloadInboxIfVisible;
- (_Bool)isUserViewingInbox;
- (unsigned long long)presentationPermissionForNotificationWithActionSource:(unsigned long long)arg1;
- (void)favoritesAlertControllerDidFinishSetup:(id)arg1;
- (void)favoritesAlertControllerDidCancelSetup:(id)arg1;
- (void)presentStoryDismissCard:(id)arg1 source:(long long)arg2;
- (void)presentStoryCameraPreviewWithEntryPoint:(unsigned long long)arg1 mediaMetadata:(id)arg2;
- (void)presentStoryCameraPreviewWithEntryPoint:(unsigned long long)arg1 creationModel:(id)arg2 inputAsset:(id)arg3;
- (id)creationFlowHandler;
- (long long)currentScrollingViewControllerItem;
- (id)currentViewControllerAnalyticsModule;
- (void)focusProfileSideTrayAnimated:(_Bool)arg1;
- (_Bool)isUserInFeed;
- (void)openURLInNewsTab:(id)arg1;
- (void)focusTabBarControllerAnimated:(_Bool)arg1;
- (_Bool)isDisplayingDirectMessageTooltip;
- (_Bool)isTabBarVisible;
- (id)igTabBarController;
- (void)handleAppSurfaceIntent:(id)arg1 animated:(_Bool)arg2;
- (id)navigationControllerForAppSurfaceIntent:(id)arg1;
- (_Bool)isSafeToExitAppWhenBackgrounded;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)ig_keyViewControllers;
- (void)viewDidLoad;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
- (void)initializeTabBarControllerWithFeedNetworkSource:(id)arg1 startupOrigin:(long long)arg2;
- (id)initWithUserSession:(id)arg1 mainFeedCreationEnabled:(_Bool)arg2 manualRefreshNecessary:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
