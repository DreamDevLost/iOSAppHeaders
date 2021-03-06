//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGGiphyDataSource : NSObject
{
    id <IGNetworking> _networker;
    NSString *_apiKey;
    long long _fetchLimit;
    id <IGGiphyDataStoreUpdating> _giphyDataStoreUpdater;
}

- (void).cxx_destruct;
- (void)_cacheGiphyObject:(id)arg1;
- (void)_cacheGiphyResponse:(id)arg1;
- (id)searchWithTerm:(id)arg1 path:(id)arg2 sessionId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchTrendingWithPath:(id)arg1 sessionId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNetworker:(id)arg1 apiKey:(id)arg2 fetchLimit:(long long)arg3 giphyDataStoreUpdater:(id)arg4;

@end

