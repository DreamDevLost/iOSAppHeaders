//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectAudioMessageCell;

@protocol IGDirectAudioMessageCellSeekGestureDelegate <NSObject>
- (void)audioMessageCell:(IGDirectAudioMessageCell *)arg1 didFinishSeekGestureWithProgress:(double)arg2;
- (void)audioMessageCell:(IGDirectAudioMessageCell *)arg1 didUpdateSeekGestureWithProgress:(double)arg2;
- (void)audioMessageCell:(IGDirectAudioMessageCell *)arg1 didBeginSeekGestureWithProgress:(double)arg2;
@end

