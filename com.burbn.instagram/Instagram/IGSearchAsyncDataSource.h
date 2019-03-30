//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAsyncDataSource.h"

#import "IGAutocompleteNetworkDataSourceAnalytics.h"
#import "IGAutocompleteNetworkDataSourceDelegate.h"

@class IGAutocompleteDataSourceStore, IGAutocompleteNetworkDataSource, NSDictionary, NSString;

@interface IGSearchAsyncDataSource : IGAutocompleteAsyncDataSource <IGAutocompleteNetworkDataSourceAnalytics, IGAutocompleteNetworkDataSourceDelegate>
{
    _Bool _searching;
    _Bool _shouldReloadForDataSourceDidStartLoading;
    _Bool _shouldReloadForDataSourceDidFinishLoading;
    IGAutocompleteNetworkDataSource *_dataSource;
    IGAutocompleteDataSourceStore *_dataStore;
    NSString *_responseQueryText;
    NSString *_responseRankToken;
    NSDictionary *_analyticsInfo;
}

@property(retain, nonatomic) NSDictionary *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(copy, nonatomic) NSString *responseRankToken; // @synthesize responseRankToken=_responseRankToken;
@property(copy, nonatomic) NSString *responseQueryText; // @synthesize responseQueryText=_responseQueryText;
@property(readonly, nonatomic) IGAutocompleteDataSourceStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) _Bool shouldReloadForDataSourceDidFinishLoading; // @synthesize shouldReloadForDataSourceDidFinishLoading=_shouldReloadForDataSourceDidFinishLoading;
@property(nonatomic) _Bool shouldReloadForDataSourceDidStartLoading; // @synthesize shouldReloadForDataSourceDidStartLoading=_shouldReloadForDataSourceDidStartLoading;
@property(readonly, nonatomic) IGAutocompleteNetworkDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
- (void).cxx_destruct;
- (_Bool)isLocalResult:(id)arg1;
- (long long)numberOfLocalResults;
- (void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 fallbackData:(id)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6;
- (void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(_Bool)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(_Bool)arg7;
- (id)allResults;
- (unsigned long long)numberOfResults;
- (void)clearResults;
- (void)reset;
- (void)filterWithQuery:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 analyticsInfo:(id)arg4 loadMore:(_Bool)arg5;
- (id)initWithDataSource:(id)arg1 dataStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

