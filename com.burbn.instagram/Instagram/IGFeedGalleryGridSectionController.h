//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListGenericSectionController.h"

#import "IGFeedGalleryMultiSelectListener.h"
#import "IGListSupplementaryViewSource.h"

@class IGFeedGallerySelectionController, IGFeedGalleryToolbox, NSString;

@interface IGFeedGalleryGridSectionController : IGListGenericSectionController <IGFeedGalleryMultiSelectListener, IGListSupplementaryViewSource>
{
    IGFeedGalleryToolbox *_galleryToolbox;
    struct IGGridLayoutConfiguration _layoutConfiguration;
    IGFeedGallerySelectionController *_selectionController;
}

- (void).cxx_destruct;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (void)feedGallerySelectionControllerDidChangeSelectedAssets:(id)arg1;
- (void)feedGallerySelectionController:(id)arg1 didToggleMultiSelectEnabled:(_Bool)arg2;
- (void)_updateSelectionForVisibleCells;
- (void)_configureSelectionStateForCell:(id)arg1;
- (struct CGSize)_gridSizeForItemAtIndex:(long long)arg1;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithGalleryToolbox:(id)arg1 layoutConfiguration:(struct IGGridLayoutConfiguration)arg2 selectionController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

