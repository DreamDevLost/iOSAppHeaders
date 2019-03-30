//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDiscoverPeopleEntryPointCellDelegate.h"
#import "IGListDisplayDelegate.h"

@class IGDiscoverPeopleEntryPointDataModel, IGUserSession, NSString;

@interface IGDiscoverPeopleEntryPointSectionController : IGListSectionController <IGListDisplayDelegate, IGDiscoverPeopleEntryPointCellDelegate>
{
    IGUserSession *_userSession;
    IGDiscoverPeopleEntryPointDataModel *_dataModel;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)_logEventWithName:(id)arg1;
- (void)_openDiscoverPeoplePage;
- (void)didTapActionButtonOnDiscoverPeopleEntryPointCell:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

