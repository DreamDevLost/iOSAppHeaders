//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class UIView;

@interface IGStoryGalleryZoomTransitionPresentationController : UIPresentationController
{
    UIView *_presentingViewControllerContainerView;
    struct CGRect _presentingViewControllerContainerViewFrame;
    unsigned long long _presentingViewControllerContainerViewSubviewIndex;
}

- (void).cxx_destruct;
- (void)_presentationDidFinish;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;

@end

