//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceLogger;

@interface IGDirectMediaPickerPerformanceLogger : NSObject
{
    IGPerformanceLogger *_logger;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)markEndLoadingPhotosSuccess:(_Bool)arg1;
- (void)markStartLoadingPhotos;
- (void)markViewDidLoad;
- (void)markEnd;
- (void)markStart;
- (id)initWithPerformanceLogger:(id)arg1;

@end
