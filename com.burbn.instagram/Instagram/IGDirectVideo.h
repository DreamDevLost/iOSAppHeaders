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

@class IGDirectItemIdBasedImageURLProcessor, IGDirectMessageMetadata, IGPhoto, IGVideo, IGVideoComposition, NSArray, NSData, NSString;

@interface IGDirectVideo : NSObject <IGDirectMessageProtocol, IGDirectMessageReplyable, IGDirectMediaContent, IGMediaViewerSpecifierProvider>
{
    IGDirectMessageMetadata *_metadata;
    NSArray *_likers;
    IGDirectItemIdBasedImageURLProcessor *_previewImageURLProcessor;
    IGVideo *_video;
    NSData *_videoData;
    NSData *_renderedVideoData;
    IGVideoComposition *_videoComposition;
    NSString *_videoResult;
    IGPhoto *_photo;
    NSData *_previewImageData;
    struct CGSize _previewImageSize;
    struct CGRect _cropRect;
}

@property(readonly, nonatomic) struct CGSize previewImageSize; // @synthesize previewImageSize=_previewImageSize;
@property(readonly, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, copy, nonatomic) NSString *videoResult; // @synthesize videoResult=_videoResult;
@property(readonly, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSData *renderedVideoData; // @synthesize renderedVideoData=_renderedVideoData;
@property(retain, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
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
- (id)metadata;
- (unsigned long long)messageType;
- (id)mediaViewerSpecifier;
@property(readonly, nonatomic) IGDirectItemIdBasedImageURLProcessor *previewImageURLProcessor; // @synthesize previewImageURLProcessor=_previewImageURLProcessor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)messageId;
- (id)contentTypeString;
- (id)initWithMetadata:(id)arg1 video:(id)arg2 photo:(id)arg3 imageData:(id)arg4 videoData:(id)arg5 renderedVideoData:(id)arg6 videoComposition:(id)arg7 cropRect:(struct CGRect)arg8 size:(struct CGSize)arg9 likers:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

