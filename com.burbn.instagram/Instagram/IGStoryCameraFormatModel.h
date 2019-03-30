//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGSelectorModeType.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, UIImage;

@interface IGStoryCameraFormatModel : FBValueObject <IGSelectorModeType, NSCopying, NSCoding>
{
    _Bool _hasBackingEffect;
    _Bool _isHandsFreeEnabled;
    _Bool _allowsTapIndicator;
    _Bool _allowsAREffectTray;
    _Bool _isVideoRecorderRequired;
    _Bool _supportCameraRollARLinkScan;
    NSString *_title;
    long long _type;
    NSString *_loggingString;
    UIImage *_thumbnail;
    NSString *_nuxText;
}

+ (void)clearFormatModels;
+ (id)cameraFormatModelWithType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *nuxText; // @synthesize nuxText=_nuxText;
@property(readonly, copy, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) _Bool supportCameraRollARLinkScan; // @synthesize supportCameraRollARLinkScan=_supportCameraRollARLinkScan;
@property(readonly, nonatomic) _Bool isVideoRecorderRequired; // @synthesize isVideoRecorderRequired=_isVideoRecorderRequired;
@property(readonly, nonatomic) _Bool allowsAREffectTray; // @synthesize allowsAREffectTray=_allowsAREffectTray;
@property(readonly, nonatomic) _Bool allowsTapIndicator; // @synthesize allowsTapIndicator=_allowsTapIndicator;
@property(readonly, nonatomic) _Bool isHandsFreeEnabled; // @synthesize isHandsFreeEnabled=_isHandsFreeEnabled;
@property(readonly, nonatomic) _Bool hasBackingEffect; // @synthesize hasBackingEffect=_hasBackingEffect;
@property(readonly, copy, nonatomic) NSString *loggingString; // @synthesize loggingString=_loggingString;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 loggingString:(id)arg3 hasBackingEffect:(_Bool)arg4 isHandsFreeEnabled:(_Bool)arg5 allowsTapIndicator:(_Bool)arg6 allowsAREffectTray:(_Bool)arg7 isVideoRecorderRequired:(_Bool)arg8 supportCameraRollARLinkScan:(_Bool)arg9 thumbnail:(id)arg10 nuxText:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
