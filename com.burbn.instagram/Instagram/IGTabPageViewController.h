//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCustomViewController.h"
#import "IGGestureHandler.h"
#import "IGPageViewControllerDataSource.h"
#import "IGPageViewControllerDelegate.h"
#import "IGTabControlDelegate.h"

@class IGPageViewController, IGTabControl, NSArray, NSString, UIView, UIViewController;

@interface IGTabPageViewController : IGViewController <IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGTabControlDelegate, IGCustomViewController, IGGestureHandler>
{
    _Bool _displaysTabsInNavigationBar;
    _Bool _disableScrollAnimationOnTabSwitch;
    _Bool _swipingDisabled;
    NSArray *_contentViewControllers;
    id <IGTabPageViewControllerDelegate> _delegate;
    IGTabControl *_tabControl;
    IGPageViewController *_pageViewController;
}

@property(retain, nonatomic) IGPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) IGTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(nonatomic) _Bool swipingDisabled; // @synthesize swipingDisabled=_swipingDisabled;
@property(nonatomic) _Bool disableScrollAnimationOnTabSwitch; // @synthesize disableScrollAnimationOnTabSwitch=_disableScrollAnimationOnTabSwitch;
@property(nonatomic) _Bool displaysTabsInNavigationBar; // @synthesize displaysTabsInNavigationBar=_displaysTabsInNavigationBar;
@property(nonatomic) __weak id <IGTabPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewControllerDidFinishScrolling:(id)arg1;
- (void)pageViewController:(id)arg1 willShowViewController:(id)arg2;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (void)_switchToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_viewControllerAtIndex:(long long)arg1;
- (long long)_pageCount;
- (void)_reloadTabs;
@property(readonly, nonatomic) _Bool hidesTabControl;
- (void)_configure;
- (void)reloadTabPages;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)setCurrentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftSwipeDisabled:(_Bool)arg1;
@property(readonly, nonatomic) UIView *pagingContentView;
@property(retain, nonatomic) UIViewController *currentViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (struct UIEdgeInsets)_preferredContentInsetsWithoutTabControl;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)ig_keyViewControllers;
- (id)initWithContentViewControllers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

