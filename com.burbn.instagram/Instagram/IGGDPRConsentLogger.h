//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGDPRConsentContext, IGUserSession, NSString;

@interface IGGDPRConsentLogger : NSObject
{
    IGUserSession *_userSession;
    IGGDPRConsentContext *_context;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (void)_logWithEventName:(id)arg1 extraDict:(id)arg2;
- (void)logSendEmailFailureWithStage:(id)arg1 reason:(id)arg2;
- (void)logSendEmailSuccessWithStage:(id)arg1;
- (void)logWithStage:(id)arg1;
- (void)logWithAction:(id)arg1 stage:(id)arg2 extraDict:(id)arg3;
- (void)logFinished;
- (void)logEntry;
- (id)initWithUserSession:(id)arg1 context:(id)arg2;

@end

