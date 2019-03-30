//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@interface IGDirectShareSheetOneTapButtonState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    double _undoState_initialTimestamp;
    double _undoState_duration;
    _Bool _sentState_enabled;
}

+ (id)undoStateWithInitialTimestamp:(double)arg1 duration:(double)arg2;
+ (id)sentStateWithEnabled:(_Bool)arg1;
+ (id)sendState;
+ (id)disabledState;
- (void)matchSendState:(CDUnknownBlockType)arg1 undoState:(CDUnknownBlockType)arg2 sentState:(CDUnknownBlockType)arg3 disabledState:(CDUnknownBlockType)arg4;
- (double)matchDoubleSendState:(CDUnknownBlockType)arg1 undoState:(CDUnknownBlockType)arg2 sentState:(CDUnknownBlockType)arg3 disabledState:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanSendState:(CDUnknownBlockType)arg1 undoState:(CDUnknownBlockType)arg2 sentState:(CDUnknownBlockType)arg3 disabledState:(CDUnknownBlockType)arg4;
- (double)durationInSeconds;
- (double)remainingTimeInStateInSeconds;
- (_Bool)isInUndoState;
- (_Bool)isInSendState;
- (_Bool)isActionable;

@end

