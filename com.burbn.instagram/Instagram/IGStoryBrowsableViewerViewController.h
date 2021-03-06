//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGPartialModalSheetListener.h"
#import "IGPresentableStoryViewer.h"
#import "IGStoriesBrowsingDelegate.h"
#import "IGStoriesBrowsingGridSheetViewControllerDelegate.h"
#import "IGStoryTraySectionControllerTrayInViewerDelegate.h"
#import "IGStoryViewerDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGPartialModalSheetViewController, IGStoriesViewerContainerSpinAnimationController, IGStoriesViewerTrayController, IGStoryDataController, IGStoryTrayLoggingContext, IGStoryTrayViewModel, IGStoryViewerConfiguration, IGStoryViewerLoggingContext, IGStoryViewerViewController, IGStoryViewerViewModel, IGUserSession, NSArray, NSString, UICollectionView, UIView;

@interface IGStoryBrowsableViewerViewController : IGViewController <UIGestureRecognizerDelegate, IGStoryViewerDelegate, IGStoriesBrowsingDelegate, IGStoryTraySectionControllerTrayInViewerDelegate, IGPartialModalSheetListener, UIScrollViewDelegate, IGStoriesBrowsingGridSheetViewControllerDelegate, UICollectionViewDelegate, IGPresentableStoryViewer>
{
    id <IGStoryViewerDelegate> _delegate;
    IGUserSession *_userSession;
    NSArray *_trayViewModels;
    IGStoryDataController *_dataController;
    IGStoryTrayLoggingContext *_trayLoggingContext;
    long long _entryPoint;
    IGStoryViewerConfiguration *_configuration;
    IGStoryTrayViewModel *_startingTrayViewModel;
    IGStoryViewerViewModel *_startingViewerViewModel;
    IGStoryViewerLoggingContext *_startingViewerLoggingContext;
    unsigned long long _storiesBrowserType;
    IGStoryViewerLoggingContext *_currentViewerLoggingContext;
    NSArray *_currentlyDisplayedViewerViewModels;
    id <IGStoryFullscreenControllerType> _currentFullscreenSectionController;
    NSString *_focusedReelPK;
    _Bool _isDismissing;
    IGStoriesViewerTrayController *_storiesBrowserController;
    UICollectionView *_trayCollectionView;
    UIView *_trayOverlayView;
    IGStoriesViewerContainerSpinAnimationController *_spinAnimationController;
    UIView *_spinContainerView;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    UIView *_viewerContainerView;
    IGStoryViewerViewController *_viewerViewController;
}

@property(readonly, nonatomic) IGStoryViewerViewController *viewerViewController; // @synthesize viewerViewController=_viewerViewController;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)storiesBrowsingGridSheetViewControllerIsFullyExpanded:(id)arg1;
- (void)partialModalSheetDidChangeState:(unsigned long long)arg1;
- (void)partialModalSheetDidUpdateOffset:(double)arg1 presentationProgress:(double)arg2;
- (void)partialModalSheetDidDismiss;
- (void)trayInViewer:(id)arg1 didSelectTrayViewModel:(id)arg2 viewerLoggingContext:(id)arg3;
- (id)currentMediaID;
- (id)currentViewerSessionID;
- (void)_handleSwipeDownGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)browsableViewer:(id)arg1 didDisplayFullscreenSectionController:(id)arg2;
- (_Bool)browsableViewerIsGridPresented:(id)arg1;
- (_Bool)browsableViewerIsTrayVisible:(id)arg1;
- (_Bool)browsableViewerCanResumePlayback:(id)arg1;
- (void)browsableViewerDidWantToStartBrowsing:(id)arg1 onFullscreenSectionController:(id)arg2 currentViewerViewModels:(id)arg3;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *viewModelIdentifier;
@property(readonly, nonatomic) UIView *backgroundViewForAnimation;
@property(readonly, nonatomic) UIView *contentViewForSnapshot;
@property(readonly, nonatomic) UIView *contentViewForAnimation;
@property(readonly, nonatomic) UIView *profileImageViewForAnimation;
- (_Bool)prefersTabBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)_dismissStoriesBrowser;
- (void)_displayStoriesBrowserOnViewer:(id)arg1 fullscreenSectionController:(id)arg2;
- (void)_displayViewerWithTrayViewModel:(id)arg1 viewerLoggingContext:(id)arg2;
- (_Bool)_isOverlayActive;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 viewerViewModels:(id)arg2 trayViewModels:(id)arg3 dataController:(id)arg4 trayLoggingContext:(id)arg5 entryPoint:(long long)arg6 delegate:(id)arg7 configuration:(id)arg8 selectedTrayViewModel:(id)arg9 viewerLoggingContext:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

