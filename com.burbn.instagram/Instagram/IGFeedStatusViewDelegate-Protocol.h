//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedStatusView;

@protocol IGFeedStatusViewDelegate <NSObject>
- (void)feedStatusEmptyStateButtonWasTapped:(IGFeedStatusView *)arg1;
- (void)feedStatusViewDidTap:(IGFeedStatusView *)arg1;

@optional
- (double)visibleContentHeight;
- (void)feedStatusView:(IGFeedStatusView *)arg1 didChangeComputedHeight:(double)arg2;
@end
