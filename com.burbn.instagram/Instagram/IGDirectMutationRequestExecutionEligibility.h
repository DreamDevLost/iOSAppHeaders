//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@interface IGDirectMutationRequestExecutionEligibility : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _notEligible_shouldBlockQueue;
}

+ (id)notEligibleWithShouldBlockQueue:(_Bool)arg1;
+ (id)eligible;
- (void)matchEligible:(CDUnknownBlockType)arg1 notEligible:(CDUnknownBlockType)arg2;

@end
