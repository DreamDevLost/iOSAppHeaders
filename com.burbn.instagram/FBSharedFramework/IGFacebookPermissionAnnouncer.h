//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnnouncer;

@interface IGFacebookPermissionAnnouncer : NSObject
{
    IGAnnouncer *_announcer;
}

@property(readonly, nonatomic) IGAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void).cxx_destruct;
- (void)announcePermissionRemoved;
- (void)announcePermissionAcquired;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

@end

