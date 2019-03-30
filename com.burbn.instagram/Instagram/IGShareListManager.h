//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGShareServiceConfigureManagerDelegate.h"

@class IGShareServiceConfigureManager, IGUserSession, IGZeroRatingHandler, NSArray, NSString;

@interface IGShareListManager : NSObject <IGShareServiceConfigureManagerDelegate>
{
    _Bool _isCrossSharing;
    _Bool _locationEnabled;
    _Bool _isBrandedContent;
    _Bool _isShareWithFavorites;
    _Bool _facebookSharingEnabled;
    _Bool _showFullList;
    id <IGShareListManagerDelegate> _delegate;
    long long _shortListCount;
    IGUserSession *_userSession;
    NSArray *_services;
    IGShareServiceConfigureManager *_configureManager;
    IGZeroRatingHandler *_zeroRatingHandler;
    long long _mediaType;
}

+ (id)shareListManagerForComposition:(id)arg1 userSession:(id)arg2;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) IGZeroRatingHandler *zeroRatingHandler; // @synthesize zeroRatingHandler=_zeroRatingHandler;
@property(retain, nonatomic) IGShareServiceConfigureManager *configureManager; // @synthesize configureManager=_configureManager;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) long long shortListCount; // @synthesize shortListCount=_shortListCount;
@property(nonatomic) _Bool showFullList; // @synthesize showFullList=_showFullList;
@property(nonatomic) __weak id <IGShareListManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool facebookSharingEnabled; // @synthesize facebookSharingEnabled=_facebookSharingEnabled;
@property(readonly, nonatomic) _Bool isShareWithFavorites; // @synthesize isShareWithFavorites=_isShareWithFavorites;
@property(readonly, nonatomic) _Bool isBrandedContent; // @synthesize isBrandedContent=_isBrandedContent;
@property(nonatomic) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
- (void).cxx_destruct;
- (_Bool)_serviceWillShare:(id)arg1;
- (id)_orderedServiceTypesForServiceList:(id)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (void)reloadData;
- (id)viewControllerForShareConfiguration;
- (long long)indexForServiceType:(long long)arg1;
- (id)analyticsExtra;
- (id)servicesSharing;
- (id)sharingInfo;
- (void)updateShareServiceWillShare:(_Bool)arg1 index:(long long)arg2 userInteraction:(_Bool)arg3 surface:(long long)arg4;
- (void)_updateShareServiceDisabled:(_Bool)arg1 index:(long long)arg2;
- (void)toggleShareServiceAtIndex:(long long)arg1 surface:(long long)arg2;
- (_Bool)readyToShare;
- (id)shareServiceAtIndex:(long long)arg1;
- (long long)numberOfShareServices;
- (void)_resetServicesDisablity;
- (void)_updateShareServiceDisabled:(_Bool)arg1 exceptService:(long long)arg2 surface:(long long)arg3;
- (void)configureServicesDisabilityFromSurface:(long long)arg1;
- (void)setIsCrossSharing:(_Bool)arg1 surface:(long long)arg2;
- (void)setIsShareWithFavorites:(_Bool)arg1 surface:(long long)arg2;
- (void)setIsBrandedContent:(_Bool)arg1 surface:(long long)arg2;
- (void)setPresentationStyle:(long long)arg1;
- (id)initWithMediaMetadata:(id)arg1 userSession:(id)arg2;
- (id)initWithUserSession:(id)arg1 mediaType:(long long)arg2 shareType:(long long)arg3 sharingInfo:(id)arg4 locationAvailable:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
