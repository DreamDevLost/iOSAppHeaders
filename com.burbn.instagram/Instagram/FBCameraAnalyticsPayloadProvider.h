//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCameraAnalyticsPayloadProviding.h"

@class FBCameraAnalyticsPayload, NSString;

@interface FBCameraAnalyticsPayloadProvider : NSObject <FBCameraAnalyticsPayloadProviding>
{
    struct mutex _accessMutex;
    FBCameraAnalyticsPayload *_analyticsPayload;
}

+ (id)newWithProductName:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBCameraAnalyticsPayload *cameraAnalyticsPayload;
@property(copy) NSString *cameraSessionId;
- (id)initWithProductName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

