//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGMediaMetadata, IGSidecarCollectionController;

@protocol IGSidecarMediaCollectionControllerDelegate
- (void)sidecarCollectionControllerDidDeleteItem:(IGSidecarCollectionController *)arg1;
- (void)sidecarCollectionControllerDidLongPress:(IGSidecarCollectionController *)arg1;
- (void)sidecarCollectionController:(IGSidecarCollectionController *)arg1 draggedIntoDeleteZone:(_Bool)arg2;
- (void)sidecarCollectionControllerWillFinishReorderingAssets:(IGSidecarCollectionController *)arg1 orderChanged:(_Bool)arg2 canDelete:(_Bool)arg3;
- (void)sidecarCollectionControllerDidBeginReorderingAssets:(IGSidecarCollectionController *)arg1 canDelete:(_Bool)arg2;
- (void)sidecarCollectionControllerWillBeginReorderingAssets:(IGSidecarCollectionController *)arg1 canDelete:(_Bool)arg2;
- (void)sidecarCollectionController:(IGSidecarCollectionController *)arg1 didReorderAssetsWithFirstAsset:(IGMediaMetadata *)arg2;
- (void)sidecarCollectionController:(IGSidecarCollectionController *)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)sidecarCollectionControllerDidTapAddCell:(IGSidecarCollectionController *)arg1;
@end

