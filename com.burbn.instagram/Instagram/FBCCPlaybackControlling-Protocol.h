//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBCCPlaybackControlling <NSObject>
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) double progress;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) __weak id <FBCCPlaybackControllerDelegate> delegate;
- (void)seekToPosition:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)playInReverse;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)playFromStart;
- (void)pause;
- (void)play;
@end

