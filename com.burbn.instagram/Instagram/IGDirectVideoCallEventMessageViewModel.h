//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGListDiffable.h"
#import "IGTextViewItemViewModelProtocol.h"

@class IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGStyledString, NSArray, NSString;

@interface IGDirectVideoCallEventMessageViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol, IGDirectMessageViewModelProtocol>
{
    NSArray *_textAttributes;
    NSString *_title;
    IGStyledString *_styledString;
    _Bool _showTapToJoin;
    NSString *_videoCallId;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectMessageMetadata *_messageMetadata;
}

@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, copy, nonatomic) NSString *videoCallId; // @synthesize videoCallId=_videoCallId;
- (void).cxx_destruct;
- (void)_appendTapToJoinIfNecessary;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)showsTopSeparator;
- (_Bool)showsBottomSeparator;
- (struct UIEdgeInsets)insets;
- (id)backgroundColor;
- (id)styledString;
- (id)contentType;
- (double)contentHeight;
- (id)initWithVideoCallEvent:(id)arg1 messageCellViewModel:(id)arg2 showTapToJoin:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

