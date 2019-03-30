//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KFInteractivityListenerAnnouncer, UITapGestureRecognizer, UIView;

@interface KFInputManager : NSObject
{
    KFInteractivityListenerAnnouncer *_announcer;
    UIView *_tapView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _tapGestureSubscribeCount;
}

- (void).cxx_destruct;
- (void)_announceTapGesture;
- (void)_handleTapGesture:(id)arg1;
- (_Bool)_tapGestureRecognizerIsConfiguredForNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (void)_removeTapGestureRecognizer;
- (void)_createTapGestureRecognizerWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (void)endProducingTapInputWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (void)beginProducingTapInputWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (id)initWithAnnouncer:(id)arg1 tapView:(id)arg2;

@end
