//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSurveyFlow, NSString;

@interface IGSurveyWithFlow : NSObject
{
    long long _surveyID;
    NSString *_name;
    IGSurveyFlow *_flow;
}

@property(readonly, nonatomic) IGSurveyFlow *flow; // @synthesize flow=_flow;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long surveyID; // @synthesize surveyID=_surveyID;
- (void).cxx_destruct;
- (id)initWithSurveyID:(long long)arg1 name:(id)arg2 flow:(id)arg3;

@end

