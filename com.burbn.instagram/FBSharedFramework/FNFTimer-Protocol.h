//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@protocol FNFTimer <NSObject>
- (void)pause;
- (void)resume;
- (id)initWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 block:(void (^)(void))arg4;
@end

