//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@interface IGEmbeddedListItemSectionController : IGListSectionController
{
    id <IGEmbeddedListItemSectionControllerDelegate> _delegate;
    id <IGEmbeddedListItemViewModel> _viewModel;
}

- (void).cxx_destruct;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

