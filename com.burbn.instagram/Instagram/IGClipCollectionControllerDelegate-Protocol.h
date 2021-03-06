//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGClipCollectionController, IGVideoClip, IGVideoComposition, NSIndexPath, UIImage, UIView;

@protocol IGClipCollectionControllerDelegate <NSObject>
- (UIView *)draggingContainerViewForClipController:(IGClipCollectionController *)arg1;
- (void)clipControllerDidFinishReordering:(IGClipCollectionController *)arg1;
- (void)clipControllerDidStartReordering:(IGClipCollectionController *)arg1;
- (UIImage *)cachedThumbnailForClip:(IGVideoClip *)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)didTapClipAtIndexPath:(NSIndexPath *)arg1;
- (void)clipController:(IGClipCollectionController *)arg1 didChangeClipOrder:(IGVideoComposition *)arg2;
@end

