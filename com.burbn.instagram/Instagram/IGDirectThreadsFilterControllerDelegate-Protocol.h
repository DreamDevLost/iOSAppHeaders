//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectInboxFiltersViewController;

@protocol IGDirectThreadsFilterControllerDelegate <NSObject>
- (void)threadsFilterControllerFilterDidChange:(IGDirectInboxFiltersViewController *)arg1 performUpdatesAnimated:(_Bool)arg2;
- (void)threadsFilterControllerShouldFetchNextPageForFilteredInboxIfNeeded:(IGDirectInboxFiltersViewController *)arg1;
- (long long)threadsFilterControllerSelectedThreadsFilter;
@end

