//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "NSCoding.h"

@class IGPollStickerVotersModel, IGQuestionAnswerStickerResponsesModel, IGQuizStickerParticipantsModel, IGSliderStickerVotersModel;

@interface IGInteractiveVotersModel : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGPollStickerVotersModel *_poll_pollVotersModel;
    IGSliderStickerVotersModel *_slider_sliderVotersModel;
    IGQuestionAnswerStickerResponsesModel *_questionAnswer_questionAnswerResponsesModel;
    IGQuizStickerParticipantsModel *_quiz_quizParticipantsModel;
}

+ (id)sliderWithSliderVotersModel:(id)arg1;
+ (id)quizWithQuizParticipantsModel:(id)arg1;
+ (id)questionAnswerWithQuestionAnswerResponsesModel:(id)arg1;
+ (id)pollWithPollVotersModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchPoll:(CDUnknownBlockType)arg1 slider:(CDUnknownBlockType)arg2 questionAnswer:(CDUnknownBlockType)arg3 quiz:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanPoll:(CDUnknownBlockType)arg1 slider:(CDUnknownBlockType)arg2 questionAnswer:(CDUnknownBlockType)arg3 quiz:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

