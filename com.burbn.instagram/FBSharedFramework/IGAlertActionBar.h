//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGAlertBar.h>

@class UITapGestureRecognizer;

@interface IGAlertActionBar : IGAlertBar
{
    _Bool _shouldDismissOnTap;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CDUnknownBlockType _tapActionBlock;
    CDUnknownBlockType _completeBlock;
}

+ (id)sharedAlertBar;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool shouldDismissOnTap; // @synthesize shouldDismissOnTap=_shouldDismissOnTap;
- (void).cxx_destruct;
- (void)_resetCallbackBlocks;
- (double)displayDuration;
- (void)didHideAlertView;
- (void)didShowAlertView;
- (void)_handleTap:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dismissAndNotify:(_Bool)arg1;
- (void)showInViewController:(id)arg1 withText:(id)arg2 style:(long long)arg3 delay:(double)arg4 updateExistingAlertBar:(_Bool)arg5 actionBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (id)init;

@end

