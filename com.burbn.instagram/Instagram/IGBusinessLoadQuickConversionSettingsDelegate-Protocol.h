//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAccountTypeQuickConversionSetting, IGBusinessLoadQuickConversionSettingsViewController;

@protocol IGBusinessLoadQuickConversionSettingsDelegate <NSObject>
- (void)businessLoadQuickConversionSettingsViewController:(IGBusinessLoadQuickConversionSettingsViewController *)arg1 didFetchQuickConversionSetting:(IGAccountTypeQuickConversionSetting *)arg2;
- (void)businessLoadQuickConversionSettingsContinueTappedAndFetchFinished:(IGBusinessLoadQuickConversionSettingsViewController *)arg1;
@end

