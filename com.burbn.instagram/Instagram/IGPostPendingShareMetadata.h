//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDate, NSString, NSURL;

@interface IGPostPendingShareMetadata : FBValueObject <NSCopying, NSCoding>
{
    NSDate *_shareDate;
    NSArray *_overlayTapModels;
    NSURL *_linkUrl;
    NSString *_mediaAudience;
}

@property(readonly, copy, nonatomic) NSString *mediaAudience; // @synthesize mediaAudience=_mediaAudience;
@property(readonly, copy, nonatomic) NSURL *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(readonly, copy, nonatomic) NSArray *overlayTapModels; // @synthesize overlayTapModels=_overlayTapModels;
@property(readonly, copy, nonatomic) NSDate *shareDate; // @synthesize shareDate=_shareDate;
- (void).cxx_destruct;
- (id)initWithShareDate:(id)arg1 overlayTapModels:(id)arg2 linkUrl:(id)arg3 mediaAudience:(id)arg4;

@end

