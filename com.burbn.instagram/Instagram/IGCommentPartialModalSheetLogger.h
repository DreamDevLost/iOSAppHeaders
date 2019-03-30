//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGCommentPartialModalSheetLogger : NSObject
{
    IGUserSession *_userSession;
    long long _entryPoint;
    NSString *_analyticsModule;
    unsigned long long _previousPartialModalSheetState;
}

- (void).cxx_destruct;
- (void)_logPartialModalSheetStateChangeFromInitialState:(unsigned long long)arg1 finalState:(unsigned long long)arg2 feedItem:(id)arg3;
- (void)logPartialModalSheetStateChange:(unsigned long long)arg1 feedItem:(id)arg2;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2 analyticsModule:(id)arg3;

@end

