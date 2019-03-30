//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDataSource.h"

@class IG4BLogger, IGLocalBusinessCardConfiguration, IGLocalBusinessDataController, IGLocalBusinessLocationCellViewModel, IGLocalBusinessMapViewModel, IGLocalBusinessMapViewSectionController, IGSessionTracker, IGUserSession, NSArray, NSString;

@interface IGLocalBusinessCardListKitDataSource : NSObject <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGLocalBusinessMapViewSectionController *_mapSectionController;
    IGLocalBusinessCardConfiguration *_config;
    IGLocalBusinessMapViewModel *_mapModel;
    IGLocalBusinessDataController *_dataController;
    NSArray *_businessCardModels;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGSessionTracker *_sessionTracker;
    IGLocalBusinessLocationCellViewModel *_locationViewModel;
    IG4BLogger *_ig4bLogger;
    id <IGLocalBusinessCardViewSectionControllerDelegate> _cardSectionControllerDelegate;
    id <IGLocalBusinessCardPlaceSearchSectionControllerDelegate> _searchSectionControllerDelegate;
    id <IGLocalBusinessNullStateSectionControllerDelegate> _nullStateSectionControllerDelegate;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)updateMapViewToShowRefreshButton:(_Bool)arg1;
- (void)updateMapToRegion:(CDStruct_b7cb895d)arg1;
- (id)initWithUserSession:(id)arg1 mapRegion:(CDStruct_b7cb895d)arg2 dataController:(id)arg3 layoutConfiguration:(struct IGGridLayoutConfiguration)arg4 businessCardConfiguration:(id)arg5 ig4bLogger:(id)arg6 mapViewDelegate:(id)arg7 cardSectionControllerDelegate:(id)arg8 searchSectionControllerDelegate:(id)arg9 nullStateSectionControllerDelegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

