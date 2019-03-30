//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface IGDirectPublishedMessageMetadata : FBValueObject <NSCopying, NSCoding>
{
    NSDate *_serverTimestamp;
    NSString *_serverId;
    NSString *_clientContext;
    NSString *_threadId;
    NSString *_senderPk;
}

@property(readonly, copy, nonatomic) NSString *senderPk; // @synthesize senderPk=_senderPk;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, copy, nonatomic) NSString *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) NSDate *serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithServerTimestamp:(id)arg1 serverId:(id)arg2 clientContext:(id)arg3 threadId:(id)arg4 senderPk:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end
