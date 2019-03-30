//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString, UIImage;

@protocol IGQuickCamOutputAsset <NSObject>
@property(retain, nonatomic) NSDictionary *metadata;
@property(copy, nonatomic) NSString *sourceApplication;
@property(nonatomic) unsigned long long faceDetectionState;
@property(nonatomic) long long assetSource;
@property(nonatomic) struct CGSize originalMediaSize;
@property(nonatomic) _Bool isLandscape;
@property(retain, nonatomic) NSDate *creationDate;
@property(nonatomic) long long flashMode;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) NSData *imageData;
@property(retain, nonatomic) UIImage *croppedImageWithEdits;
@property(retain, nonatomic) UIImage *croppedImage;
@property(retain, nonatomic) UIImage *displayImageWithEdits;
@property(retain, nonatomic) UIImage *displayImage;
@property(retain, nonatomic) UIImage *originalImage;
- (long long)devicePosition;
@end

