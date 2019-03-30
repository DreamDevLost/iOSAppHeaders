//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGDirectMessageProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectMessageMetadata, IGStaticStickerModel, NSArray, NSString;

@interface IGDirectStaticStickerMessage : FBValueObject <IGDirectMessageProtocol, NSCopying, NSCoding>
{
    IGDirectMessageMetadata *_metadata;
    IGStaticStickerModel *_sticker;
    NSArray *_likers;
}

@property(readonly, copy, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, copy, nonatomic) IGStaticStickerModel *sticker; // @synthesize sticker=_sticker;
@property(readonly, copy, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)arg1 sticker:(id)arg2 likers:(id)arg3;
- (_Bool)hideInThread;
- (id)expirable;
- (id)actionSummaryProvider;
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

