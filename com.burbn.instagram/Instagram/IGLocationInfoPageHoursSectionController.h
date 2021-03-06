//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGInfoDetailHoursViewModel, IGUserSession, NSMutableArray;

@interface IGLocationInfoPageHoursSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    IGInfoDetailHoursViewModel *_hoursViewModel;
    _Bool _shouldExpand;
    NSMutableArray *_hoursValues;
}

- (void).cxx_destruct;
- (void)_parseHoursModel:(id)arg1;
- (void)shouldExpandHours:(_Bool)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 hoursViewModel:(id)arg2;

@end

