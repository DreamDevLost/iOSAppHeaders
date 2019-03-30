//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGQuestionAnswerStickerResponsesModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    NSString *_questionAnswerStickerPk;
    NSString *_questionType;
    NSArray *_responders;
    NSString *_maxID;
}

@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, copy, nonatomic) NSArray *responders; // @synthesize responders=_responders;
@property(readonly, copy, nonatomic) NSString *questionType; // @synthesize questionType=_questionType;
@property(readonly, copy, nonatomic) NSString *questionAnswerStickerPk; // @synthesize questionAnswerStickerPk=_questionAnswerStickerPk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuestionAnswerStickerPk:(id)arg1 questionType:(id)arg2 responders:(id)arg3 maxID:(id)arg4 moreAvailable:(_Bool)arg5;
- (id)initWithCoder:(id)arg1;

@end

