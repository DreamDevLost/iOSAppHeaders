//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSurveyControlNode, NSArray;

@interface IGSurveyQuestionsArray : NSObject
{
    NSArray *_questions;
    IGSurveyControlNode *_controlNode;
}

@property(readonly, nonatomic) IGSurveyControlNode *controlNode; // @synthesize controlNode=_controlNode;
@property(readonly, copy, nonatomic) NSArray *questions; // @synthesize questions=_questions;
- (void).cxx_destruct;
- (id)initWithQuestions:(id)arg1 controlNode:(id)arg2;

@end

