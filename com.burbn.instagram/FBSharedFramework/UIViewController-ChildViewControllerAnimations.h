//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (ChildViewControllerAnimations)
@property(readonly, nonatomic) _Bool ig_isBeingRemovedFromParentViewController;
@property(readonly, nonatomic) _Bool ig_isBeingAddedToParentViewController;
- (void)ig_cancelInProgressTransitionToParentViewController;
- (void)ig_removeFromParentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ig_addChildViewController:(id)arg1 toContainerView:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)ig_addChildViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@end

