//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGTaggingSearchDetailedNoResultViewModel;

@interface IGTaggingSearchDetailedNoResultSectionController : IGListSectionController
{
    IGTaggingSearchDetailedNoResultViewModel *_viewModel;
}

@property(readonly, nonatomic) IGTaggingSearchDetailedNoResultViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@end
