//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDirectMessageOutgoingReaction : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isE2ELoggingSampled;
    long long _type;
    NSString *_messageId;
    NSString *_threadId;
    NSString *_updateClientContext;
    NSString *_messageTargetContentType;
}

@property(readonly, nonatomic) _Bool isE2ELoggingSampled; // @synthesize isE2ELoggingSampled=_isE2ELoggingSampled;
@property(readonly, copy, nonatomic) NSString *messageTargetContentType; // @synthesize messageTargetContentType=_messageTargetContentType;
@property(readonly, copy, nonatomic) NSString *updateClientContext; // @synthesize updateClientContext=_updateClientContext;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 messageId:(id)arg2 threadId:(id)arg3 updateClientContext:(id)arg4 messageTargetContentType:(id)arg5 isE2ELoggingSampled:(_Bool)arg6;

@end

