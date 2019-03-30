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

@class IGPageViewController, IGSegmentedTabControl, NSArray, NSString, UIView, UIViewController;

@interface IGSegmentedTabPageViewController : IGViewController <IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGCustomViewController, IGGestureHandler>
{
    IGPageViewController *_pageViewController;
    long long _tabControlOptions;
    IGSegmentedTabControl *_tabControl;
    NSString *_analyticsModule;
    _Bool _didNavigateViaTap;
    _Bool _shouldDisableNavigationEvent;
    _Bool _swipingDisabled;
    id <IGSegmentedTabPageViewControllerDelegate> _delegate;
    NSArray *_contentViewControllers;
    double _tabControlTopInset;
}

@property(nonatomic) double tabControlTopInset; // @synthesize tabControlTopInset=_tabControlTopInset;
@property(nonatomic) _Bool swipingDisabled; // @synthesize swipingDisabled=_swipingDisabled;
@property(readonly, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) __weak id <IGSegmentedTabPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewController:(id)arg2 toController:(id)arg3 atIndex:(long long)arg4;
- (void)pageViewControllerWillBeginDragging:(id)arg1;
- (void)pageViewController:(id)arg1 willShowViewController:(id)arg2;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (void)_tabControlValueChanged:(id)arg1;
- (id)_viewControllerAtIndex:(long long)arg1;
- (void)_reloadTabs;
- (_Bool)disableNavigationEvent;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (struct CGRect)frameForTabControlSegment:(long long)arg1;
- (void)setCurrentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) UIView *tabControl;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (struct UIEdgeInsets)_preferredContentInsetsWithoutTabControl;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)ig_keyViewControllers;
- (id)initWithContentViewControllers:(id)arg1 tabControlConfig:(id)arg2 shouldDisableNavigationEvents:(_Bool)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
