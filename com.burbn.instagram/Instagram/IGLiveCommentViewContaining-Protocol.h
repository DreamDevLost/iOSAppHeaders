//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveCommentModel, NSArray, NSString, UICollectionViewCell;

@protocol IGLiveCommentViewContaining <NSObject>
- (UICollectionViewCell *)visibleCellForComment:(IGLiveCommentModel *)arg1;
- (_Bool)isCommentVisible:(IGLiveCommentModel *)arg1;
- (void)removeCommentWithPk:(NSString *)arg1;
- (void)updateCommentWithPk:(NSString *)arg1 withComment:(IGLiveCommentModel *)arg2;
- (void)addComments:(NSArray *)arg1;
@end

