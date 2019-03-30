//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGListDiffable.h"

@class IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGDirectReactionsCellLayoutSpec, NSString, UIImage;

@interface IGDirectReactionMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable>
{
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectReactionsCellLayoutSpec *_layoutSpec;
    NSString *_contentType;
}

@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectReactionsCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIImage *image;
- (double)contentHeight;
- (id)initWithReactionMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

