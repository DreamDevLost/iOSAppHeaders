//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItemVideoView, NSError;

@protocol IGFeedItemVideoViewDelegate <NSObject>
- (void)feedItemVideoView:(IGFeedItemVideoView *)arg1 didFailLoadImageWithError:(NSError *)arg2;
- (void)feedItemVideoViewDidLoadImage:(IGFeedItemVideoView *)arg1;
@end
