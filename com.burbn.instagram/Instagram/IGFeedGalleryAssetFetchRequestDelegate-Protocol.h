//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaMetadata, NSError;

@protocol IGFeedGalleryAssetFetchRequestDelegate <NSObject>
- (void)galleryAssetFetchRequest:(id <IGFeedGalleryAssetFetchRequest>)arg1 didUpdateProgress:(double)arg2;
- (void)galleryAssetFetchRequest:(id <IGFeedGalleryAssetFetchRequest>)arg1 didFailWithError:(NSError *)arg2;
- (void)galleryAssetFetchRequest:(id <IGFeedGalleryAssetFetchRequest>)arg1 didFetchMediaMetadata:(IGMediaMetadata *)arg2;
@end
