//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDirectMediaPickerLogger : NSObject
{
    NSString *_module;
}

+ (id)loggerWithModule:(id)arg1;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)logEnter;
- (void)logSendButtonTappedWithMediaCount:(unsigned long long)arg1;
- (void)logDismissButtonTapped;
- (void)logBackButtonTapped;
- (void)logSelectCollectionWithIndex:(long long)arg1;
- (void)logSelectMediaWithIndex:(long long)arg1;

@end
