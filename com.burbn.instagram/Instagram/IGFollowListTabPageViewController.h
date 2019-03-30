//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGSegmentedTabPageViewControllerDelegate.h"

@class IGNavigationBar, IGSegmentedTabPageViewController, IGTooltipView, IGUserSession, NSString, UIViewController;

@interface IGFollowListTabPageViewController : IGViewController <IGSegmentedTabPageViewControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_contextPK;
    IGNavigationBar *_navigationBar;
    _Bool _useCustomNavBar;
    IGSegmentedTabPageViewController *_pageViewController;
    IGTooltipView *_nuxView;
    UIViewController *_initialDefaultViewController;
    long long _indexOfHashtagTab;
    _Bool _isCurrentUser;
}

- (void).cxx_destruct;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (id)analyticsModule;
- (void)segmentedTabViewController:(id)arg1 didPageFromViewController:(id)arg2 toViewController:(id)arg3 viaTabControlTap:(_Bool)arg4;
- (void)_showHashtagNux:(_Bool)arg1;
- (void)_showHashtagNuxIfNeeded;
- (void)_backButtonTapped:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersNavigationBarDividerHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showModalDismissButtonWithTitle:(id)arg1 side:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithTabTypes:(id)arg1 title:(id)arg2 user:(id)arg3 defaultTabType:(long long)arg4 userSession:(id)arg5 sourceModule:(id)arg6 followingUserCount:(id)arg7 followingHashtagCount:(id)arg8 followerUserCount:(id)arg9 mutualFollowerUserCount:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
