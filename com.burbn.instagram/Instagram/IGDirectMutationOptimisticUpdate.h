//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectOutgoingMessage, IGDirectThreadUpdate;

@interface IGDirectMutationOptimisticUpdate : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGDirectThreadUpdate *_threadUpdate;
    IGDirectOutgoingMessage *_outgoingMessage;
}

+ (id)threadUpdate:(id)arg1;
+ (id)outgoingMessage:(id)arg1;
- (void).cxx_destruct;
- (void)matchThreadUpdate:(CDUnknownBlockType)arg1 outgoingMessage:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanThreadUpdate:(CDUnknownBlockType)arg1 outgoingMessage:(CDUnknownBlockType)arg2;

@end

