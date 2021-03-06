//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBContactRootHashHandler : NSObject
{
    id <FBCCUConfigurationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_persistedFilePath;
    NSString *_persistedRootHash;
}

+ (id)_splitStringIntoChars:(id)arg1;
+ (id)calculateRootHashWithSnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)_readRootHash;
- (id)hashAlgorithm;
- (id)rootHash;
- (void)removePersistedHash;
- (void)saveRootHash:(id)arg1;
- (id)initWithIntegrationDelegate:(id)arg1 directoryPath:(id)arg2 queue:(id)arg3;

@end

