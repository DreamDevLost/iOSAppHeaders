//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUploadModel, IGUserSession, NSOrderedSet, NSString;

@interface IGUploadStatusMultiAccountPostViewModel : NSObject
{
    long long _pendingCount;
    long long _successCount;
    long long _failureCount;
    long long _totalCount;
    IGUploadModel *_firstUploadModel;
    IGUserSession *_userSession;
    _Bool _expanded;
    NSString *_uploadID;
    NSOrderedSet *_uploads;
    NSOrderedSet *_shares;
}

@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, copy, nonatomic) NSOrderedSet *shares; // @synthesize shares=_shares;
@property(readonly, copy, nonatomic) NSOrderedSet *uploads; // @synthesize uploads=_uploads;
@property(readonly, copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_calculateCounts;
- (_Bool)_isNewInfra;
- (_Bool)_hasFailedShare;
- (_Bool)shouldShowRemoveButton;
- (_Bool)shouldShowRetryButton;
- (id)progressBarColor;
- (float)progressBarProgress;
- (id)overlayViewImage;
- (id)image;
- (id)statusLabelText;
- (id)firstUploadModel;
- (_Bool)_isWaitingForFirstUploadModel;
- (id)initWithUploadID:(id)arg1 shares:(id)arg2 expanded:(_Bool)arg3 userSession:(id)arg4;
- (id)initWithUploadID:(id)arg1 uploads:(id)arg2 expanded:(_Bool)arg3 userSession:(id)arg4;

@end

