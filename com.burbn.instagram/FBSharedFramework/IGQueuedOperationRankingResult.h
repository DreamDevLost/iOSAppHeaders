//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGModuleItem, IGQueuedOperationRankingInfo, IGQueuedRequestOperation, NSString;

@interface IGQueuedOperationRankingResult : NSObject
{
    IGQueuedRequestOperation *_operation;
    unsigned long long _state;
    IGQueuedOperationRankingInfo *_rankingInfo;
    IGModuleItem *_item;
    NSString *_module;
}

- (void).cxx_destruct;
- (id)item;
- (unsigned long long)state;
- (id)rankingInfo;
- (id)operation;
- (id)module;
- (id)initWithOperation:(id)arg1 state:(unsigned long long)arg2 rankingInfo:(id)arg3 item:(id)arg4 module:(id)arg5;

@end

