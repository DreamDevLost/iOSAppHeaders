//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDashNetworking.h"

@class FNFAssetResourceLoader, FNFDashInflightMetadata, NSObject<OS_dispatch_queue>;

@interface FNFDashNetworker : NSObject <FNFDashNetworking>
{
    struct FNFDashConfig _config;
    id <FNFDashNetworkerDelegate> _delegate;
    id <FNFDashErrorListening> _errorListener;
    FNFAssetResourceLoader *_resourceLoader;
    FNFDashInflightMetadata *_inflightMetadata;
    _Bool _async;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (id)resourceLoader;
- (void)_dataFinished:(id)arg1 dataRequest:(id)arg2 responseMetadata:(id)arg3 contentInfo:(id)arg4 loadingRequest:(id)arg5 forTrack:(long long)arg6;
- (void)_dataCallback:(id)arg1 offset:(unsigned long long)arg2 dataRequest:(id)arg3 forTrack:(long long)arg4;
- (void)_fetchWithRange:(id)arg1 selectionMetadata:(id)arg2 incompleteDataFinishCount:(int)arg3 track:(long long)arg4;
- (_Bool)fetchInProgress;
- (void)cancelFetchFrom:(int)arg1 withReason:(id)arg2;
- (void)fetchWithRange:(id)arg1 track:(long long)arg2 selectionMetadata:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)description;
- (id)initWithConfig:(struct FNFDashConfig)arg1 resourceLoader:(id)arg2 errorListener:(id)arg3 async:(_Bool)arg4;
- (id)initWithConfig:(struct FNFDashConfig)arg1 resourceLoader:(id)arg2 errorListener:(id)arg3;

@end
