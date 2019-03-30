//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class IGPastedStickerView, NSString, UILongPressGestureRecognizer, UIView;

@interface IGPasteAlertController : NSObject <UIGestureRecognizerDelegate>
{
    int _panDirection;
    id <IGPasteAlertControllerDelegate> _delegate;
    long long _pasteboardChangeCount;
    UIView *_view;
    IGPastedStickerView *_stickerView;
    UIView *_alertView;
    double _panOffset;
    UIView *_stickerContainer;
    UILongPressGestureRecognizer *_outsideTouchGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *outsideTouchGesture; // @synthesize outsideTouchGesture=_outsideTouchGesture;
@property(retain, nonatomic) UIView *stickerContainer; // @synthesize stickerContainer=_stickerContainer;
@property(nonatomic) double panOffset; // @synthesize panOffset=_panOffset;
@property(nonatomic) int panDirection; // @synthesize panDirection=_panDirection;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) IGPastedStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) long long pasteboardChangeCount; // @synthesize pasteboardChangeCount=_pasteboardChangeCount;
@property(nonatomic) __weak id <IGPasteAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didPan:(id)arg1;
- (void)_didTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_setupViewsForSticker:(id)arg1;
- (double)_yPositionHidden;
- (double)_yPositionVisible;
- (void)_didDismissAlert;
- (void)_dismissAlertWithVelocity:(double)arg1 toPosition:(struct CGPoint)arg2;
- (void)_dismissAlert;
- (void)_dismissAlertAfterDelay;
- (void)_cancelAutoDismiss;
- (void)_presentSticker:(id)arg1;
- (void)_pasteboardDidChange;
- (void)_igApplicationDidBecomeActive;
- (void)_igApplicationWillResignActive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
