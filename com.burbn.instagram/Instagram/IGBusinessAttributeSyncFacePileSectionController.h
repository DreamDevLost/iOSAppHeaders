//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGBusinessAttributeSyncFacePileViewModel, IGUserSession;

@interface IGBusinessAttributeSyncFacePileSectionController : IGListSectionController
{
    IGUserSession *_userSession;
    IGBusinessAttributeSyncFacePileViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 viewModel:(id)arg2;

@end
