//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaOverlayIndicator;

@interface IGAudioNUXController : NSObject
{
    _Bool _persistent;
    _Bool _hasShownPlaybackNUX;
    id <IGAudioNUXControllerDelegate> _delegate;
    IGMediaOverlayIndicator *_indicator;
}

@property(nonatomic) _Bool hasShownPlaybackNUX; // @synthesize hasShownPlaybackNUX=_hasShownPlaybackNUX;
@property(nonatomic) _Bool persistent; // @synthesize persistent=_persistent;
@property(retain, nonatomic) IGMediaOverlayIndicator *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak id <IGAudioNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateIndicatorWithAudioEnabled:(_Bool)arg1;
- (void)didTapOnVideo;
- (void)showOneTapIndicatorNUXAnimated:(_Bool)arg1;
- (void)_didPressVolumeButton:(id)arg1;
- (void)_didChangeMuteSwitch:(id)arg1;
- (id)initWithIndicator:(id)arg1;

@end
