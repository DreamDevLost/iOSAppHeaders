//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageViewModelProtocol.h"
#import "IGListDiffable.h"
#import "IGTextViewItemViewModelProtocol.h"

@class IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGStyledString, NSArray, NSString, UIColor;

@interface IGDirectActionLogMessageViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol, IGDirectMessageViewModelProtocol>
{
    _Bool _showsBottomSeparator;
    _Bool _showsTopSeparator;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectMessageMetadata *_messageMetadata;
    UIColor *_backgroundColor;
    NSString *_title;
    NSArray *_textAttributes;
    IGStyledString *_styledString;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
@property(readonly, nonatomic) NSArray *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
@property(readonly, nonatomic) _Bool showsBottomSeparator; // @synthesize showsBottomSeparator=_showsBottomSeparator;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
- (void).cxx_destruct;
- (id)contentType;
- (double)contentHeight;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithActionLogMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
