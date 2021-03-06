//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGServiceHelperProtocol.h"

@class IGLassoHelper, IGLassoInfoFetcher, IGUser, IGUserSession, NSString;

@interface IGLassoServiceHelper : NSObject <IGServiceHelperProtocol>
{
    IGUserSession *_userSession;
    IGUser *_currentUser;
    id <IGAPIClient> _networker;
    IGLassoInfoFetcher *_lassoInfoFetcher;
    IGLassoHelper *_lassoHelper;
    _Bool _isConfiguredOnlyOnServer;
    NSString *_lassoHandleName;
    _Bool _isAvailableForSharing;
    _Bool _wantsToShare;
    _Bool _disabled;
}

+ (id)shortServiceName;
+ (id)sharedHelperForUserSession:(id)arg1;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool wantsToShare; // @synthesize wantsToShare=_wantsToShare;
@property(nonatomic) _Bool isAvailableForSharing; // @synthesize isAvailableForSharing=_isAvailableForSharing;
- (void).cxx_destruct;
- (void)fetchAutoCrossPosting;
- (void)setAutoCrossPosting:(_Bool)arg1;
- (_Bool)autoCrossPosting;
- (void)fetchLassoUserNameWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)logoutAndUnlinkOnSurface:(unsigned long long)arg1;
- (void)logoutAndUnlink;
- (void)logout;
- (id)sharingInfo;
- (id)detailText;
- (_Bool)shouldUseSubtitleCellStyle;
- (_Bool)isConfiguredOnlyOnServer;
- (_Bool)isConfiguredForCrossPosting;
- (_Bool)hidden;
- (_Bool)isConfigured;
- (_Bool)supportsMediaType:(long long)arg1;
- (_Bool)isAvailableInCurrentLocale;
- (void)setupServerLinkage:(id)arg1;
- (_Bool)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (_Bool)requiresLocationCoordinate;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1;
- (id)shareKey;
- (id)serviceName;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

