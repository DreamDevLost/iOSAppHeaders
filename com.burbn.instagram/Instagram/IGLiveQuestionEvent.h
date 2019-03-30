//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "IGLiveInteractivityEvent.h"

@class IGLiveQuestionModel, NSString;

@interface IGLiveQuestionEvent : FBIvarBasedEqualityObject <IGLiveInteractivityEvent>
{
    unsigned long long _subtype;
    IGLiveQuestionModel *_activation_question;
    NSString *_deactivation_questionPk;
    double _deactivation_timestamp;
}

+ (id)deactivationWithQuestionPk:(id)arg1 timestamp:(double)arg2;
+ (id)activationWithQuestion:(id)arg1;
- (void).cxx_destruct;
- (void)matchActivation:(CDUnknownBlockType)arg1 deactivation:(CDUnknownBlockType)arg2;
- (id)questionPk;
- (double)timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

