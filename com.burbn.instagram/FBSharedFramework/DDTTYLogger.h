//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/DDAbstractLogger.h>

#import "DDLogger.h"

@class NSDateFormatter, NSString;

@interface DDTTYLogger : DDAbstractLogger <DDLogger>
{
    NSDateFormatter *dateFormatter;
    char *app;
    char *pid;
    unsigned long long appLen;
    unsigned long long pidLen;
}

+ (id)sharedInstance;
+ (void)initialize;
- (id)loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

