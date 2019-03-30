//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectOutgoingMessageStatus, IGUser, NSString;

@interface IGDirectMessageViewModelMetadata : FBValueObject <NSCopying, NSCoding>
{
    _Bool _senderIsCurrentUser;
    IGUser *_sender;
    NSString *_accessibilityDescription;
    IGDirectOutgoingMessageStatus *_outgoingMessageStatus;
}

@property(readonly, copy, nonatomic) IGDirectOutgoingMessageStatus *outgoingMessageStatus; // @synthesize outgoingMessageStatus=_outgoingMessageStatus;
@property(readonly, copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(readonly, nonatomic) _Bool senderIsCurrentUser; // @synthesize senderIsCurrentUser=_senderIsCurrentUser;
@property(readonly, copy, nonatomic) IGUser *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)initWithSender:(id)arg1 senderIsCurrentUser:(_Bool)arg2 accessibilityDescription:(id)arg3 outgoingMessageStatus:(id)arg4;

@end

