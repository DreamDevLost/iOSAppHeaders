//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGDirectMessageProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMessageMetadata, IGProductItem, NSArray, NSString;

@interface IGDirectProductShare : FBValueObject <IGDirectMessageProtocol, NSCopying, NSCoding>
{
    IGDirectMessageMetadata *_metadata;
    IGProductItem *_product;
    NSArray *_likers;
    NSString *_comment;
}

@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, copy, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, copy, nonatomic) IGProductItem *product; // @synthesize product=_product;
@property(readonly, copy, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 product:(id)arg2 likers:(id)arg3 comment:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)expirable;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

