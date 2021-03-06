//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReliabilityStatisticsCounterStorage.h"

@class NSString;

@interface FBMemoryMappedCounterStorage : NSObject <FBReliabilityStatisticsCounterStorage>
{
    int _fileVersion;
    int _numCounters;
    int *_mMappedByteArray;
}

- (int *)_mMappedByteArray;
- (void)_setupMemoryMappedFileWithPath:(id)arg1;
- (int)_setupMemoryMappedFileWithFileDescriptor:(int)arg1;
- (unsigned long long)_fileInitStatusWithOriginalLen:(unsigned long long)arg1 newLen:(unsigned long long)arg2;
- (int)_offsetForPrimaryId:(int)arg1 secondaryId:(int)arg2;
- (_Bool)_isValidPrimaryId:(int)arg1 secondaryId:(int)arg2;
- (void)_formatFile;
- (_Bool)_byteArrayNull;
- (int)_totalFileSize;
- (void)dealloc;
- (void)clear;
- (id)allCounters;
- (int)valueOfCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2;
- (void)overwriteStorageWithCounters:(id)arg1;
- (void)setCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 count:(int)arg3;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3;
- (id)initWithNumCounters:(int)arg1 filePath:(id)arg2 fileVersion:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

