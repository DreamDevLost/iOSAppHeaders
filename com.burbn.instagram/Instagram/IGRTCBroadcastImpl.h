//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRTCBroadcastIntf.h"

@interface IGRTCBroadcastImpl : NSObject <IGRTCBroadcastIntf>
{
}

+ (id)sessionWithUserSession:(id)arg1 config:(CDStruct_71a17d3c)arg2 broadcastId:(id)arg3 remoteCallMessageHandler:(id)arg4 defaultVideoCropMode:(long long)arg5 loggingContext:(id)arg6 liveWithDelegate:(id)arg7 liveInfoDelegate:(id)arg8;
+ (id)broadcastSessionFactoryWithUserSession:(id)arg1 broadcastId:(id)arg2 config:(CDStruct_71a17d3c)arg3 remoteCallMessageHandler:(id)arg4 loggingContext:(id)arg5 liveWithDelegate:(id)arg6 liveInfoDelegate:(id)arg7;

@end

