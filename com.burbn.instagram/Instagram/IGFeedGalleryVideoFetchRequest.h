//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedGalleryAssetFetchRequest.h"

@class IGVideoConfiguration, NSString, PHAsset;

@interface IGFeedGalleryVideoFetchRequest : NSObject <IGFeedGalleryAssetFetchRequest>
{
    int _pendingRequestID;
    IGVideoConfiguration *_videoConfiguration;
    PHAsset *_asset;
    id <IGFeedGalleryAssetFetchRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFeedGalleryAssetFetchRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetch;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

