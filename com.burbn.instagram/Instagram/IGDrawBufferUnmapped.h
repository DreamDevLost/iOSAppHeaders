//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDrawMapBufferBase.h"

#import "IGDrawMappedBuffer.h"

@class IGContext, NSMutableData, NSString;

@interface IGDrawBufferUnmapped : IGDrawMapBufferBase <IGDrawMappedBuffer>
{
    NSMutableData *_buffer;
    char *_head;
    char *_dataBytes;
}

- (void).cxx_destruct;
- (void)flushStart:(unsigned long long)arg1 amount:(unsigned long long)arg2;
@property(nonatomic) void *head;
@property(readonly, nonatomic) unsigned long long offset;
@property(readonly, nonatomic) void *data;
@property(readonly, nonatomic) unsigned long long available;
- (id)initWithContext:(id)arg1 size:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) IGContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int name;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly) Class superclass;

@end

