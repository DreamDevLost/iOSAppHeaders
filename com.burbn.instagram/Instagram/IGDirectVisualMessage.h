//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageActionSummaryProvider.h"
#import "IGDirectMessageExpirable.h"
#import "IGDirectMessageProtocol.h"
#import "IGDirectMessageReplyable.h"
#import "IGMediaPreloaderItem.h"
#import "IGPhotosRenderedTracking.h"

@class IGCreativeConfig, IGDirectMessageMetadata, IGDirectVisualMessageActionSummary, IGDirectVisualMessageViewModeSelectorModel, IGPhoto, IGStoryAttributionModel, IGVideo, NSArray, NSDate, NSOrderedSet, NSString, NSURL, UIImage;

@interface IGDirectVisualMessage : NSObject <IGDirectMessageActionSummaryProvider, IGDirectMessageExpirable, IGDirectMessageProtocol, IGDirectMessageReplyable, IGMediaPreloaderItem, IGPhotosRenderedTracking>
{
    NSURL *_initialUploadVideoURL;
    NSString *_tombstoneTextCaption;
    NSArray *_likers;
    IGDirectMessageMetadata *_metadata;
    IGPhoto *_rawPhoto;
    IGVideo *_rawVideo;
    IGDirectVisualMessageViewModeSelectorModel *_viewMode;
    NSArray *_textLabelCaptions;
    long long _seenCountForCurrentUser;
    long long _replyType;
    IGDirectVisualMessageActionSummary *_actionSummary;
    double _customPlaybackDuration;
    NSDate *_mediaUrlGoesStaleDate;
    NSString *_organicTrackingToken;
    NSDate *_archivedMediaDate;
    IGStoryAttributionModel *_attributionModel;
    long long _rawMediaType;
    NSString *_rawMediaId;
    NSOrderedSet *_rawViewers;
    NSArray *_rawTapModels;
    IGCreativeConfig *_creativeConfig;
    UIImage *_pendingUploadImage;
    NSString *_dependentMediaUploadId;
}

+ (void)load;
@property(readonly, nonatomic) NSString *dependentMediaUploadId; // @synthesize dependentMediaUploadId=_dependentMediaUploadId;
@property(readonly, nonatomic) UIImage *pendingUploadImage; // @synthesize pendingUploadImage=_pendingUploadImage;
@property(readonly, nonatomic) IGCreativeConfig *creativeConfig; // @synthesize creativeConfig=_creativeConfig;
@property(readonly, copy, nonatomic) NSArray *rawTapModels; // @synthesize rawTapModels=_rawTapModels;
@property(readonly, copy, nonatomic) NSOrderedSet *rawViewers; // @synthesize rawViewers=_rawViewers;
@property(readonly, copy, nonatomic) NSString *rawMediaId; // @synthesize rawMediaId=_rawMediaId;
@property(readonly, nonatomic) long long rawMediaType; // @synthesize rawMediaType=_rawMediaType;
@property(readonly, nonatomic) IGStoryAttributionModel *attributionModel; // @synthesize attributionModel=_attributionModel;
@property(readonly, nonatomic) NSDate *archivedMediaDate; // @synthesize archivedMediaDate=_archivedMediaDate;
@property(readonly, copy, nonatomic) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly, nonatomic) NSDate *mediaUrlGoesStaleDate; // @synthesize mediaUrlGoesStaleDate=_mediaUrlGoesStaleDate;
@property(readonly, nonatomic) double customPlaybackDuration; // @synthesize customPlaybackDuration=_customPlaybackDuration;
@property(readonly, copy, nonatomic) IGDirectVisualMessageActionSummary *actionSummary; // @synthesize actionSummary=_actionSummary;
@property(readonly, nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(readonly, nonatomic) long long seenCountForCurrentUser; // @synthesize seenCountForCurrentUser=_seenCountForCurrentUser;
@property(readonly, copy, nonatomic) NSString *tombstoneTextCaption; // @synthesize tombstoneTextCaption=_tombstoneTextCaption;
@property(readonly, nonatomic) NSArray *textLabelCaptions; // @synthesize textLabelCaptions=_textLabelCaptions;
@property(readonly, nonatomic) IGDirectVisualMessageViewModeSelectorModel *viewMode; // @synthesize viewMode=_viewMode;
@property(readonly, nonatomic) IGVideo *rawVideo; // @synthesize rawVideo=_rawVideo;
@property(readonly, nonatomic) IGPhoto *rawPhoto; // @synthesize rawPhoto=_rawPhoto;
@property(readonly, nonatomic) IGDirectMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSArray *likers; // @synthesize likers=_likers;
- (void).cxx_destruct;
- (id)mediaId;
- (id)mediaOverlay;
- (id)video;
- (id)photo;
- (long long)mediaType;
- (id)pk;
- (id)currentActionSummary;
- (id)replyableConfigurationMediaViewModeModel;
- (id)replyableConfigurationMedia;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)expirable;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)_copyWithPreservedPendingInformation;
- (id)copyWithTapModels:(id)arg1;
- (id)expiredCopy;
- (id)copyWithPreservedInfoFromUnexpiredMessage:(id)arg1;
- (id)copyWithSeenCountForCurrentUser:(long long)arg1 isExpired:(_Bool)arg2;
- (id)copyByMergingWithServerVersion:(id)arg1;
@property(readonly, nonatomic) NSURL *pendingVideoURL;
- (_Bool)_isValidPendingVideo;
- (_Bool)hasValidPendingMedia;
- (_Bool)isPending;
- (_Bool)isExpired;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessageMetadata:(id)arg1 mediaType:(long long)arg2 viewMode:(id)arg3 replyType:(long long)arg4 textLabelCaptions:(id)arg5 uploadImage:(id)arg6 initialUploadVideoURL:(id)arg7 dependentMediaUploadId:(id)arg8;
- (id)initWithMetadata:(id)arg1 mediaType:(long long)arg2 mediaId:(id)arg3 photo:(id)arg4 video:(id)arg5 viewMode:(id)arg6 textLabelCaptions:(id)arg7 playbackDuration:(double)arg8 mediaUrlGoesStaleDate:(id)arg9 actionSummary:(id)arg10 seenCountForCurrentUser:(long long)arg11 viewers:(id)arg12 replyType:(long long)arg13 organicTrackingToken:(id)arg14 archivedMediaDate:(id)arg15 likers:(id)arg16 attributionModel:(id)arg17 tapModels:(id)arg18 creativeConfig:(id)arg19;
- (_Bool)replayableMessageShouldExpireOnLoad;
- (_Bool)messageWasSentMoreThan24HoursAgo;
- (_Bool)isPermanentlyPlayable;
- (_Bool)isReplayableForCurrentUser;
- (_Bool)isSeenByCurrentUser;
- (_Bool)mediaUrlIsStale;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

