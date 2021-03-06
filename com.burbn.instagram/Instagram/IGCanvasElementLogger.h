//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface IGCanvasElementLogger : NSObject
{
    NSDate *_dwellStartTimestamp;
    double _totalTimeSpent;
    unsigned long long _elementType;
    NSString *_loggingToken;
}

@property(readonly, copy, nonatomic) NSString *loggingToken; // @synthesize loggingToken=_loggingToken;
- (void).cxx_destruct;
- (void)stopDwellTimer;
- (void)startDwellTimer;
@property(readonly, nonatomic) double totalTimeSpent;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (id)initWithElementType:(unsigned long long)arg1 loggingToken:(id)arg2;

@end

