//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "IGFollowControllerDelegate.h"

@class IGFollowController, IGTextButton, NSString, UIView;

@interface IGHScrollAYMFActionButton : UIControl <IGFollowControllerDelegate>
{
    IGTextButton *_textActionButton;
    UIView *_topline;
    long long _buttonStyle;
    IGFollowController *_followController;
    id <IGHScrollAYMFActionButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <IGHScrollAYMFActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGFollowController *followController; // @synthesize followController=_followController;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)_didTapTextActionButton;
- (void)_configureAppearanceForSelected:(_Bool)arg1;
- (void)_configureAppearanceForStyle:(long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

