//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor;

@interface IGGenericSurveyAnswerListViewModel : NSObject
{
    unsigned long long _answerType;
    NSArray *_answers;
    UIColor *_backgroundColor;
}

@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(readonly, nonatomic) unsigned long long answerType; // @synthesize answerType=_answerType;
- (void).cxx_destruct;
- (id)initWithAnswerType:(unsigned long long)arg1 answers:(id)arg2 backgroundColor:(id)arg3;

@end

