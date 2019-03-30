//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZZArchiveEntry.h"

@class NSDate, NSString;

@interface ZZNewArchiveEntry : ZZArchiveEntry
{
    NSString *_fileName;
    unsigned short _fileMode;
    NSDate *_lastModified;
    long long _compressionLevel;
    CDUnknownBlockType _dataBlock;
    CDUnknownBlockType _streamBlock;
    CDUnknownBlockType _dataConsumerBlock;
}

- (void).cxx_destruct;
- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) _Bool compressed;
- (id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(CDUnknownBlockType)arg5 streamBlock:(CDUnknownBlockType)arg6 dataConsumerBlock:(CDUnknownBlockType)arg7;

@end

