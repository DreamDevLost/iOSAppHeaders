//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@protocol IGAnalyticsLogFileManagerProtocol <NSObject>
- (_Bool)isCompressedFile:(NSURL *)arg1;
- (_Bool)isBinaryFile:(NSURL *)arg1;
- (void)deleteLogFiles:(NSArray *)arg1 keepNewestFiles:(unsigned long long)arg2;
- (void)deleteLogFile:(NSURL *)arg1;
- (NSURL *)createLogFileWithData:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (NSArray *)allLogFiles;
- (void)enableCompression:(_Bool)arg1;
- (_Bool)compressFile;
@end

