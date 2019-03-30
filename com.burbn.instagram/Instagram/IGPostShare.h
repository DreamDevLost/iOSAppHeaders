//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGPostPendingShareMetadata, IGPostSession, NSData, NSString, NSURL;

@interface IGPostShare : NSObject <NSCopying>
{
    IGPostSession *_postSession;
    NSString *_shareId;
    id <IGPostDataProvider> _postDataProvider;
    NSString *_postId;
}

@property(readonly, copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)retry;
- (void)cancelFromUserAction:(_Bool)arg1;
- (id)uploadIds;
@property(readonly, nonatomic) NSURL *anyRenderedVideoUrl;
@property(readonly, nonatomic) NSData *anyRenderedImageData;
@property(readonly, nonatomic) NSData *previewImageData;
@property(readonly, nonatomic) IGPostPendingShareMetadata *pendingShareMetadata;
@property(readonly, copy, nonatomic) NSString *configureUserPk;
@property(readonly, copy, nonatomic) NSString *shareUserPk;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) long long mediaDataType;
@property(readonly, nonatomic) long long shareType;
@property(readonly, nonatomic) long long status;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShareId:(id)arg1 postSession:(id)arg2 postDataProvider:(id)arg3;

@end

