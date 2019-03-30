//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchBarDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGSearchBar, IGSearchBarWithCancel, NSNumber, NSString;

@interface IGFullscreenSearchTransitionController : NSObject <IGSearchBarDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresenting;
    IGSearchBar *_presentingSearchBar;
    IGSearchBarWithCancel *_presentedSearchInput;
    NSNumber *_keyboardAnimationDuration;
    NSNumber *_keybaordAnimationCurve;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_dismissAnimation:(id)arg1;
- (void)_presentAnimation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)configureWithPresentingSearchBar:(id)arg1 presentedSearchInput:(id)arg2;
- (void)_handleKeyboardNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
