//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectThreadEntryLogging.h"

@class IGUserSession, NSString;

@interface IGDirectPendingInboxAnalyticsLogger : NSObject <IGDirectThreadEntryLogging>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)logDidEnterThreadId:(id)arg1 position:(id)arg2 extras:(id)arg3 entryPoint:(id)arg4;
- (void)logPendingInboxFilterAction:(long long)arg1 currentUserId:(id)arg2 extras:(id)arg3;
- (void)logImpressionForThread:(id)arg1 currentUserId:(id)arg2;
- (void)logImpressionForPendingInboxWithRequestCount:(long long)arg1;
- (void)logDeclineConfirmWithSelectedThreadsCount:(unsigned long long)arg1 selectableThreadsCount:(unsigned long long)arg2 allModeUsed:(_Bool)arg3;
- (void)logAllowMultipleConfirmButtonTapped;
- (void)logDeclineMultipleButtonTapped;
- (void)logDeclineAllButtonTapped;
- (void)logBlockSwipedButtonTapped;
- (void)logDeleteSwipedButtonTapped;
- (void)logDeclineSwipedButtonTapped;
- (void)logAllowSwipedButtonTapped;
@property(readonly, nonatomic) NSString *analyticsModule;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

