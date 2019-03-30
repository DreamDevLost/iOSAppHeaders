//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMediaContent.h"
#import "IGDirectMessageProtocol.h"
#import "IGDirectMessageReplyable.h"
#import "IGMediaViewerSpecifierProvider.h"

@class IGDirectItemIdBasedImageURLProcessor, IGDirectMessageMetadata, IGPhoto, NSArray, NSData, NSString;

@interface IGDirectPhoto : NSObject <IGDirectMessageProtocol, IGDirectMessageReplyable, IGDirectMediaContent, IGMediaViewerSpecifierProvider>
{
    NSData *_imageData;
    NSArray *_likers;
    IGDirectItemIdBasedImageURLProcessor *_previewImageURLProcessor;
    IGDirectMessageMetadata *_metadata;
    IGPhoto *_photo;
    struct CGSize _size;
}

+ (id)fromJSON:(id)arg1 messageMetadata:(id)arg2 likers:(id)arg3;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)replyType;
- (id)replyableConfigurationMediaViewModeModel;
- (id)replyableConfigurationMedia;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)expirable;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)mediaViewerSpecifier;
@property(readonly, nonatomic) IGDirectItemIdBasedImageURLProcessor *previewImageURLProcessor; // @synthesize previewImageURLProcessor=_previewImageURLProcessor;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 imageData:(id)arg2 photo:(id)arg3 size:(struct CGSize)arg4 likers:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

