//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectInboxMetadata, NSDictionary, NSOrderedSet;

@interface IGDirectCacheDiskWarmupStepResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectInboxMetadata *_inboxMetadata;
    NSOrderedSet *_sanitizedThreads;
    NSDictionary *_threadClientStateByIds;
}

+ (id)threadClientStateByIds:(id)arg1;
+ (id)sanitizedThreads:(id)arg1;
+ (id)inboxMetadata:(id)arg1;
- (void).cxx_destruct;
- (void)matchInboxMetadata:(CDUnknownBlockType)arg1 sanitizedThreads:(CDUnknownBlockType)arg2 threadClientStateByIds:(CDUnknownBlockType)arg3;

@end

