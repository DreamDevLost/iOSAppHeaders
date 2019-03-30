//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGSurveyDataFetcher : NSObject
{
    IGUserSession *_userSession;
}

@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)_graphQLRequestWithIntegrationPointID:(id)arg1 surveyID:(id)arg2 contextData:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failHandler:(CDUnknownBlockType)arg5;
- (_Bool)_isIntegrationPointInWhitelist:(id)arg1;
- (void)_startRequest:(id)arg1;
- (_Bool)isCoolDownWithIntegrationPointID:(id)arg1;
- (void)queryIGSurveyToolForTestingWithSurveyID:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (void)queryIGSurveyToolWithIntegrationPointID:(id)arg1 contextData:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;

@end

