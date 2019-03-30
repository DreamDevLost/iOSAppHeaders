//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "FBSDKShareMedia.h"
#import "FBSDKSharingValidation.h"
#import "NSSecureCoding.h"

@class FBSDKSharePhoto, NSData, NSString, NSURL, PHAsset;

@interface FBSDKShareVideo : NSObject <NSSecureCoding, FBSDKCopying, FBSDKShareMedia, FBSDKSharingValidation>
{
    NSData *_data;
    PHAsset *_videoAsset;
    NSURL *_videoURL;
    FBSDKSharePhoto *_previewPhoto;
}

+ (_Bool)supportsSecureCoding;
+ (id)videoWithVideoURL:(id)arg1 previewPhoto:(id)arg2;
+ (id)videoWithVideoURL:(id)arg1;
+ (id)videoWithVideoAsset:(id)arg1 previewPhoto:(id)arg2;
+ (id)videoWithVideoAsset:(id)arg1;
+ (id)videoWithData:(id)arg1 previewPhoto:(id)arg2;
+ (id)videoWithData:(id)arg1;
@property(copy, nonatomic) FBSDKSharePhoto *previewPhoto; // @synthesize previewPhoto=_previewPhoto;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) PHAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_validateVideoURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_validateVideoAsset:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)isEqualToShareVideo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
