//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class IGWatchAndMoreViewController, NSString, UIView;

@interface IGWatchAndMorePresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    IGWatchAndMoreViewController *_watchAndMoreVC;
    UIView *_videoView;
    struct CGRect _sourceRect;
    _Bool _hasAnimatingStarted;
    _Bool _isPresenting;
    id <IGWatchAndMorePresentationAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <IGWatchAndMorePresentationAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateWithAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (double)transitionDuration:(id)arg1;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePresentTransition:(id)arg1;
- (void)configureWithWatchAndMoreViewController:(id)arg1 isPresenting:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (id)initWithVideoView:(id)arg1 sourceRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

