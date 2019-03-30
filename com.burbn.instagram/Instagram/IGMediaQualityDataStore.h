//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface IGMediaQualityDataStore : NSObject
{
    NSURL *_baseURL;
    NSMutableDictionary *_timestamps;
}

- (void).cxx_destruct;
- (id)_urlForMediaId:(id)arg1;
- (id)_urlForImageWithTimestamp:(CDStruct_1b6d18a9)arg1 mediaId:(id)arg2;
- (void)_saveTimestamp:(CDStruct_1b6d18a9)arg1 mediaId:(id)arg2;
- (void)clearImagesForMediaId:(id)arg1;
- (id)timestampsForMediaId:(id)arg1;
- (id)imageWithTimestamp:(CDStruct_1b6d18a9)arg1 mediaId:(id)arg2;
- (void)saveImage:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 mediaId:(id)arg3 error:(id *)arg4;
- (id)init;

@end

