//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaShellGalleryController, NSError;

@protocol IGMediaShellGalleryControllerDelegate <NSObject>
- (void)mediaShellController:(IGMediaShellGalleryController *)arg1 loadingGalleryDidFailWithError:(NSError *)arg2;
- (void)mediaShellControllerDidLoadGallery:(IGMediaShellGalleryController *)arg1;
@end

