//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectPendingInboxUpdateAction, NSString;

@interface IGDirectPendingInboxUpdatePayload : FBValueObject <NSCopying, NSCoding>
{
    IGDirectPendingInboxUpdateAction *_action;
    NSString *_updateClientContext;
}

@property(readonly, copy, nonatomic) NSString *updateClientContext; // @synthesize updateClientContext=_updateClientContext;
@property(readonly, copy, nonatomic) IGDirectPendingInboxUpdateAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1 updateClientContext:(id)arg2;

@end
