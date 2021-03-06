//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageProtocol.h"
#import "IGDirectShareProtocol.h"

@class IGDirectMessageMetadata, NSArray, NSNumber, NSString;

@interface IGDirectHashtagShare : NSObject <IGDirectMessageProtocol, IGDirectShareProtocol>
{
    NSArray *_likers;
    IGDirectMessageMetadata *_metadata;
    NSString *_hashtagName;
    NSString *_comment;
    NSNumber *_mediaCount;
    NSArray *_previewMedia;
}

+ (id)fromJSON:(id)arg1 messageMetadata:(id)arg2 likers:(id)arg3 previewMedia:(id)arg4;
@property(readonly, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(readonly, copy, nonatomic) NSNumber *mediaCount; // @synthesize mediaCount=_mediaCount;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, copy, nonatomic) NSString *hashtagName; // @synthesize hashtagName=_hashtagName;
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
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 hashtagName:(id)arg2 comment:(id)arg3 previewMedia:(id)arg4 mediaCount:(id)arg5 likers:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

