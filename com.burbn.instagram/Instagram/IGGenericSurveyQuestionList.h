//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGGenericSurveyModule.h"
#import "IGJSONCoding.h"
#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGGenericSurveyQuestion, NSArray, NSString;

@interface IGGenericSurveyQuestionList : FBValueObject <IGGenericSurveyModule, IGJSONCoding, IGListDiffable, NSCopying, NSCoding>
{
    _Bool _enableNavigation;
    _Bool _enableIndexing;
    _Bool _hasSubmitButton;
    _Bool _logOnEachAnswer;
    NSArray *_questions;
    IGGenericSurveyQuestion *_extraQuestion;
    unsigned long long _unlockQuestionCondition;
    long long _verticalPadding;
    unsigned long long _answerListStyle;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long answerListStyle; // @synthesize answerListStyle=_answerListStyle;
@property(readonly, nonatomic) _Bool logOnEachAnswer; // @synthesize logOnEachAnswer=_logOnEachAnswer;
@property(readonly, nonatomic) _Bool hasSubmitButton; // @synthesize hasSubmitButton=_hasSubmitButton;
@property(readonly, nonatomic) _Bool enableIndexing; // @synthesize enableIndexing=_enableIndexing;
@property(readonly, nonatomic) _Bool enableNavigation; // @synthesize enableNavigation=_enableNavigation;
@property(readonly, nonatomic) long long verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(readonly, nonatomic) unsigned long long unlockQuestionCondition; // @synthesize unlockQuestionCondition=_unlockQuestionCondition;
@property(readonly, copy, nonatomic) IGGenericSurveyQuestion *extraQuestion; // @synthesize extraQuestion=_extraQuestion;
@property(readonly, copy, nonatomic) NSArray *questions; // @synthesize questions=_questions;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuestions:(id)arg1 extraQuestion:(id)arg2 unlockQuestionCondition:(unsigned long long)arg3 verticalPadding:(long long)arg4 enableNavigation:(_Bool)arg5 enableIndexing:(_Bool)arg6 hasSubmitButton:(_Bool)arg7 logOnEachAnswer:(_Bool)arg8 answerListStyle:(unsigned long long)arg9;
- (_Bool)isTopLevelModule;
- (unsigned long long)moduleType;
- (long long)totalQuestionCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

