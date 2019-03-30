//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogger.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface DDAbstractLogger : NSObject <DDLogger>
{
    id <DDLogFormatter> formatter;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

- (id)loggerName;
- (id)loggerQueue;
- (void)setLogFormatter:(id)arg1;
- (id)logFormatter;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

