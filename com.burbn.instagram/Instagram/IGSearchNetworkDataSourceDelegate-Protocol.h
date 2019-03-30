//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSearchNetworkDataSource, NSArray, NSString;

@protocol IGSearchNetworkDataSourceDelegate <NSObject>
- (void)networkDataSource:(IGSearchNetworkDataSource *)arg1 didFailForSearchText:(NSString *)arg2;
- (void)networkDataSource:(IGSearchNetworkDataSource *)arg1 cachedResultsForSearchText:(NSString *)arg2 cachedResults:(NSArray *)arg3 rankToken:(NSString *)arg4 fullResultsLoaded:(_Bool)arg5;
- (void)networkDataSource:(IGSearchNetworkDataSource *)arg1 didFinishFetchForSearchText:(NSString *)arg2 results:(NSArray *)arg3 rankToken:(NSString *)arg4 clearClientCache:(_Bool)arg5;
- (void)networkDataSource:(IGSearchNetworkDataSource *)arg1 didBeginFetchForSearchText:(NSString *)arg2;
@end
