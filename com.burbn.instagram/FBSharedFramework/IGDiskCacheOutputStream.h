//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@class NSString;

@interface IGDiskCacheOutputStream : NSOutputStream
{
    NSString *_filePath;
    NSOutputStream *_fileOutputStream;
    _Bool _open;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)abort;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)open;
- (id)initWithFilePath:(id)arg1;

@end

