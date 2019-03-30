//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectThreadOutgoingUpdateAction, NSString;

@interface IGDirectThreadUpdatePayload : FBValueObject <NSCopying, NSCoding>
{
    NSString *_threadId;
    IGDirectThreadOutgoingUpdateAction *_action;
    NSString *_updateClientContext;
}

@property(readonly, copy, nonatomic) NSString *updateClientContext; // @synthesize updateClientContext=_updateClientContext;
@property(readonly, copy, nonatomic) IGDirectThreadOutgoingUpdateAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithThreadId:(id)arg1 action:(id)arg2 updateClientContext:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
