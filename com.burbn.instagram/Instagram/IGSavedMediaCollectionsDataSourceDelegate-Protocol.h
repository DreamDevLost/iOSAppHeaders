//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGEmptyFeedViewDelegate.h"

@class IGSavedMediaCollectionsDataSource, NSString;

@protocol IGSavedMediaCollectionsDataSourceDelegate <IGEmptyFeedViewDelegate>
- (void)collectionsDataSource:(IGSavedMediaCollectionsDataSource *)arg1 updateFailedWithError:(NSString *)arg2;
- (void)collectionsDataSourceDidUpdate:(IGSavedMediaCollectionsDataSource *)arg1;
@end
