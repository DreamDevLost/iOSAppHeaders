//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCallRemoteMessageHandler, NSArray, NSNumber, NSString;

@protocol IGCallRemoteMessageHandlerDelegate <NSObject>
- (void)messageHandler:(IGCallRemoteMessageHandler *)arg1 confirmReceiptOfMessageType:(NSString *)arg2 sessionId:(NSString *)arg3 transactionId:(NSString *)arg4 version:(NSNumber *)arg5 serverInfoData:(NSString *)arg6 successHandler:(void (^)(void))arg7 failureHandler:(void (^)(NSError *))arg8;
- (void)messageHandlerDidServerMediaUpdate:(IGCallRemoteMessageHandler *)arg1 versionNumber:(NSNumber *)arg2 mediaUpdates:(NSArray *)arg3;
- (void)messageHandlerDidDismiss:(IGCallRemoteMessageHandler *)arg1 reason:(NSNumber *)arg2;
- (void)messageHandler:(IGCallRemoteMessageHandler *)arg1 didStateTransitionForParticipant:(NSString *)arg2 fromState:(long long)arg3 toState:(long long)arg4;
- (void)messageHandler:(IGCallRemoteMessageHandler *)arg1 didRingForSessionId:(NSString *)arg2;
- (void)messageHandler:(IGCallRemoteMessageHandler *)arg1 didReceiveEncodedServerDataInfo:(NSString *)arg2;
@end

