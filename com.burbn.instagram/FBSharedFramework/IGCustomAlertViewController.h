//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCustomAlertViewDelegate.h"

@class UIView<IGCustomAlertView>;

@interface IGCustomAlertViewController : IGViewController <IGCustomAlertViewDelegate>
{
    _Bool _disableAnimationForDismissal;
    UIView<IGCustomAlertView> *_alertView;
}

@property(retain, nonatomic) UIView<IGCustomAlertView> *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) _Bool disableAnimationForDismissal; // @synthesize disableAnimationForDismissal=_disableAnimationForDismissal;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)customAlertViewDidCancel:(id)arg1;
- (void)customAlertView:(id)arg1 didTapAction:(id)arg2;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAlertView:(id)arg1;
- (_Bool)prefersNavigationBarHidden;

@end

