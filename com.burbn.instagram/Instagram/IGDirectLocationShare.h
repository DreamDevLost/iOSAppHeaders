//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageProtocol.h"
#import "IGDirectShareProtocol.h"

@class IGDirectMessageMetadata, IGLocation, NSArray, NSString;

@interface IGDirectLocationShare : NSObject <IGDirectMessageProtocol, IGDirectShareProtocol>
{
    NSArray *_likers;
    IGDirectMessageMetadata *_metadata;
    IGLocation *_location;
    NSString *_comment;
    NSArray *_previewMedia;
}

+ (id)fromJSON:(id)arg1 messageMetadata:(id)arg2 likers:(id)arg3 previewMedia:(id)arg4;
@property(readonly, copy, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
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
- (id)subtitle;
- (id)title;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLocation:(id)arg1 comment:(id)arg2;
- (id)initWithMetadata:(id)arg1 location:(id)arg2 comment:(id)arg3;
- (id)_initWithMetadata:(id)arg1 location:(id)arg2 comment:(id)arg3 previewMedia:(id)arg4;
- (id)initWithMetadata:(id)arg1 location:(id)arg2 comment:(id)arg3 previewMedia:(id)arg4 likers:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

