//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGUserSession, NSMutableSet, NSString;

@interface IGVideoPlayerManager : NSObject <IGUserSessionObject>
{
    IGUserSession *_userSession;
    NSMutableSet *_inUsePool;
    NSMutableSet *_availablePool;
}

@property(readonly, nonatomic) NSMutableSet *availablePool; // @synthesize availablePool=_availablePool;
@property(readonly, nonatomic) NSMutableSet *inUsePool; // @synthesize inUsePool=_inUsePool;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_notifyPlayerUsageChange;
- (void)finishUsingPlayer:(id)arg1;
- (id)dequeueReusablePlayer;
@property(readonly, nonatomic) long long playerInUseCount;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

