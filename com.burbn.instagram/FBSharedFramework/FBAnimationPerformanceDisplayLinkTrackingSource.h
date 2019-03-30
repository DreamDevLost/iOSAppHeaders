//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, FBAnimationPerformanceTrackerDisplayLinkTarget, NSRunLoop;

@interface FBAnimationPerformanceDisplayLinkTrackingSource : NSObject
{
    NSRunLoop *_runLoop;
    CADisplayLink *_displayLink;
    FBAnimationPerformanceTrackerDisplayLinkTarget *_displayLinkTarget;
    _Bool _displayLinkPrepared;
    _Bool _firstDisplayLinkUpdate;
    double _previousFrameTimestamp;
    id <FBAnimationPerformanceDisplayLinkTrackingSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAnimationPerformanceDisplayLinkTrackingSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)frameDidEndWithActualFrameTime:(double)arg1 idealFrameTime:(double)arg2;
- (void)_invalidateDisplayLink;
- (void)_displayLinkUpdate;
- (void)_initializeDisplayLink;
- (void)dealloc;
- (double)lastFrameTimestamp;
- (_Bool)prepareTrackingSource;
- (void)stop;
- (void)start;
- (id)init;

@end

