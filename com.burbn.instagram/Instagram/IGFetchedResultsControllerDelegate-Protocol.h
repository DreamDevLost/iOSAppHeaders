//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFetchedResultsController, NSArray;

@protocol IGFetchedResultsControllerDelegate <NSObject>
- (void)fetchedResultsController:(IGFetchedResultsController *)arg1 didUpdatePost:(IGFeedItem *)arg2 withChange:(long long)arg3;
- (void)fetchedResultsController:(IGFetchedResultsController *)arg1 didRefreshObjects:(NSArray *)arg2 allObjects:(NSArray *)arg3;
@end

