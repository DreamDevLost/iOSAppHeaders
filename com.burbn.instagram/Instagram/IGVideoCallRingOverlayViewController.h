//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGVideoCallRingOverlayViewDelegate.h"

@class FBTimer, IGUserSession, IGVideoCallRingOverlayView, NSArray, NSString;

@interface IGVideoCallRingOverlayViewController : UIViewController <IGVideoCallRingOverlayViewDelegate>
{
    IGUserSession *_userSession;
    IGVideoCallRingOverlayView *_ringView;
    NSArray *_threadUsers;
    NSString *_threadName;
    FBTimer *_timeoutDisplayTimer;
    long long _ringMode;
    id <IGVideoCallRingOverlayViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGVideoCallRingOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timeoutCallRinger;
- (void)_initializeTimeoutTimer;
- (long long)_messageTypeForRingMode:(long long)arg1;
- (void)ringOverlayViewDidTapCallAgainButton:(id)arg1;
- (void)ringOverlayViewDidTapCancelButton:(id)arg1;
- (void)restartTimeoutTimer;
- (void)transitionToRingMode:(long long)arg1;
@property(readonly, nonatomic) long long ringMode;
- (void)removeFromParentViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 threadName:(id)arg2 threadUsers:(id)arg3 ringMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
