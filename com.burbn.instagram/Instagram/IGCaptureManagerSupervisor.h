//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

@interface IGCaptureManagerSupervisor : NSObject
{
    NSPointerArray *_captureManagerStack;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_captureManagerWithDepth:(unsigned long long)arg1;
- (id)previousCaptureManager;
- (id)currentCaptureManager;
- (void)removeCaptureManager:(id)arg1;
- (void)addCaptureManager:(id)arg1;
- (id)_init;

@end

