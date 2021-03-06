//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnalyticsNavigationState, IGCommentModel, IGCommentWellbeingConfiguration, NSDictionary, NSString;

@protocol IGCommentsManagerProtocol <NSObject>
@property(nonatomic) __weak id <IGCommentsManagerDelegate> delegate;
- (void)postAllPendingComments;
- (_Bool)haltPostingComment:(IGCommentModel *)arg1;
- (void)retryPostComment:(IGCommentModel *)arg1;
- (void)postCommentText:(NSString *)arg1 replyToComment:(IGCommentModel *)arg2 loggingExtraParams:(NSDictionary *)arg3 navigationState:(IGAnalyticsNavigationState *)arg4 commentWellbeingConfig:(IGCommentWellbeingConfiguration *)arg5;
- (void)loadMoreBelowWhenAvailable;
- (void)loadMoreAboveWhenAvailable;
- (void)loadFirstPage:(void (^)(IGFeedItem *, IGCommentThread *, _Bool))arg1 reloadFeedItem:(_Bool)arg2;
@end

