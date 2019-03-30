//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCompactStatusBarVolumeViewConfiguration, IGFullWidthStatusBarVolumeViewConfiguration;

@interface IGStatusBarVolumeViewConfiguration : NSObject
{
    _Bool _statusBarVolumeViewEnabled;
    _Bool _systemVolumeHUDDisabled;
    IGFullWidthStatusBarVolumeViewConfiguration *_fullWidthConfiguration;
    IGCompactStatusBarVolumeViewConfiguration *_compactConfiguration;
}

+ (id)defaultConfiguration;
+ (id)configWithFullWidthConfiguration:(id)arg1 compactConfiguration:(id)arg2;
+ (id)configWithStatusBarVolumeViewEnabled:(_Bool)arg1 systemVolumeHUDDisabled:(_Bool)arg2 fullWidthConfiguration:(id)arg3 compactConfiguration:(id)arg4;
@property(readonly, nonatomic) IGCompactStatusBarVolumeViewConfiguration *compactConfiguration; // @synthesize compactConfiguration=_compactConfiguration;
@property(readonly, nonatomic) IGFullWidthStatusBarVolumeViewConfiguration *fullWidthConfiguration; // @synthesize fullWidthConfiguration=_fullWidthConfiguration;
@property(readonly, nonatomic) _Bool systemVolumeHUDDisabled; // @synthesize systemVolumeHUDDisabled=_systemVolumeHUDDisabled;
@property(readonly, nonatomic) _Bool statusBarVolumeViewEnabled; // @synthesize statusBarVolumeViewEnabled=_statusBarVolumeViewEnabled;
- (void).cxx_destruct;
- (id)_initWithStatusBarVolumeViewEnabled:(_Bool)arg1 systemVolumeHUDDisabled:(_Bool)arg2 fullWidthConfiguration:(id)arg3 compactConfiguration:(id)arg4;

@end
