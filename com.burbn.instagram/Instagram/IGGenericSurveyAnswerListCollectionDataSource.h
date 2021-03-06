//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGGenericSurveyAnonymousFeedback, NSArray;

@interface IGGenericSurveyAnswerListCollectionDataSource : NSObject <IGListDiffable>
{
    NSArray *_contexts;
    IGGenericSurveyAnonymousFeedback *_anonymousFeedback;
}

@property(readonly, nonatomic) IGGenericSurveyAnonymousFeedback *anonymousFeedback; // @synthesize anonymousFeedback=_anonymousFeedback;
@property(readonly, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuestionListItem:(id)arg1 surveyType:(unsigned long long)arg2;

@end

