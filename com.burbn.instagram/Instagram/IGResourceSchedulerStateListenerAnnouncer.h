//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import "IGResourceSchedulerStateListener.h"

@class NSString;

@interface IGResourceSchedulerStateListenerAnnouncer : FBAnnouncerBase <IGResourceSchedulerStateListener>
{
}

- (void)moduleItem:(id)arg1 didTransitionFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)currentModuleDidUpdateToState:(id)arg1 change:(unsigned long long)arg2;
- (void)moduleDidChangeTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
