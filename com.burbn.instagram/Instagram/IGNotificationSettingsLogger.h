//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGNotificationSettingsLogger : NSObject
{
    NSString *_module;
}

- (void).cxx_destruct;
- (void)_logNetworkRequestMadeWithEventName:(id)arg1 success:(_Bool)arg2 extraParams:(id)arg3;
- (void)logChangeNotificationSettingWithRenderType:(id)arg1 contentType:(id)arg2 settingValue:(id)arg3;
- (void)logChangeNotificationSettingRequestMadeWithSuccess:(_Bool)arg1 extraParams:(id)arg2;
- (void)logFetchNotificationSettingsRequestMadeWithSuccess:(_Bool)arg1;
- (id)initWithModule:(id)arg1;

@end

