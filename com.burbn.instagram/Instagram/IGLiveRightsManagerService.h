//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGLiveRightsManagerService : NSObject
{
    NSString *_broadcastId;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (void)resumeCopyrightCheckpointedBroadcast;
- (id)initWithBroadcastId:(id)arg1 networker:(id)arg2;

@end

