//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGLocationHeaderViewDelegate.h"

@class IG4BLogger, IGLocation, IGUserSession, NSString;

@interface IGLocationHeaderSectionController : IGListSectionController <IGLocationHeaderViewDelegate>
{
    _Bool _hasExploreMapOption;
    IG4BLogger *_logger;
    _Bool _showZoomedInMap;
    id <IGLocationHeaderSectionControllerDelegate> _mapViewDelegate;
    IGUserSession *_userSession;
    IGLocation *_location;
}

@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGLocationHeaderSectionControllerDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
- (void).cxx_destruct;
- (void)locationHeaderViewMapDidTapExploreMap:(id)arg1;
- (void)locationHeaderViewMapTapped:(id)arg1;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 exploreMapOption:(_Bool)arg2 ig4bLogger:(id)arg3 mapViewDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

