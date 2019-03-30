//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBARServiceConfiguration.h"
#import "FBARServiceConfigurationCxx.h"

@class NSString;

@interface FBARFaceTrackingDataProviderConfiguration : NSObject <FBARServiceConfiguration, FBARServiceConfigurationCxx>
{
    unsigned char _executionMode;
    id <FBARFaceTrackingModelConfiguring> _modelConfiguration;
    id <FBARFaceTrackingDataProviderEffectDescriptor> _effectDescriptor;
    id <FBARFaceTrackingDataProviderDelegate> _delegate;
}

+ (struct ServiceType)serviceType;
+ (_Bool)supportsSecureCoding;
+ (id)newWithModelConfiguration:(id)arg1 executionMode:(unsigned char)arg2 effectDescriptor:(id)arg3 delegate:(id)arg4;
+ (id)newWithModelConfiguration:(id)arg1 effectDescriptor:(id)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) __weak id <FBARFaceTrackingDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FBARFaceTrackingDataProviderEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
@property(readonly, nonatomic) unsigned char executionMode; // @synthesize executionMode=_executionMode;
@property(readonly, nonatomic) id <FBARFaceTrackingModelConfiguring> modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic) Optional_f0f72821 engineServiceConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelConfiguration:(id)arg1 executionMode:(unsigned char)arg2 effectDescriptor:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

