//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGDirectMutationCleanupInstructions : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_dropAfterDiscoveryOfMutationTrackingId;
}

+ (id)dropImmediatelyAfterSuccess;
+ (id)dropAfterDiscoveryOfMutationTrackingId:(id)arg1;
- (void).cxx_destruct;
- (void)matchDropImmediatelyAfterSuccess:(CDUnknownBlockType)arg1 dropAfterDiscoveryOfMutationTrackingId:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanDropImmediatelyAfterSuccess:(CDUnknownBlockType)arg1 dropAfterDiscoveryOfMutationTrackingId:(CDUnknownBlockType)arg2;

@end

