//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGListDiffable.h"
#import "IGMediaViewerSpecifierProvider.h"

@class IGDirectMessageBlurredImageViewModel, IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGDirectVideo, NSString, NSURL;

@interface IGDirectVideoMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable, IGMediaViewerSpecifierProvider>
{
    IGDirectVideo *_videoMessage;
    struct CGSize _videoViewSize;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    NSString *_contentType;
    NSURL *_imageURL;
    IGDirectMessageBlurredImageViewModel *_blurredImageViewModel;
}

@property(retain, nonatomic) IGDirectMessageBlurredImageViewModel *blurredImageViewModel; // @synthesize blurredImageViewModel=_blurredImageViewModel;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
- (void).cxx_destruct;
- (id)mediaViewerSpecifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)preloadedImage;
- (id)imageProcessor;
- (id)photo;
- (id)video;
- (struct CGSize)videoViewSize;
- (double)contentHeight;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata;
- (id)initWithVideoMessage:(id)arg1 messageCellViewModel:(id)arg2 imageURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

