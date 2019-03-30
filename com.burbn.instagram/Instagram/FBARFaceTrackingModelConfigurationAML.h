//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARFaceTrackingModelConfiguring.h"

@class NSDictionary, NSString;

@interface FBARFaceTrackingModelConfigurationAML : NSObject <FBARFaceTrackingModelConfiguring>
{
    NSDictionary *_cxxModelFilePaths;
}

+ (int)cxxFaceTrackerType;
+ (_Bool)supportsSecureCoding;
+ (id)newWithFaceDetectModelFilePath:(id)arg1 faceTrackerModelFilePath:(id)arg2 faceContourModelFilePath:(id)arg3 faceMeshModelFilePath:(id)arg4;
@property(readonly, copy, nonatomic) NSDictionary *cxxModelFilePaths; // @synthesize cxxModelFilePaths=_cxxModelFilePaths;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelFilePaths:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

