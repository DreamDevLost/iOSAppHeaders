//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "IGInAppBadgeListener.h"
#import "IGUserSessionObject.h"

@class NSString;

@interface IGInAppBadgeListenerAnnouncer : FBAnnouncerBase <IGUserSessionObject, IGInAppBadgeListener>
{
}

- (void)inAppBadgeManagerRequiredActionCountDidUpdate;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

