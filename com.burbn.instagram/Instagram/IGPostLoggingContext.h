//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGPostAnalyticsProvider.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSMutableDictionary, NSString;

@interface IGPostLoggingContext : NSObject <IGPostAnalyticsProvider, NSCoding, NSCopying>
{
    id <IGAnalyticsUploadWaterfall> _waterfall;
    NSString *_postId;
    long long _dataType;
    NSMutableDictionary *_carouselItemUploadIdToDataType;
    long long _entryPointType;
    _Bool _newLoggingEventsEnabled;
    NSDate *_creationDate;
}

- (void).cxx_destruct;
- (id)createEventWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dataTypeForCarouselUploadId:(id)arg1;
- (_Bool)uploadIdIsCarouselItem:(id)arg1;
- (void)setCarouselDataType:(long long)arg1 forUploadId:(id)arg2;
- (id)carouselDataTypes;
- (_Bool)isCarouselUpload;
- (_Bool)newLoggingEventsEnabled;
- (void)notifyUserCancelShareAction;
- (void)notifyUserShareActionWithShareType:(long long)arg1;
- (long long)dataType;
- (long long)entryPointType;
- (id)postId;
@property(readonly, copy, nonatomic) NSString *waterfallId;
- (id)initWithWaterfall:(id)arg1 postId:(id)arg2 dataType:(long long)arg3 entryPointType:(long long)arg4 newLoggingEventsEnabled:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

