//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGImageRequestSummary, IGRemoteImageView, NSError, NSNumber;

@protocol IGRemoteImageViewDelegate <NSObject>
- (void)remoteImageView:(IGRemoteImageView *)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)remoteImageView:(IGRemoteImageView *)arg1 didFailToLoadImageWithError:(NSError *)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
- (void)remoteImageView:(IGRemoteImageView *)arg1 didLoadPreviewWithProgressiveJPEGScanNumber:(NSNumber *)arg2;
- (void)remoteImageView:(IGRemoteImageView *)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
@end
