//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface IGRTCCommonBatchedSessionRequestParams : FBValueObject <NSCopying, NSCoding>
{
    _Bool _restart;
    NSString *_sessionId;
    NSDictionary *_mediaTrackStatus;
    NSDictionary *_productInfo;
    struct CGSize _encodingDimension;
}

@property(readonly, copy, nonatomic) NSDictionary *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly, copy, nonatomic) NSDictionary *mediaTrackStatus; // @synthesize mediaTrackStatus=_mediaTrackStatus;
@property(readonly, nonatomic) struct CGSize encodingDimension; // @synthesize encodingDimension=_encodingDimension;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) _Bool restart; // @synthesize restart=_restart;
- (void).cxx_destruct;
- (id)initWithRestart:(_Bool)arg1 sessionId:(id)arg2 encodingDimension:(struct CGSize)arg3 mediaTrackStatus:(id)arg4 productInfo:(id)arg5;

@end

