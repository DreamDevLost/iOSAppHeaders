//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashManifestFetching.h"

@class FNFAssetResourceLoader, FNFAssetResourceLoadingRequest, FNFMediaPresentationDescription, NSData, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FNFDashManifestFetcher : NSObject <FNFDashManifestFetching>
{
    struct FNFDashConfig _config;
    NSURL *_mpdUrl;
    NSData *_initialMpdData;
    id <FNFDashManifestFetcherDelegate> _delegate;
    id <FNFDashErrorListening> _errorListener;
    id <FNFDashEventListener> _eventListener;
    FNFAssetResourceLoader *_resourceLoader;
    FNFAssetResourceLoadingRequest *_currentResourceLoaderRequest;
    FNFMediaPresentationDescription *_lastManifest;
    NSString *_lastManifestCacheKey;
    id <FNFTimerManager> _timerMananger;
    id <FNFTimer> _manifestRefreshTimer;
    int _manifestRefreshFailCount;
    _Bool _isLowLatency;
    _Bool _async;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (_Bool)_isEligibleForRefresh;
- (void)_stopManifestRefreshTimer;
- (void)_startManifestRefreshTimer;
- (id)_parseManifestData:(id)arg1;
- (id)_manifestFetched:(id)arg1 withEtag:(id)arg2;
- (void)_manifestFetchCallback:(id)arg1 metadata:(id)arg2 error:(id)arg3;
- (void)_fetchManifest;
- (void)fetchPlaylistImmediately;
- (void)stopPeriodicFetching;
- (void)startPeriodicFetching;
- (void)fetchFirstManifest;
- (void)setDelegate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdUrl:(id)arg2 mpdData:(id)arg3 timerManager:(id)arg4 resourceLoader:(id)arg5 errorListener:(id)arg6 eventListener:(id)arg7 isLowLatency:(_Bool)arg8 async:(_Bool)arg9;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdUrl:(id)arg2 mpdData:(id)arg3 resourceLoader:(id)arg4 errorListener:(id)arg5 eventListener:(id)arg6 isLowLatency:(_Bool)arg7;

@end
