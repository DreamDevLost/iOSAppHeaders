//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLiveInteractivityTimestampHelper;

@protocol IGLiveInteractivityHelperDelegate <NSObject>
- (void)timestampHelper:(IGLiveInteractivityTimestampHelper *)arg1 didReceiveHistoricalEvent:(id <IGLiveInteractivityEvent>)arg2 atApproximateTimestamp:(double)arg3;
- (void)timestampHelper:(IGLiveInteractivityTimestampHelper *)arg1 removeCurrentEventAtTimestamp:(double)arg2;
- (void)timestampHelper:(IGLiveInteractivityTimestampHelper *)arg1 didReceiveEvent:(id <IGLiveInteractivityEvent>)arg2 atTimestamp:(double)arg3;
@end
