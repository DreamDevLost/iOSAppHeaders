//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectUserMediaDataSource, IGFeedItem;

@protocol IGDirectUserMediaDataSourceDelegate <NSObject>
- (_Bool)userMediaDataSource:(IGDirectUserMediaDataSource *)arg1 shouldShowFeedItemAsSelected:(IGFeedItem *)arg2;
- (void)userMediaDataSource:(IGDirectUserMediaDataSource *)arg1 didFailToLoadItemsIsInternetConnected:(_Bool)arg2;
- (void)userMediaDataSourceDidFinishLoadingItems:(IGDirectUserMediaDataSource *)arg1;
- (void)userMediaDataSource:(IGDirectUserMediaDataSource *)arg1 didSelectFeedItem:(IGFeedItem *)arg2;
@end

