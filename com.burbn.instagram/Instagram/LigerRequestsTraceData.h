//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TraceData;

@interface LigerRequestsTraceData : NSObject
{
    struct mutex _operationsLock;
    TraceData *_traceData;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)remapAndFilterHttpProperties:(const map_5554a4ce *)arg1;
- (void)setTraceData:(id)arg1;
- (void)recordResponseInfo:(id)arg1;

@end

