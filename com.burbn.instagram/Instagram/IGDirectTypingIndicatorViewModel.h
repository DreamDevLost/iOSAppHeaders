//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGDirectMessageCellLayoutSpec, IGUser;

@interface IGDirectTypingIndicatorViewModel : NSObject <IGListDiffable>
{
    _Bool _shouldAnimateIntoView;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    long long _typingStatusType;
    IGUser *_sender;
}

@property(readonly, nonatomic) _Bool shouldAnimateIntoView; // @synthesize shouldAnimateIntoView=_shouldAnimateIntoView;
@property(readonly, nonatomic) IGUser *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) long long typingStatusType; // @synthesize typingStatusType=_typingStatusType;
@property(readonly, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)text;
- (id)initWithTypingStatus:(id)arg1 sender:(id)arg2 layoutSpec:(id)arg3 shouldAnimateIntoView:(_Bool)arg4;

@end
