//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDirectAnimatedMediaLogger : NSObject
{
    NSString *_giphyResponseId;
    NSString *_sessionId;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)logEventWithName:(id)arg1 gifId:(id)arg2;
- (id)initWithGiphyResponseId:(id)arg1 sessionId:(id)arg2 analyticsModule:(id)arg3;

@end

