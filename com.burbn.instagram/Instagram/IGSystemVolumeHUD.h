//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeView;

@interface IGSystemVolumeHUD : NSObject
{
    _Bool _enabled;
    MPVolumeView *_mediaPlayerVolumeView;
}

+ (id)sharedHUD;
@property(retain, nonatomic) MPVolumeView *mediaPlayerVolumeView; // @synthesize mediaPlayerVolumeView=_mediaPlayerVolumeView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)updateSystemVolume:(float)arg1;
- (void)_showSystemVolumeHUD:(_Bool)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;

@end

