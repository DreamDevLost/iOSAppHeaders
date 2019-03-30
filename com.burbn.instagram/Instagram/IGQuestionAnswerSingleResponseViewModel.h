//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGQuestionAnswerStickerResponder;

@interface IGQuestionAnswerSingleResponseViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    IGQuestionAnswerStickerResponder *_responder;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, copy, nonatomic) IGQuestionAnswerStickerResponder *responder; // @synthesize responder=_responder;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithResponder:(id)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (id)initWithCoder:(id)arg1;

@end
