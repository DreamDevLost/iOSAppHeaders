//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSDate, NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface IGAlertHUD : UIView <CAAnimationDelegate>
{
    UILabel *_textLabel;
    UIImageView *_iconImageView;
    NSDate *_suppressAlertsUntil;
    CDUnknownBlockType _disappearAnimationCompletion;
    UIActivityIndicatorView *_spinner;
}

+ (id)sharedHUD;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)_onAppResumed:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_performHideAnimationWithCompletion:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performHideAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeAndCleanup;
- (void)_hideAfterDelay:(double)arg1 animated:(_Bool)arg2;
- (void)performAppearAnimation;
- (void)_showInView:(id)arg1 animated:(_Bool)arg2;
- (void)_removeAccessoryViews;
- (void)hideAfterShowingText:(id)arg1 afterDelay:(double)arg2 animated:(_Bool)arg3;
- (void)hideAfterShowingText:(id)arg1 animated:(_Bool)arg2;
- (void)hideAfterShowingText:(id)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)hide;
- (void)showWithProgressIndicatorAndText:(id)arg1 inView:(id)arg2;
- (void)_doShowWithText:(id)arg1 inView:(id)arg2 showsProgressIndicator:(_Bool)arg3 removeAfterDelay:(_Bool)arg4 animated:(_Bool)arg5 force:(_Bool)arg6;
- (void)setUpVerticalHUDWithIcon:(id)arg1 text:(id)arg2;
- (void)showVerticalHUDWithIcon:(id)arg1 text:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4 force:(_Bool)arg5 animated:(_Bool)arg6;
- (void)setUpHorizontalHUDWithIcon:(id)arg1 text:(id)arg2;
- (void)showHorizontalHUDWithIcon:(id)arg1 text:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4 force:(_Bool)arg5;
- (void)setUpWithText:(id)arg1 progressIndicator:(_Bool)arg2;
- (void)showWithText:(id)arg1 inView:(id)arg2 progressIndicator:(_Bool)arg3 animated:(_Bool)arg4 hideAfterDelay:(double)arg5 force:(_Bool)arg6;
- (void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(_Bool)arg3 animated:(_Bool)arg4;
- (void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(_Bool)arg3;
- (void)showWithProgressIndicatorInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithProgressIndicatorInView:(id)arg1 hideAfterDelay:(double)arg2 animated:(_Bool)arg3 force:(_Bool)arg4;
- (void)showWithProgressIndicatorInView:(id)arg1;
- (void)_sizeToFitContentWidth:(double)arg1 contentHeight:(double)arg2;
- (_Bool)_canDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

