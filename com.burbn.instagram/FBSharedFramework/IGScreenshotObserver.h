//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface IGScreenshotObserver : NSObject
{
    UIViewController *_controller;
    id <IGScreenshotObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <IGScreenshotObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCurrentlyCapturingScreen;
- (void)stopObserving;
- (void)startObserving;
- (void)_screenCaptureStateDidChange:(id)arg1;
- (void)_onTakenScreenshot;
- (void)_logScreenshotEventWithScreenshotType:(id)arg1;
- (id)initForController:(id)arg1;

@end

