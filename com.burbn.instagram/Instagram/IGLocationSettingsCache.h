//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLocationSettings, IGUserDefaults;

@interface IGLocationSettingsCache : NSObject
{
    IGUserDefaults *_defaults;
    IGLocationSettings *_locationSettings;
}

@property(retain, nonatomic) IGLocationSettings *locationSettings; // @synthesize locationSettings=_locationSettings;
- (void).cxx_destruct;
- (void)_updateCache:(id)arg1;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setStorageEnabled:(_Bool)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithDefaults:(id)arg1;

@end

