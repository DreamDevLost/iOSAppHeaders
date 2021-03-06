//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUploadTaskListener.h"
#import "IGUploadTaskType.h"

@class NSString;

@interface IGUploadTaskHolder : NSObject <IGUploadTaskListener, IGUploadTaskType>
{
    id <IGUploadTaskType> _task;
    id <IGUploadTaskListener> _listener;
    NSString *_taskId;
    double _progress;
    long long _status;
}

- (void).cxx_destruct;
- (void)uploadTaskDidCancel:(id)arg1;
- (void)uploadTask:(id)arg1 didUpdateWithRenderedVideoUrl:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateWithRenderedImageData:(id)arg2;
- (void)uploadTask:(id)arg1 didUpdateToProgress:(double)arg2;
- (void)uploadTask:(id)arg1 didCompleteWithResponse:(id)arg2 error:(id)arg3;
- (void)_updateStatus;
- (long long)status;
- (double)progress;
- (void)cancel;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)taskId;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

