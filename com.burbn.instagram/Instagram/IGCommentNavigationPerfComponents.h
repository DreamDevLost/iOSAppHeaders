//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGCommentNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceComponent *_thread;
    IGPerformanceComponent *_keyboard;
}

@property(readonly, nonatomic) IGPerformanceComponent *keyboard; // @synthesize keyboard=_keyboard;
@property(readonly, nonatomic) IGPerformanceComponent *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)init;

@end
