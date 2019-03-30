//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface IGDirectVisualMessagePlaybackLog : NSObject
{
    _Bool _isPendingMessage;
    NSString *_messageId;
    NSDate *_endTime;
    NSDate *_startTime;
}

@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) _Bool isPendingMessage; // @synthesize isPendingMessage=_isPendingMessage;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (double)playbackDuration;
- (_Bool)isComplete;
- (id)description;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2 messageId:(id)arg3 isPendingMessage:(_Bool)arg4;
- (id)initWithIncompleteLog:(id)arg1 endTime:(id)arg2 isPendingMessage:(_Bool)arg3;
- (id)initWithStartTime:(id)arg1 messageId:(id)arg2 isPendingMessage:(_Bool)arg3;

@end

