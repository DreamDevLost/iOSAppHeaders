//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNotificationSettingsItem;

@interface IGNotificationSettingsItemViewModel : NSObject
{
    _Bool _enabled;
    IGNotificationSettingsItem *_settingsItem;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) IGNotificationSettingsItem *settingsItem; // @synthesize settingsItem=_settingsItem;
- (void).cxx_destruct;
- (id)initWithSettingsItem:(id)arg1 enabled:(_Bool)arg2;

@end

