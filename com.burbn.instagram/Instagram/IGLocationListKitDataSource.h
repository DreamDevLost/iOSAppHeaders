//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"
#import "IGTabControlDelegate.h"

@class IG4BLogger, IGInfoLinkedBusinessViewModel, IGLocation, IGLocationInfoPageModel, IGLocationLinkedBusinessHeaderSectionController, IGLocationMainFeedDataStore, IGReel, IGSpinnerLabelViewModel, IGUser, IGUserSession, NSArray, NSString, NSURL;

@interface IGLocationListKitDataSource : NSObject <IGTabControlDelegate, IGListAdapterDataSource>
{
    id <IGDiscoverySectionLoggingProvider> _discoveryLoggingProvider;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGLocation *_location;
    IGLocationMainFeedDataStore *_locationMainFeedDataStore;
    IGUser *_user;
    IGUserSession *_userSession;
    id <IGLocationListKitDataSourceDelegate> _delegate;
    id <IGLocationHeaderSectionControllerDelegate> _mapViewDelegate;
    id <IGLocationInfoPageHeaderSectionControllerDelegate> _locationHeaderDelegate;
    long long _feedType;
    NSArray *_availableTabs;
    IGSpinnerLabelViewModel *_spinnerViewModel;
    IGLocationInfoPageModel *_infoPageModel;
    IGInfoLinkedBusinessViewModel *_linkedBusinessViewModel;
    IGReel *_reel;
    NSURL *_defaultImageURL;
    IG4BLogger *_templateLogger;
    _Bool _showTailLoadingIndicator;
    NSArray *_allItems;
    IGUser *_linkedBusinessUser;
    IGLocationLinkedBusinessHeaderSectionController *_linkedBusinessSectionController;
}

@property(retain, nonatomic) IGLocationLinkedBusinessHeaderSectionController *linkedBusinessSectionController; // @synthesize linkedBusinessSectionController=_linkedBusinessSectionController;
@property(retain, nonatomic) IGUser *linkedBusinessUser; // @synthesize linkedBusinessUser=_linkedBusinessUser;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool showTailLoadingIndicator; // @synthesize showTailLoadingIndicator=_showTailLoadingIndicator;
@property(readonly, copy, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
- (void).cxx_destruct;
- (id)_tabControlViewModel;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (id)_parseLinkedBusinessDict:(id)arg1;
- (id)_getAvailableTabs;
- (long long)_selectedIndexforFeedType:(long long)arg1;
- (void)_updateItems;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)hideLinkedBusiness;
- (void)configureLocationMainFeedWithDataStore:(id)arg1;
- (void)updateDefaultImageURL:(id)arg1;
- (void)updateReel:(id)arg1;
- (void)updateInfoPage:(id)arg1;
- (void)updateLinkedBusiness:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initWithUserSession:(id)arg1 location:(id)arg2 layoutConfig:(struct IGGridLayoutConfiguration)arg3 locationFeedType:(long long)arg4 availableTabs:(id)arg5 loggingProvider:(id)arg6 IG4BLogger:(id)arg7 delegate:(id)arg8 mapViewDelegate:(id)arg9 locationHeaderDelegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
