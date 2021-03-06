//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGDirectMessageVote : FBValueObject <NSCopying, NSCoding>
{
    NSString *_clientId;
    NSString *_threadId;
    NSString *_messageId;
    unsigned long long _optionId;
}

@property(readonly, nonatomic) unsigned long long optionId; // @synthesize optionId=_optionId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientId:(id)arg1 threadId:(id)arg2 messageId:(id)arg3 optionId:(unsigned long long)arg4;

@end

