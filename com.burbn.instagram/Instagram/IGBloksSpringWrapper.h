//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDynamics1D, NSNumber;

@interface IGBloksSpringWrapper : NSObject
{
    IGDynamics1D *_spring;
    NSNumber *_fromValue;
    _Bool _finished;
    CDUnknownBlockType _updateCallback;
    CDUnknownBlockType _completionCallback;
}

- (void).cxx_destruct;
- (void)_didEnd:(_Bool)arg1;
- (void)_didChange:(double)arg1;
- (_Bool)isFinished;
- (void)setUpdateCallback:(CDUnknownBlockType)arg1 completionCallback:(CDUnknownBlockType)arg2;
- (void)setFromValue:(double)arg1;
- (void)setEndValue:(double)arg1;
- (double)currentValue;
- (void)cancel;

@end
