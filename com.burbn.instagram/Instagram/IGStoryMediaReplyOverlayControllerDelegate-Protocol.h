//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryMediaReplyOverlayController, UIView;

@protocol IGStoryMediaReplyOverlayControllerDelegate <NSObject>
- (UIView *)storyMediaReplyOverlayControllerNuxHostingView;
- (void)storyMediaReplyOverlayController:(IGStoryMediaReplyOverlayController *)arg1 didUpdateToOverlayStyle:(long long)arg2;
- (void)storyMediaReplyOverlayController:(IGStoryMediaReplyOverlayController *)arg1 willUpdateToOverlayStyle:(long long)arg2 animationDuration:(double)arg3;
@end
