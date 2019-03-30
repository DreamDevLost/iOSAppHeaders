//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "FBPassLoaderDelegate.h"
#import "FBWebViewDelegate.h"
#import "IGGestureHandler.h"
#import "IGInfoViewDelegate.h"
#import "IGUnifiedWebViewScrollViewToolbarCoordinatorDelegate.h"
#import "IGUnifiedWebViewToolbarDelegate.h"
#import "IGWebViewControllerBrowsing.h"
#import "IGWebViewModalDismissableType.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class FBPassLoader, IGInfoView, IGLinkshimService, IGMessengerDotMeURLHandler, IGUnifiedWebViewScrollViewToolbarCoordinator, IGUnifiedWebViewToolbar, IGViewControllerTitleDetailTitleView, IGWebViewControllerAppearanceHandler, IGZeroRatingHandler, NSMutableSet, NSString, NSURLRequest, UIBarButtonItem, UIProgressView, UIView<FBWebView>;

@interface IGUnifiedWebViewController : IGViewController <FBPassLoaderDelegate, FBWebViewDelegate, IGInfoViewDelegate, IGUnifiedWebViewScrollViewToolbarCoordinatorDelegate, IGUnifiedWebViewToolbarDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, IGWebViewControllerBrowsing, IGWebViewModalDismissableType, IGGestureHandler>
{
    IGMessengerDotMeURLHandler *_messengerDotMeURLHandler;
    NSString *_userPK;
    struct CGRect _navigationBarFrame;
    _Bool _isAlertDialogShown;
    _Bool _allowModalDismiss;
    _Bool _dismissButtonHidden;
    _Bool _shareButtonVisible;
    _Bool _holdTitleViewToChangeWebsite;
    _Bool _manualLoggingEnabled;
    _Bool _skipReloadingOnViewAppear;
    _Bool _navigationToolBarEnabled;
    _Bool _hasFirstPageDOMLoaded;
    _Bool _hasUserFirstScrolled;
    id <IGWebViewControllerBrowsingDelegate> _browsingDelegate;
    UIBarButtonItem *_dismissButton;
    UIView<FBWebView> *_webView;
    IGWebViewControllerAppearanceHandler *_appearanceHandler;
    id <IGUnifiedWebViewControllerWebViewDelegate> _webViewDelegate;
    id <IGUnifiedWebViewControllerShareDelegate> _shareDelegate;
    id <IGUnifiedWebViewControllerWebViewLoggingDelegate> _webViewLoggingDelegate;
    id <IGUnifiedWebViewControllerSharingLoggingDelegate> _sharingLoggingDelegate;
    double _scrollViewDecelerationRate;
    unsigned long long _titleViewType;
    unsigned long long _titleTextType;
    NSURLRequest *_urlRequest;
    IGLinkshimService *_linkshimService;
    IGViewControllerTitleDetailTitleView *_titleView;
    UIProgressView *_progressView;
    IGUnifiedWebViewToolbar *_navigationToolBar;
    IGUnifiedWebViewScrollViewToolbarCoordinator *_scrollViewToolbarCoordinator;
    UIBarButtonItem *_shareBarButtonItem;
    IGInfoView *_infoView;
    FBPassLoader *_passLoader;
    IGZeroRatingHandler *_zeroRatingHandler;
    NSMutableSet *_schemesWithFailedExternalDeeplink;
    NSString *_schemeWithPendingExternalDeeplink;
}

