//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFunnelLoggerChangeLogDelegate.h"

@class NSFileHandle, NSString;

@interface FBFunnelLoggerChangeLogFileHandler : NSObject <FBFunnelLoggerChangeLogDelegate>
{
    NSFileHandle *_funnelChangeLogReadFileHandle;
    NSFileHandle *_funnelChangeLogWriteFileHandle;
}

- (void).cxx_destruct;
- (void)_cancelFunnel:(id)arg1 fromFunnels:(id)arg2;
- (void)_endFunnel:(id)arg1 fromFunnels:(id)arg2;
- (void)_applyRecord:(id)arg1 onFunnels:(id)arg2;
- (id)_readChangeLogRecords;
- (void)_applyChangeLogRecords:(id)arg1;
- (void)_clearChangeLogFile;
- (_Bool)_isChangeLogFileVersionValid;
- (void)_appendRecordToFile:(unsigned char)arg1 withFunnelKey:(id)arg2 withTimestamp:(double)arg3;
- (void)_writeVersionNumberToNewChangeLogFile;
- (id)_funnelChangeLogFilePath;
- (void)_createChangeLogFile;
- (_Bool)_doesChangeLogFileExist;
- (void)_initChangeLogForRead;
- (void)_initChangeLogForWrite;
- (void)_maybeInitChangeLogForWrite;
- (void)clearChangeLog;
- (void)replayAll:(id)arg1;
- (void)recordFunnelCancel:(id)arg1 withTimestamp:(double)arg2;
- (void)recordFunnelEnd:(id)arg1 withTimestamp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
