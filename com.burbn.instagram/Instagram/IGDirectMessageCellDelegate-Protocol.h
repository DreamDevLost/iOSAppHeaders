//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectMessageCell;

@protocol IGDirectMessageCellDelegate <NSObject>
- (void)messageCellDidLongPress:(IGDirectMessageCell *)arg1;
- (void)messageCellDidTapReactionView:(IGDirectMessageCell *)arg1;
- (void)messageCellDidTapLikeButton:(IGDirectMessageCell *)arg1 liked:(_Bool)arg2;
- (void)messageCellDidDoubleTap:(IGDirectMessageCell *)arg1 liked:(_Bool)arg2;
- (void)messageCellDidTapAvatar:(IGDirectMessageCell *)arg1;
- (void)messageCellDidSingleTapContent:(IGDirectMessageCell *)arg1;
@end

