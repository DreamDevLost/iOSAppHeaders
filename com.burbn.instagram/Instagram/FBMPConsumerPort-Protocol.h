//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBMPConsumerPort <NSObject>
@property(readonly, nonatomic) Class consumerPortDataType;
@property(readonly, nonatomic) _Bool startsPerfTracking;
@property(nonatomic) __weak id <FBMPOutput> output;
@property(nonatomic) _Bool shouldConsume;
@property(readonly, nonatomic) CDUnknownBlockType consumeBlock;
@end

