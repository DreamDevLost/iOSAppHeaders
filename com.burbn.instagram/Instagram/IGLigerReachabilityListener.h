//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLigerProvidesNetworkState.h"
#import "LigerReachabilityCallbackConfiguring.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface IGLigerReachabilityListener : NSObject <FBLigerProvidesNetworkState, LigerReachabilityCallbackConfiguring>
{
    NSObject<OS_dispatch_queue> *_igLigerNetworkSwitchQueue;
    id <LigerReachabilityCallback> _callback;
    long long _reachabilityStatus;
}

+ (id)sharedListener;
@property(nonatomic) long long reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property __weak id <LigerReachabilityCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)_networkStateChanged:(id)arg1;
- (id)networkState;
- (id)_stringFromNetworkReachabilityStatus:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

