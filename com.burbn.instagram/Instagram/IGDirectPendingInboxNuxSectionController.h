//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGDirectPendingInboxNuxViewModel, IGSeparatorSupplementaryViewSource;

@interface IGDirectPendingInboxNuxSectionController : IGListSectionController
{
    IGDirectPendingInboxNuxViewModel *_viewModel;
    IGSeparatorSupplementaryViewSource *_separatorViewSource;
}

@property(retain, nonatomic) IGSeparatorSupplementaryViewSource *separatorViewSource; // @synthesize separatorViewSource=_separatorViewSource;
@property(readonly, nonatomic) IGDirectPendingInboxNuxViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

@end

