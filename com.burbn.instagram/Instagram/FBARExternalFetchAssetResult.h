//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class NSData, NSURL;

@interface FBARExternalFetchAssetResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSData *_imageData_imageData;
    NSURL *_videoURL_videoURL;
}

+ (id)videoURLWithVideoURL:(id)arg1;
+ (id)imageDataWithImageData:(id)arg1;
- (void).cxx_destruct;
- (void)matchImageData:(CDUnknownBlockType)arg1 videoURL:(CDUnknownBlockType)arg2;

@end

