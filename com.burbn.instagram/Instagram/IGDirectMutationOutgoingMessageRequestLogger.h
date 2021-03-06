//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMutationRequestLogging.h"

@class IGDirectOutgoingMessageReliabilityLogger, IGDirectOutgoingMessageSendReliabilityLogInfo, NSString;

@interface IGDirectMutationOutgoingMessageRequestLogger : NSObject <IGDirectMutationRequestLogging>
{
    IGDirectOutgoingMessageSendReliabilityLogInfo *_logInfo;
    IGDirectOutgoingMessageReliabilityLogger *_reliabilityLogger;
}

- (void).cxx_destruct;
- (void)logEvent:(id)arg1;
- (id)initWithReliabilityLogInfo:(id)arg1 reliabilityLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

