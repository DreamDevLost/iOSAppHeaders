//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInviteFriendsLogger : NSObject
{
}

+ (void)logStoryNudgesNetegoInviteUnitEvent:(id)arg1 entryPoint:(unsigned long long)arg2 flow:(unsigned long long)arg3 senderId:(id)arg4 receiverId:(id)arg5 netEgoId:(id)arg6 netEgoToken:(id)arg7 module:(id)arg8;
+ (void)logInviteNetegoUnitImpressionWithModel:(id)arg1 position:(long long)arg2 senderFBID:(id)arg3;
+ (void)logEvent:(id)arg1 entryPoint:(unsigned long long)arg2 flow:(unsigned long long)arg3 additionalFields:(id)arg4;

@end

