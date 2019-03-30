//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGSearchCollectionViewCellDelegate.h"

@class IGSearchResultViewModel, IGUserSession, NSString;

@interface IGSearchResultSectionController : IGListSectionController <IGSearchCollectionViewCellDelegate>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    IGSearchResultViewModel *_viewModel;
    id <IGSearchResultSectionControllerLoggingProvider> _loggingProvider;
    id <IGSearchHideHelperProtocol> _itemHidingHelper;
    _Bool _shouldUseNewDesign;
    id <IGSearchResultSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGSearchResultSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_shouldShowDismissButtonForViewModel:(id)arg1;
- (void)searchCollectionViewCellDidTapDismiss:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapFollow:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapAvatar:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidLongPress:(id)arg1 viewModel:(id)arg2;
- (_Bool)searchCollectionViewCellShouldLongPress:(id)arg1 viewModel:(id)arg2;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 entrypoint:(long long)arg2 loggingProvider:(id)arg3 itemHidingHelper:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

