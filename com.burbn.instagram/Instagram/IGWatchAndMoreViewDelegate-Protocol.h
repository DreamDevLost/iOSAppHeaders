//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGWatchAndMoreView;

@protocol IGWatchAndMoreViewDelegate <NSObject>
- (void)watchAndMoreViewDidScroll;
- (void)watchAndMoreViewContentViewDidNavigate:(unsigned long long)arg1 navigationAction:(unsigned long long)arg2;
- (void)watchAndMoreViewContentViewWillNavigate:(unsigned long long)arg1 navigationAction:(unsigned long long)arg2;
- (void)watchAndMoreView:(IGWatchAndMoreView *)arg1 setPlayVideo:(_Bool)arg2;
- (void)watchAndMoreViewDidCollapseVideoView;
- (void)watchAndMoreViewDidExpandVideoView;
- (void)watchAndMoreViewDidTapDismissVideoButton;
- (void)watchAndMoreViewDidSwipeDownVideo;
@end

