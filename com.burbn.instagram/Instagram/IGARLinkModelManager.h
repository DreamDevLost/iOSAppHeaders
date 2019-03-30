//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGARLinkModelDownloaderDelegate.h"
#import "IGUserSessionObject.h"

@class IGARDeliveryFacade, IGARLinkModelDownloader, IGAssetModel, IGAssetModelStorage, IGUserSession, NSObject<OS_dispatch_queue>, NSString;

@interface IGARLinkModelManager : NSObject <IGARLinkModelDownloaderDelegate, IGUserSessionObject>
{
    NSObject<OS_dispatch_queue> *_offlineStorageQueue;
    IGAssetModel *_model;
    IGARLinkModelDownloader *_modelDownloader;
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    IGARDeliveryFacade *_arDeliveryFacade;
    IGAssetModelStorage *_assetModelStorage;
    _Bool _isLocalOCREnabled;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)arlinkModelDownloaderModelNotChanged:(id)arg1;
- (void)arlinkModelDownloader:(id)arg1 modelUpdatedWithAssetModel:(id)arg2;
- (void)arlinkModelDownloader:(id)arg1 failWithError:(id)arg2;
- (_Bool)_isFileAvaiable:(id)arg1;
- (void)_cleanupDiskModel;
- (id)_getPathForPersistingMetadata;
- (id)_readStoredMetadata;
- (void)_saveModelToDisk:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_areDiskModelsMissingForMetadata;
- (void)fetchModelsIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)version;
- (id)ocrModelPath;
- (id)ocrModelInitPath;
- (id)detectionModelPath;
- (id)detectionModelInitPath;
- (id)initWithNetworker:(id)arg1 userSession:(id)arg2 arDeliveryFacade:(id)arg3 assetModelStorage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

