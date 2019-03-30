//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryItemType.h"
#import "IGVideoURLProvider.h"

@class IGDate, IGUser, NSArray, NSData, NSString, NSURL;

@interface IGPendingStoryItem : NSObject <IGVideoURLProvider, IGStoryItemType>
{
    id <IGStoryImageProvider> _pendingPhoto;
    id <IGStoryImageProvider> _pendingMediaOverlay;
    IGDate *_takenAtDate;
    IGDate *_expiringAtDate;
    IGUser *_user;
    long long _mediaType;
    NSArray *_overlayTapModels;
    NSURL *_storyLinkUrl;
    double _totalDuration;
    NSString *_uploadId;
    _Bool _newUploadInfra;
    long long _mediaAudience;
    NSURL *_videoDataFileURL;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) NSData *dashManifestData;
- (id)isAudioDetected;
- (id)representationIdStringForVideoURL:(id)arg1;
- (id)videoURLForCurrentNetworkConditions;
- (id)videoURLForVideoVersion:(long long)arg1;
- (id)allVideoURLs;
- (id)crossPostDenyReason;
- (_Bool)isInternal;
- (id)storyAttributionUser;
- (_Bool)supportsStoryReactions;
- (long long)mediaAudience;
- (_Bool)isBrandedContent;
- (_Bool)isSponsored;
- (_Bool)isNewUploadInfra;
- (id)pendingUploadId;
- (id)feedItem;
- (double)totalDuration;
- (_Bool)shouldLoop;
- (id)votersModels;
- (long long)viewerCount;
- (id)viewers;
- (id)arEffectStoryLink;
- (id)felixLinkMediaId;
- (id)storyLinkUrl;
- (id)tapModels;
- (id)mediaID;
- (long long)mediaType;
- (id)mediaOverlay;
- (id)video;
- (id)photo;
- (id)user;
- (id)takenAtDate;
- (id)expiringAtDate;
- (id)initWithTakenAtDate:(id)arg1 user:(id)arg2 image:(id)arg3 overlayImage:(id)arg4 mediaType:(long long)arg5 overlayTapModels:(id)arg6 storyLinkUrl:(id)arg7 totalDuration:(double)arg8 uploadId:(id)arg9 newUploadInfra:(_Bool)arg10 mediaAudience:(long long)arg11 videoDataFileURL:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
