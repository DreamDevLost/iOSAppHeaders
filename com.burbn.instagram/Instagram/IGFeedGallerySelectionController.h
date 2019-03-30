//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedGalleryAssetFetchRequestDelegate.h"
#import "IGFeedGallerySelectionDelegate.h"

@class IGAnnouncer, IGUserSession, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface IGFeedGallerySelectionController : NSObject <IGFeedGalleryAssetFetchRequestDelegate, IGFeedGallerySelectionDelegate>
{
    IGUserSession *_userSession;
    id <IGFeedGallerySelectionControllerDelegate> _delegate;
    IGAnnouncer *_announcer;
    NSMutableOrderedSet *_selectedAssets;
    NSMutableDictionary *_loadedAssetsMetadata;
    NSMutableDictionary *_pendingAssetRequests;
    _Bool _compositionOutputPending;
    _Bool _multiSelectEnabled;
}

@property(nonatomic) _Bool multiSelectEnabled; // @synthesize multiSelectEnabled=_multiSelectEnabled;
- (void).cxx_destruct;
- (void)_tryFinishPendingCompositionOutput;
- (void)_announceSelectionChanged;
- (void)galleryAssetFetchRequest:(id)arg1 didFetchMediaMetadata:(id)arg2;
- (void)galleryAssetFetchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)galleryAssetFetchRequest:(id)arg1 didUpdateProgress:(double)arg2;
- (void)didTapAsset:(id)arg1 withThumbnail:(id)arg2;
- (void)outputCompositionWhenReady;
- (void)addListener:(id)arg1;
- (id)displayNumberForAsset:(id)arg1;
@property(readonly, nonatomic) long long selectedAssetCount;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

