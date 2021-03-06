//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMainAppSurfaceIntent, IGTabBarButton, UIView, UIViewController;

@protocol IGTabBarControllerType <NSObject>
- (void)setTabBarShadowHidden:(_Bool)arg1;
- (void)moveDownTabBarToOffset:(double)arg1;
- (void)prefetchProfile;
- (void)prefetchAndFocusInboxInNewsTab;
- (void)pushDetailContentController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)removeSplitViewController;
- (void)clearDetailNavigationController;
- (void)addSplitViewControllerwithMasterController:(UIViewController *)arg1 detailController:(UIViewController *)arg2;
- (_Bool)splitViewExpanded;
- (UIView *)tabBar;
- (_Bool)isTabBarVisible;
- (void)hideToastsAnimated:(_Bool)arg1;
- (void)popAllNonVisibleNavigationControllersToRoot;
- (void)setNeedsAttention:(_Bool)arg1 forSurface:(IGMainAppSurfaceIntent *)arg2;
- (IGTabBarButton *)buttonForTabBarSurface:(IGMainAppSurfaceIntent *)arg1;
- (IGMainAppSurfaceIntent *)selectedTabBarSurface;
- (void)setSelectedTabBarSurface:(IGMainAppSurfaceIntent *)arg1 animated:(_Bool)arg2;
- (UIViewController *)selectedViewController;
@end

