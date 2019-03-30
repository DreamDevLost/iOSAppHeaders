//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCCPlaybackPixelBufferProviding.h"

@class FBCFTypeRefContainer, NSString, UIImage;

@interface FBCCImagePlaybackPixelBufferProvider : NSObject <FBCCPlaybackPixelBufferProviding>
{
    FBCFTypeRefContainer *_pixelBufferContainer;
    struct CGSize _maxSupportedSize;
    _Bool _muted;
    id <FBCCPlaybackControllerDelegate> _delegate;
    double _progress;
    UIImage *_image;
    CDStruct_1b6d18a9 _currentTime;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <FBCCPlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)seekToPosition:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)playInReverse;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)playFromStart;
- (void)pause;
- (void)play;
- (struct __CVBuffer *)copyPixelBufferForTime:(CDStruct_1b6d18a9)arg1 timeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (_Bool)hasNewPixelBufferForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)providerTimeForHostTime:(double)arg1;
@property(readonly, nonatomic) struct OpaqueCMTimebase *timebase;
- (id)initWithImage:(id)arg1 maxSupportedSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
