//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUploadTaskStateMachine : NSObject
{
    long long _status;
}

- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)transitToStatus:(long long)arg1;
- (_Bool)canTransitToStatus:(long long)arg1;
- (long long)status;
- (id)init;

@end
