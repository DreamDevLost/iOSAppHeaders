//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveBroadcastMainViewController, NSString, UITapGestureRecognizer;

@protocol IGLiveBroadcastMainViewControllerDelegate <NSObject>
- (void)liveMainViewController:(IGLiveBroadcastMainViewController *)arg1 didTapWithGestureRecognizer:(UITapGestureRecognizer *)arg2;
- (void)liveMainViewController:(IGLiveBroadcastMainViewController *)arg1 didFailWithMessage:(NSString *)arg2;
- (void)liveMainViewControllerDidFinishSession:(IGLiveBroadcastMainViewController *)arg1 afterSuccessfulBroadcasting:(_Bool)arg2 shouldAnimatePostToFeed:(_Bool)arg3;
- (void)liveMainViewControllerDidSwitchToActiveState:(IGLiveBroadcastMainViewController *)arg1;
@end

