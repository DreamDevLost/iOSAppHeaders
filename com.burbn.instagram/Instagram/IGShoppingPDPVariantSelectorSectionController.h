//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListBindingSectionController.h"

#import "IGListBindingSectionControllerDataSource.h"
#import "IGListBindingSectionControllerSelectionDelegate.h"
#import "IGListScrollDelegate.h"
#import "IGShoppingPDPProductGroupNetworkerDelegate.h"
#import "IGShoppingVariantPickerDelegate.h"

@class IGShoppingConsumptionFeedItemLogger, IGShoppingPDPProductGroupNetworker, IGShoppingPDPVariant, IGShoppingPDPVariantSelectorViewModel, NSArray, NSString;

@interface IGShoppingPDPVariantSelectorSectionController : IGListBindingSectionController <IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate, IGListScrollDelegate, IGShoppingPDPProductGroupNetworkerDelegate, IGShoppingVariantPickerDelegate>
{
    IGShoppingPDPProductGroupNetworker *_productGroupNetworker;
    IGShoppingPDPVariantSelectorViewModel *_viewModel;
    long long _variantSource;
    NSArray *_variants;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGShoppingPDPVariant *_variantPendingOpen;
    long long _fetchRetryCount;
    double _fetchStartTime;
    double _prematureTapTime;
    id <IGShoppingPDPVariantSelectorSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingPDPVariantSelectorSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shoppingVariantPicker:(id)arg1 didSelectVariantValue:(id)arg2 forVariantDimension:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)shoppingPDPProductGroupNetworker:(id)arg1 didFailWithError:(id)arg2;
- (void)shoppingPDPProductGroupNetworker:(id)arg1 didLoadProductGroup:(id)arg2;
- (void)_presentVariantPickerForVariant:(id)arg1;
- (void)_fetchProductGroup;
- (void)sectionController:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didHighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didDeselectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didSelectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (struct UIEdgeInsets)inset;
- (id)scrollDelegate;
- (id)selectionDelegate;
- (id)dataSource;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

