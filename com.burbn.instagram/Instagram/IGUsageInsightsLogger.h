//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGUsageInsightsLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    _Bool _isDailyTiaLoggingEnabled;
}

- (void).cxx_destruct;
- (id)_reminderEntries;
- (void)logReminderAlertDismissed;
- (void)logReminderAlertEditReminderInteraction;
- (void)logReminderAlertImpression;
- (void)logNotificationSettingsInteraction;
- (void)logDailyReminderInteraction;
- (void)logCancelReminderInteractionForReminder:(id)arg1;
- (void)logEditReminderInteraction;
- (void)logReminderSetSuccesslyWithCurrentReminder:(id)arg1 previousReminder:(id)arg2;
- (void)logSetReminderConfirmationInteractionWithCurrentReminder:(id)arg1 previousReminder:(id)arg2;
- (void)logSetReminderInteractionWithCurrentReminder:(id)arg1 previousReminder:(id)arg2;
- (void)logSetReminderDialogImpression;
- (void)logEditReminderDialogImpression;
- (void)logDashboardImpression:(id)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

@end

