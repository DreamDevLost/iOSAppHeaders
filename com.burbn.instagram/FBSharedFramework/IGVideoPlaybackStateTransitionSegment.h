//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGVideoPlaybackStateTransitionSegment : NSObject
{
    long long _lastValidState;
    NSMutableArray *_stateTransitionSegmentStore;
}

@property(copy, nonatomic) NSMutableArray *stateTransitionSegmentStore; // @synthesize stateTransitionSegmentStore=_stateTransitionSegmentStore;
- (void).cxx_destruct;
- (void)_addOrphanStateTransition:(id)arg1;
- (void)_addStateTransitionFromState:(long long)arg1 toState:(long long)arg2 withTransitionType:(long long)arg3;
- (void)addEndedWithState:(long long)arg1;
- (void)addInvalidTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)addValidTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)addStartedWithState:(long long)arg1;
- (id)init;

@end

