//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGAccountPrivacyChangeListenerAnnouncer, IGUserSession, NSString;

@interface IGAccountPrivacyUpdater : NSObject <IGUserSessionObject>
{
    IGUserSession *_userSession;
    IGAccountPrivacyChangeListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_presentRateLimitPrivacyWarningWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentRateLimitInformativeAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_confirmedUpdatePrivacy:(long long)arg1 completion:(CDUnknownBlockType)arg2 errorVC:(id)arg3;
- (void)updatePrivacy:(long long)arg1 completion:(CDUnknownBlockType)arg2 errorVC:(id)arg3 alertOnPublic:(_Bool)arg4;
- (long long)privacyStatus;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

