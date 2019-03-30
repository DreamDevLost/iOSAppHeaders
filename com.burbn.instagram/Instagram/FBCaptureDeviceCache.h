//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _FBCaptureDeviceCacheAuthorizationStatus, _FBCaptureDeviceCacheRequestAccess;

@interface FBCaptureDeviceCache : NSObject
{
    _FBCaptureDeviceCacheAuthorizationStatus *_authorizationStatus;
    _FBCaptureDeviceCacheRequestAccess *_requestAccess;
    long long _mediaType;
}

+ (id)sharedVideoCache;
+ (id)sharedAudioCache;
- (void).cxx_destruct;
- (void)requestAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)authorizationStatus;
- (id)initWithCaptureDeviceClass:(Class)arg1 mediaType:(long long)arg2 notificationCenter:(id)arg3;

@end

