//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGKeyboardObserverFrameChangeDelegate.h"
#import "IGKeyboardObserverHideDelegate.h"
#import "IGKeyboardObserverShowDelegate.h"

@class IGKeyboardInputManagerListenerAnnouncer, IGKeyboardObserver, NSSet, NSString, UIScrollView, UIView;

@interface IGKeyboardInputManager : NSObject <IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverFrameChangeDelegate>
{
    UIView *_containerView;
    UIScrollView *_scrollView;
    UIView *_accessoryView;
    UIView *_tabBarView;
    UIView *_keyboardView;
    IGKeyboardObserver *_keyboardObserver;
    UIView *_safeAreaBottomInsetOverlayView;
    double _bottomInsetY;
    IGKeyboardInputManagerListenerAnnouncer *_announcer;
    _Bool _disableOffset;
    _Bool _shouldPlaceAccessoryViewAboveTabBarView;
    NSSet *_additionalViewsToMoveWithKeyboard;
    double _additionalBottomInset;
}

@property(nonatomic) _Bool shouldPlaceAccessoryViewAboveTabBarView; // @synthesize shouldPlaceAccessoryViewAboveTabBarView=_shouldPlaceAccessoryViewAboveTabBarView;
@property(nonatomic) _Bool disableOffset; // @synthesize disableOffset=_disableOffset;
@property(nonatomic) double additionalBottomInset; // @synthesize additionalBottomInset=_additionalBottomInset;
@property(copy, nonatomic) NSSet *additionalViewsToMoveWithKeyboard; // @synthesize additionalViewsToMoveWithKeyboard=_additionalViewsToMoveWithKeyboard;
- (void).cxx_destruct;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (struct CGPoint)_convertPointToWindow:(struct CGPoint)arg1;
- (struct CGRect)_convertKeyboardFrameToContainerView;
- (double)_visibleKeyboardHeightFromFrame:(struct CGRect)arg1;
- (void)_reallyFinishShowingKeyboardView;
- (void)_finishShowingKeyboardViewIfNeeded:(_Bool)arg1;
- (void)_finishHidingKeyboardViewIfNeeded:(_Bool)arg1;
- (void)_reallyFinishHidingKeyboardView;
- (void)_sneakinglyEndEditing;
- (void)_updateInsets:(struct UIEdgeInsets)arg1;
- (void)_updateBottomInsetY:(double)arg1;
- (void)_updateAccessoryViewForKeyboardFrame:(struct CGRect)arg1;
- (void)_onPan:(id)arg1 suggestedTopY:(double)arg2;
- (void)_onScrollViewPan:(id)arg1;
- (double)_accessoryHeight;
- (double)_viewHeight;
- (double)_keyboardHeight;
- (_Bool)_shouldUseFallbackBehavior;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)layoutAccessoryView;
- (void)updateKeyboard;
- (void)setSafeAreaOverlayViewBackgroundColor:(id)arg1;
- (id)initWithContainerView:(id)arg1 scrollView:(id)arg2 accessoryView:(id)arg3 tabBarView:(id)arg4 shouldAddSafeAreaOverlayView:(_Bool)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
