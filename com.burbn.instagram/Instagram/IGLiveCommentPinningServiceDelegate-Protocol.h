//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveCommentModel, IGLiveCommentPinningService;

@protocol IGLiveCommentPinningServiceDelegate <NSObject>
- (void)commentPinningService:(IGLiveCommentPinningService *)arg1 didFailToUnpinComment:(IGLiveCommentModel *)arg2;
- (void)commentPinningService:(IGLiveCommentPinningService *)arg1 didFailToPinComment:(IGLiveCommentModel *)arg2;
@end

