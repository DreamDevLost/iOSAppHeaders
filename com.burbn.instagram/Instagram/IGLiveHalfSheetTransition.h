//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"

@class IGLiveSheetTransitionStyle, NSMutableDictionary, NSString;

@interface IGLiveHalfSheetTransition : NSObject <UIViewControllerTransitioningDelegate>
{
    _Bool _hasDimmedBackground;
    IGLiveSheetTransitionStyle *_presentTransitionStyle;
    IGLiveSheetTransitionStyle *_dismissTransitionStyle;
    NSMutableDictionary *_styleToAnimatorDict;
}

- (void).cxx_destruct;
- (id)_animatorForTransitionStyle:(id)arg1 presentedController:(id)arg2 presentingController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithPresentTransitionStyle:(id)arg1 dismissTransitionStyle:(id)arg2 hasDimmedBackground:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

