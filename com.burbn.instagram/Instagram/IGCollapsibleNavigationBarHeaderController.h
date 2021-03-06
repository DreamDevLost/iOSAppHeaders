//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBadgingTooltipControllerTransitionDelegate.h"
#import "IGFeedScrollViewListener.h"

@class IGBadgingTooltipController, IGCollapsibleNavigationBarHeaderControllerConfig, IGNavigationBar, NSString, UIView, UIViewController<IGScrollableViewControllerProtocol>;

@interface IGCollapsibleNavigationBarHeaderController : NSObject <IGFeedScrollViewListener, IGBadgingTooltipControllerTransitionDelegate>
{
    UIView *_hostingView;
    IGNavigationBar *_navigationBar;
    id <IGCollapsibleHeaderViewControllerProtocol> _collapsibleHeaderViewController;
    IGCollapsibleNavigationBarHeaderControllerConfig *_config;
    CDStruct_8eea7b7b _scrollState;
    struct {
        double expandedHeaderHeight;
        double collapsedHeaderHeight;
    } _sizeCache;
    double _headerViewUpdateTimestamp;
    double _headerViewPercentageCollapsed;
    _Bool _hideStatusBar;
    double _navigationBarPercentageCollapsed;
    id <IGCollapsibleNavigationBarHeaderControllerDelegate> _delegate;
    UIViewController<IGScrollableViewControllerProtocol> *_connectedViewController;
    IGBadgingTooltipController *_badgingTooltipController;
    long long _collapsionMode;
    id <IGCollapsibleNavigationBarHeaderControllerStatusBarDelegate> _statusBarVisibilityDelegate;
}

@property(nonatomic) __weak id <IGCollapsibleNavigationBarHeaderControllerStatusBarDelegate> statusBarVisibilityDelegate; // @synthesize statusBarVisibilityDelegate=_statusBarVisibilityDelegate;
@property(nonatomic) long long collapsionMode; // @synthesize collapsionMode=_collapsionMode;
@property(nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(nonatomic) __weak IGBadgingTooltipController *badgingTooltipController; // @synthesize badgingTooltipController=_badgingTooltipController;
@property(nonatomic) __weak UIViewController<IGScrollableViewControllerProtocol> *connectedViewController; // @synthesize connectedViewController=_connectedViewController;
@property(nonatomic) __weak id <IGCollapsibleNavigationBarHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double navigationBarPercentageCollapsed; // @synthesize navigationBarPercentageCollapsed=_navigationBarPercentageCollapsed;
- (void).cxx_destruct;
- (void)badgingTooltipController:(id)arg1 didUpdatePresentationProgress:(double)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)_scrollOffsetForBadgingTooltip;
- (double)_minContentOffsetForHeaderViewToExpandWithNavigationBarPercentCollapsed:(double)arg1;
- (_Bool)_shouldAdjustPercentCollapsedWithScrollState:(CDStruct_8eea7b7b)arg1 scrollView:(id)arg2;
- (void)_updateBottomSeparatorVisibility;
- (double)_heightForHeaderAtPercentCollapsed:(double)arg1;
- (double)_headerTravelDistance;
- (double)_statusBarTravelDistance;
- (double)_totalTravelDistance;
- (void)_updateNavigationBarPercentCollapsed:(double)arg1 headerViewPercentCollapsed:(double)arg2;
- (void)layoutHeaderViews;
@property(readonly, nonatomic) _Bool isNavigationBarFullyCollapsed;
@property(readonly, nonatomic) double collapsedHeaderHeight;
@property(readonly, nonatomic) double expandedHeaderHeight;
@property(readonly, nonatomic) double headerHeightAdjustment;
@property(readonly, nonatomic) _Bool isHeaderFullyShowing;
@property(nonatomic) _Bool headerCollapsed;
- (id)initWithHostingView:(id)arg1 navigationBar:(id)arg2 config:(id)arg3 collapsibleHeaderViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

