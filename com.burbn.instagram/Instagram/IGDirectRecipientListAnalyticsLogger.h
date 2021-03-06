//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectThreadService, NSString;

@interface IGDirectRecipientListAnalyticsLogger : NSObject
{
    NSString *_analyticsModule;
    IGDirectThreadService *_threadService;
}

- (void).cxx_destruct;
- (id)_stringForSectionType:(long long)arg1;
- (id)_idForRecipient:(id)arg1;
- (void)logDeselectionOfRecipientFromTokenBar:(id)arg1;
- (void)logCancelSearchWithQueryLength:(unsigned long long)arg1;
- (void)logTooManyRecipientsSelected;
- (void)logDeselectionOfRecipient:(id)arg1 atPosition:(unsigned long long)arg2 sectionType:(long long)arg3;
- (void)logSelectionOfRecipient:(id)arg1 atPosition:(unsigned long long)arg2 sectionType:(long long)arg3 queryLength:(unsigned long long)arg4;
- (void)logSearchWithString:(id)arg1;
- (id)initWithAnalyticsModule:(id)arg1 threadService:(id)arg2;

@end

