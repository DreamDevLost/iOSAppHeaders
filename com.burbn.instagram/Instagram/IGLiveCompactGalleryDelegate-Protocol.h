//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveCompactGalleryViewController, NSIndexPath, PHAsset, UIImage;

@protocol IGLiveCompactGalleryDelegate <NSObject>
- (void)compactGalleryDidAllowPhotoAccess:(IGLiveCompactGalleryViewController *)arg1;
- (void)compactGallery:(IGLiveCompactGalleryViewController *)arg1 didPickAsset:(PHAsset *)arg2 thumbnail:(UIImage *)arg3 indexPath:(NSIndexPath *)arg4;
- (void)compactGalleryDidDeselect:(IGLiveCompactGalleryViewController *)arg1;
@end

