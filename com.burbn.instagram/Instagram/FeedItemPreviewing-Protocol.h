//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemPreviewingControllerProtocol.h"

@class IGFeedItem, IGFeedItemPreviewingHandler, NSArray, UIImage, UIView;

@protocol FeedItemPreviewing <IGFeedItemPreviewingControllerProtocol>
- (NSArray *)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 actionsForPoint:(struct CGPoint)arg2;
- (UIImage *)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 imageForItemAtPoint:(struct CGPoint)arg2;
- (struct CGRect)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 rectForItemAtPoint:(struct CGPoint)arg2;
- (IGFeedItem *)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 feedItemInPoint:(struct CGPoint)arg2;
- (UIView *)feedItemPreviewingHandlerInView:(IGFeedItemPreviewingHandler *)arg1;
@end
