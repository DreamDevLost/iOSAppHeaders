//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageProtocol.h"

@class IGDirectMessageMetadata, NSArray, NSString;

@interface IGDirectLike : NSObject <IGDirectMessageProtocol>
{
    NSArray *_likers;
    IGDirectMessageMetadata *_metadata;
}

@property(readonly, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)expirable;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMetadata:(id)arg1 likers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

