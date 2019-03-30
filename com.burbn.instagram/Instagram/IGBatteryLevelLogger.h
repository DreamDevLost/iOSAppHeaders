//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBatteryLevelListener.h"

@class IGBatteryLevelAnnouncerManager, NSString, NSUserDefaults;

@interface IGBatteryLevelLogger : NSObject <IGBatteryLevelListener>
{
    _Bool _batteryLowLastSession;
    _Bool _batteryLow;
    IGBatteryLevelAnnouncerManager *_manager;
    double _currentBatteryLevel;
    NSUserDefaults *_userDefaults;
    id <IGBatteryLevelLoggerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBatteryLevelLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_writeDeviceBatteryInfoToDiskWithLevel:(double)arg1;
- (void)batteryDidChangeLevel:(double)arg1;
- (void)removeBatteryInfoData;
- (id)getBatteryInfoData;
- (_Bool)wasLowBatteryLastSession;
- (id)initWithLoggingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

