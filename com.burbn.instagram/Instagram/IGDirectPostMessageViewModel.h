//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGDirectReshareMessageHeaderViewModel.h"
#import "IGListDiffable.h"

@class IGDirectMessageBlurredImageViewModel, IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGDirectReshareDiffIdentifier, IGDirectTextMessageBubbleViewModel, IGFeedItem, NSString, NSURL;

@interface IGDirectPostMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGDirectReshareMessageHeaderViewModel, IGListDiffable>
{
    struct CGSize _imageSize;
    struct CGSize _contentSize;
    double _cellHeight;
    IGDirectReshareDiffIdentifier *_diffId;
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    NSString *_contentType;
    NSString *_footerText;
    NSURL *_imageURL;
    IGDirectTextMessageBubbleViewModel *_captionTextModel;
    IGDirectTextMessageBubbleViewModel *_commentTextModel;
    IGFeedItem *_feedItem;
    IGDirectMessageBlurredImageViewModel *_blurredImageViewModel;
}

@property(retain, nonatomic) IGDirectMessageBlurredImageViewModel *blurredImageViewModel; // @synthesize blurredImageViewModel=_blurredImageViewModel;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, copy, nonatomic) IGDirectTextMessageBubbleViewModel *commentTextModel; // @synthesize commentTextModel=_commentTextModel;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *captionTextModel; // @synthesize captionTextModel=_captionTextModel;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)module;
- (id)headerImageBadgeImageName;
- (id)headerImageURL;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (id)theme;
- (_Bool)isChevronHidden;
- (_Bool)senderIsCurrentUser;
@property(readonly, nonatomic) _Bool displaysShoppingIndicator;
@property(readonly, nonatomic) _Bool displaysSidecarIndicator;
@property(readonly, nonatomic) _Bool displaysVideoIndicator;
@property(readonly, nonatomic) struct CGSize contentSize;
- (double)contentHeight;
- (id)initWithPostMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

