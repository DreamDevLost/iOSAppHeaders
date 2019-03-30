//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGUserSession;

@interface IGGenericSurveyIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    unsigned long long _surveyType;
    id <IGSimpleActionPresentableViewerDelegate> _simpleActionDelegate;
    CDUnknownBlockType _navigationCompletion;
}

@property(readonly, nonatomic) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(readonly, nonatomic) id <IGSimpleActionPresentableViewerDelegate> simpleActionDelegate; // @synthesize simpleActionDelegate=_simpleActionDelegate;
@property(readonly, nonatomic) unsigned long long surveyType; // @synthesize surveyType=_surveyType;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 surveyType:(unsigned long long)arg2 simpleActionDelegate:(id)arg3 navigationCompletion:(CDUnknownBlockType)arg4;

@end

