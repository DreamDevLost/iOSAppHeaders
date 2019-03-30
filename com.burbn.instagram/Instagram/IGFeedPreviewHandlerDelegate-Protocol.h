//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFeedPreviewHandler, IGHashtagModel, NSArray, NSDictionary, NSIndexPath;

@protocol IGFeedPreviewHandlerDelegate <NSObject>
- (NSArray *)previewHandler:(IGFeedPreviewHandler *)arg1 previewActionsForFeedItem:(IGFeedItem *)arg2 defaultActionProvider:(NSArray * (^)(void))arg3;
- (IGHashtagModel *)hashtagModelForPreviewHandler:(IGFeedPreviewHandler *)arg1;
- (NSDictionary *)previewHandler:(IGFeedPreviewHandler *)arg1 loggingExtrasForFeedItem:(IGFeedItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

