//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGDirectVisualMessagePlaybackLog, NSMutableDictionary, NSString;

@interface IGDirectVisualMessagePlaybackTracker : NSObject <IGUserSessionObject>
{
    NSMutableDictionary *_messageIdToLogArrayMapping;
    IGDirectVisualMessagePlaybackLog *_incompleteLog;
}

@property(retain, nonatomic) IGDirectVisualMessagePlaybackLog *incompleteLog; // @synthesize incompleteLog=_incompleteLog;
@property(readonly, nonatomic) NSMutableDictionary *messageIdToLogArrayMapping; // @synthesize messageIdToLogArrayMapping=_messageIdToLogArrayMapping;
- (void).cxx_destruct;
- (id)lastPlaybackEndTimeForMessageWithId:(id)arg1;
- (double)timeSpentForMessageWithId:(id)arg1;
- (void)trackPlaybackEndForMessageWithId:(id)arg1 isPendingMessage:(_Bool)arg2;
- (void)trackPlaybackStartForMessageWithId:(id)arg1 isPendingMessage:(_Bool)arg2;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

