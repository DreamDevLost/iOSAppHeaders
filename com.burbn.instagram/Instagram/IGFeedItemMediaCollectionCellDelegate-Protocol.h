//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItemMediaCollectionCell;

@protocol IGFeedItemMediaCollectionCellDelegate <NSObject>
- (void)feedItemMediaCollectionCellDidTapSaveButton:(IGFeedItemMediaCollectionCell *)arg1;
- (void)feedItemMediaCollectionCell:(IGFeedItemMediaCollectionCell *)arg1 didDoubleTapComponent:(unsigned long long)arg2;
- (void)feedItemMediaCollectionCell:(IGFeedItemMediaCollectionCell *)arg1 didSingleTapComponent:(unsigned long long)arg2 atPoint:(struct CGPoint)arg3;
@end

