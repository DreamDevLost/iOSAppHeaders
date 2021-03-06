//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "IGDirectOutgoingUpdateListener.h"

@class NSString;

@interface IGDirectOutgoingUpdateListenerAnnouncer : FBAnnouncerBase <IGDirectOutgoingUpdateListener>
{
}

- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