+ (void)updateURLAlertActionForViewController:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *schemeWithPendingExternalDeeplink; // @synthesize schemeWithPendingExternalDeeplink=_schemeWithPendingExternalDeeplink;
@property(readonly, nonatomic) NSMutableSet *schemesWithFailedExternalDeeplink; // @synthesize schemesWithFailedExternalDeeplink=_schemesWithFailedExternalDeeplink;
@property(retain, nonatomic) IGZeroRatingHandler *zeroRatingHandler; // @synthesize zeroRatingHandler=_zeroRatingHandler;
@property(nonatomic) _Bool hasUserFirstScrolled; // @synthesize hasUserFirstScrolled=_hasUserFirstScrolled;
@property(nonatomic) _Bool hasFirstPageDOMLoaded; // @synthesize hasFirstPageDOMLoaded=_hasFirstPageDOMLoaded;
@property(retain, nonatomic) FBPassLoader *passLoader; // @synthesize passLoader=_passLoader;
@property(retain, nonatomic) IGInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIBarButtonItem *shareBarButtonItem; // @synthesize shareBarButtonItem=_shareBarButtonItem;
@property(retain, nonatomic) IGUnifiedWebViewScrollViewToolbarCoordinator *scrollViewToolbarCoordinator; // @synthesize scrollViewToolbarCoordinator=_scrollViewToolbarCoordinator;
@property(retain, nonatomic) IGUnifiedWebViewToolbar *navigationToolBar; // @synthesize navigationToolBar=_navigationToolBar;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) IGViewControllerTitleDetailTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) IGLinkshimService *linkshimService; // @synthesize linkshimService=_linkshimService;
@property(readonly, copy, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) _Bool navigationToolBarEnabled; // @synthesize navigationToolBarEnabled=_navigationToolBarEnabled;
@property(readonly, nonatomic) unsigned long long titleTextType; // @synthesize titleTextType=_titleTextType;
@property(readonly, nonatomic) unsigned long long titleViewType; // @synthesize titleViewType=_titleViewType;
@property(nonatomic) double scrollViewDecelerationRate; // @synthesize scrollViewDecelerationRate=_scrollViewDecelerationRate;
@property(nonatomic) _Bool skipReloadingOnViewAppear; // @synthesize skipReloadingOnViewAppear=_skipReloadingOnViewAppear;
@property(nonatomic) _Bool manualLoggingEnabled; // @synthesize manualLoggingEnabled=_manualLoggingEnabled;
@property(nonatomic) _Bool holdTitleViewToChangeWebsite; // @synthesize holdTitleViewToChangeWebsite=_holdTitleViewToChangeWebsite;
@property(nonatomic) __weak id <IGUnifiedWebViewControllerSharingLoggingDelegate> sharingLoggingDelegate; // @synthesize sharingLoggingDelegate=_sharingLoggingDelegate;
@property(nonatomic) __weak id <IGUnifiedWebViewControllerWebViewLoggingDelegate> webViewLoggingDelegate; // @synthesize webViewLoggingDelegate=_webViewLoggingDelegate;
@property(nonatomic) __weak id <IGUnifiedWebViewControllerShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(nonatomic) __weak id <IGUnifiedWebViewControllerWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(retain, nonatomic) IGWebViewControllerAppearanceHandler *appearanceHandler; // @synthesize appearanceHandler=_appearanceHandler;
@property(retain, nonatomic) UIView<FBWebView> *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool shareButtonVisible; // @synthesize shareButtonVisible=_shareButtonVisible;
@property(nonatomic) _Bool dismissButtonHidden; // @synthesize dismissButtonHidden=_dismissButtonHidden;
@property(retain, nonatomic) UIBarButtonItem *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) _Bool allowModalDismiss; // @synthesize allowModalDismiss=_allowModalDismiss;
@property(nonatomic) __weak id <IGWebViewControllerBrowsingDelegate> browsingDelegate; // @synthesize browsingDelegate=_browsingDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_titleViewTap:(id)arg1;
- (void)_titleViewLongPress:(id)arg1;
- (void)_createShareButtonWithEnabled:(_Bool)arg1;
- (void)_setNavigationBarTitle:(id)arg1 forURL:(id)arg2;
- (void)webToolbarCoordinatorDidUpateToolbarPresentationState:(_Bool)arg1;
- (void)_confirmExternalNavigationRequest:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)webViewToolbarForwardButtonTapped:(id)arg1;
- (void)webViewToolbarBackButtonTapped:(id)arg1;
- (void)webView:(id)arg1 loadingStateChanged:(_Bool)arg2;
- (void)webView:(id)arg1 progressChanged:(double)arg2;
- (void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
- (void)webView:(id)arg1 didStartNavigationRequest:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5;
- (void)infoViewWasTapped:(id)arg1;
- (void)passLoader:(id)arg1 didFinishLoadingPass:(id)arg2 error:(id)arg3;
- (void)passLoader:(id)arg1 didReceiveUnsupportedMIMEType:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)setTitle:(id)arg1;
- (void)_shareBarButtonTapped:(id)arg1;
- (void)_presentLoadingErrorMessage:(id)arg1;
- (void)_presentNetworkErrorInfoView;
- (void)_presentToolbar;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)onCancelModal;
- (void)logWebViewBeginEvent;
- (void)logWebViewEndEvent;
- (void)_appWillResignActive:(id)arg1;
- (void)_videoDidExitFullscreen:(id)arg1;
- (_Bool)wantsLayoutOnKeyboardChanges;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURLToShim:(id)arg1 linkshimService:(id)arg2 titleViewType:(unsigned long long)arg3 titleTextType:(unsigned long long)arg4 userSession:(id)arg5 shareButtonVisible:(_Bool)arg6 navigationToolBarEnabled:(_Bool)arg7;
- (id)initWithURLRequest:(id)arg1 titleViewType:(unsigned long long)arg2 titleTextType:(unsigned long long)arg3 userSession:(id)arg4 shareButtonVisible:(_Bool)arg5 navigationToolBarEnabled:(_Bool)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
