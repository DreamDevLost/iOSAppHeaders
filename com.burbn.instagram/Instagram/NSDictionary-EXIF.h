//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@class CLLocation, NSArray, NSNumber, NSString;

@interface NSDictionary (EXIF)
@property(readonly, nonatomic) NSNumber *ig_sceneType;
@property(readonly, copy, nonatomic) NSString *ig_sceneCaptureType;
@property(readonly, copy, nonatomic) NSString *ig_dateTimeDigitized;
@property(readonly, copy, nonatomic) NSString *ig_dateTimeOriginal;
@property(readonly, copy, nonatomic) NSString *ig_lensMake;
@property(readonly, copy, nonatomic) NSString *ig_lensModel;
- (double)ig_deviceAngle;
@property(readonly, copy, nonatomic) NSString *ig_software;
@property(readonly, nonatomic) CLLocation *ig_location;
@property(readonly, nonatomic) long long ig_imageOrientation;
@property(readonly, nonatomic) NSArray *ig_isoValues;
@end

