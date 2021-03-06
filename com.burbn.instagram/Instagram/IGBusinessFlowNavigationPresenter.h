//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IG4BFlowNavDelegateWrapper, IGNavigationController;

@interface IGBusinessFlowNavigationPresenter : NSObject
{
    _Bool _isModal;
    id <IGBusinessFlowPresenterDelegate> _presenterDelegate;
    id <UIViewControllerTransitioningDelegate> _transitionAnimator;
    IG4BFlowNavDelegateWrapper *_ig4bNavDelegateWrapper;
    IGNavigationController *_navigationController;
}

@property(readonly, nonatomic) IGNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(readonly, nonatomic) IG4BFlowNavDelegateWrapper *ig4bNavDelegateWrapper; // @synthesize ig4bNavDelegateWrapper=_ig4bNavDelegateWrapper;
@property(nonatomic) __weak id <UIViewControllerTransitioningDelegate> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(nonatomic) __weak id <IGBusinessFlowPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
- (void).cxx_destruct;
- (void)_pushStep:(id)arg1 dropPreviousCount:(unsigned long long)arg2;
- (void)returnToStep:(id)arg1;
- (void)restart;
- (void)flowDidEnd;
- (void)didDismissFromMegaphone;
- (id)viewControllerBeforeViewController:(id)arg1;
- (void)revertStepAnimated:(_Bool)arg1;
- (void)presentNextStep:(id)arg1 dropPreviousCount:(unsigned long long)arg2;
- (void)presentNextStep:(id)arg1;
- (id)initWithNavigationController:(id)arg1;

@end

