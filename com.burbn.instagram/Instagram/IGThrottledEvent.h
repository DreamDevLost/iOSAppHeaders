//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGThrottledEvent : NSObject
{
    NSString *_userDefaultsKey;
    long long _numEvents;
    long long _numDays;
}

- (void).cxx_destruct;
- (void)performBlockIfAppropriate:(CDUnknownBlockType)arg1;
- (id)initWithUniqueID:(id)arg1 eventsUntilPrompt:(long long)arg2 daysUntilPromptAgain:(long long)arg3 firstDate:(id)arg4;

@end
