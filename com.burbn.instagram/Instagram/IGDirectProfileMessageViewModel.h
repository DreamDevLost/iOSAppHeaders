//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGDirectReshareMessageHeaderViewModel.h"
#import "IGDirectReshareMessageMediaViewModel.h"
#import "IGListDiffable.h"

@class IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGDirectReshareDiffIdentifier, IGUser, NSArray, NSString;

@interface IGDirectProfileMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGDirectReshareMessageHeaderViewModel, IGDirectReshareMessageMediaViewModel, IGListDiffable>
{
    struct CGSize _contentSize;
    IGDirectReshareDiffIdentifier *_diffId;
    NSArray *_previewMedia;
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    NSString *_contentType;
    IGUser *_sharedUser;
}

@property(readonly, nonatomic) IGUser *sharedUser; // @synthesize sharedUser=_sharedUser;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (double)thumbnailSize;
- (id)resharePreviewMedia;
- (id)module;
- (id)headerImageBadgeImageName;
- (id)headerImageURL;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (id)theme;
- (_Bool)isChevronHidden;
- (_Bool)senderIsCurrentUser;
@property(readonly, nonatomic) struct CGSize contentSize;
- (double)contentHeight;
- (id)initWithProfileMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

