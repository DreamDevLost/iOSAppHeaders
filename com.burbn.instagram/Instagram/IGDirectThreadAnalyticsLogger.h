//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface IGDirectThreadAnalyticsLogger : NSObject
{
    NSString *_initialLastSeenMessageId;
    NSMutableSet *_messageIdsWithImpressionLogged;
    NSMutableSet *_videoCallEventIdsWithImpressionLogged;
    NSString *_viewerSessionId;
}

@property(readonly, copy, nonatomic) NSString *viewerSessionId; // @synthesize viewerSessionId=_viewerSessionId;
- (void).cxx_destruct;
- (void)logVideoCallEventImpressionAsNeededForViewModel:(id)arg1 videoCallId:(id)arg2;
- (void)logVideoCallIconImpressionWithThreadId:(id)arg1;
- (void)logImpressionAsNeededForMessageViewModel:(id)arg1;
- (void)logPendingRequestDidAllow:(_Bool)arg1;
- (void)logThreadAction:(long long)arg1 thread:(id)arg2;
- (void)logThreadInfoTappedFromEntryPoint:(id)arg1;
- (void)logGroupThreadRenamedWithOldName:(id)arg1;
- (void)logProfilePictureTappedWithUserPk:(id)arg1 threadId:(id)arg2 isPendingThread:(_Bool)arg3;
- (void)logTextTappedWithURL:(id)arg1 senderId:(id)arg2 threadId:(id)arg3 text:(id)arg4;
- (void)logStoryMentionTapped;
- (void)logMediaExpandForContentTypeString:(id)arg1;
- (void)logTappedLiveReshareMessageWithSenderId:(id)arg1 broadcasterId:(id)arg2 mediaId:(id)arg3 recipientId:(id)arg4;
- (void)logTappedReshareMessageType:(id)arg1;
- (void)logVoiceMessageCancelButtonTappedWithUserPk:(id)arg1;
- (void)logVoiceMessageRaiseToRecordWithUserPk:(id)arg1;
- (void)logVoiceMessageButtonTappedWithUserPk:(id)arg1;
- (void)logFaceFilterButtonTapped;
- (void)logInlineTextFieldTapped;
- (void)logSendEmojiViaReactionsBar:(id)arg1;
- (void)logSendLikeMessage;
- (void)logSendTextViaComposerFlow:(_Bool)arg1;
- (void)logSaveMediaAttemptWithSuccess:(_Bool)arg1 isVideo:(_Bool)arg2 error:(id)arg3;
@property(readonly, nonatomic) NSString *analyticsModule;
- (id)initWithInitialLastSeenMessageId:(id)arg1;

@end
