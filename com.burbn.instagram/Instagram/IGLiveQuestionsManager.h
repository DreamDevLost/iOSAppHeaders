//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGLiveQuestionModel, IGLiveQuestionsManagerListenerAnnouncer, IGUserSession, NSArray, NSMutableSet, NSString;

@interface IGLiveQuestionsManager : NSObject <IGUserSessionObject>
{
    IGUserSession *_userSession;
    IGLiveQuestionsManagerListenerAnnouncer *_announcer;
    NSMutableSet *_answeredQuestionPks;
    NSArray *_availableQuestions;
    IGLiveQuestionModel *_selectedQuestion;
}

@property(retain, nonatomic) IGLiveQuestionModel *selectedQuestion; // @synthesize selectedQuestion=_selectedQuestion;
@property(readonly, copy, nonatomic) NSArray *availableQuestions; // @synthesize availableQuestions=_availableQuestions;
- (void).cxx_destruct;
- (_Bool)isQuestionAnswered:(id)arg1;
- (void)markQuestionAnswered:(id)arg1;
- (void)endQuestionSession;
- (void)startQuestionSession;
- (void)_fetchQuestionsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAvailableQuestionsWithBroadcastId:(id)arg1 questionTypesToFetch:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchStoryQuestionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

