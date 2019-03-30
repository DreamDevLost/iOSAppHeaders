//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSaveCoordinating.h"
#import "IGUserSessionObject.h"

@class IGSaveStatusListenerAnnouncer, NSString;

@interface IGSaveCoordinator : NSObject <IGSaveCoordinating, IGUserSessionObject>
{
    id <IGAPIClient> _networker;
    IGSaveStatusListenerAnnouncer *_saveStatusListenerAnnouncer;
}

- (void).cxx_destruct;
- (void)saveFeedItem:(id)arg1 saveStatus:(_Bool)arg2 addCollectionIds:(id)arg3 removeCollectionIds:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6 analyticsModule:(id)arg7;
- (void)saveProductItem:(id)arg1 saveStatus:(_Bool)arg2 productSaveStatusStore:(id)arg3 merchantId:(id)arg4 mediaId:(id)arg5 logger:(id)arg6 extras:(id)arg7 successHandler:(CDUnknownBlockType)arg8 failureHandler:(CDUnknownBlockType)arg9 analyticsModule:(id)arg10;
- (id)initWithNetworker:(id)arg1 saveStatusListenerAnnouncer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
