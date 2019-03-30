//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class IGFullscreenIntroConfiguration, IGNavigationBar, IGUserSession, NSMutableArray, NSString, UIScrollView;

@interface IGFullscreenIntroductionViewController : IGViewController
{
    IGFullscreenIntroConfiguration *_config;
    IGUserSession *_userSession;
    IGNavigationBar *_navigationBar;
    UIScrollView *_scrollView;
    NSMutableArray *_viewsForSteps;
    id <IGFullscreenIntroductionViewControllerDelegate> _delegate;
    NSString *_clickPoint;
}

@property(copy, nonatomic) NSString *clickPoint; // @synthesize clickPoint=_clickPoint;
@property(nonatomic) __weak id <IGFullscreenIntroductionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)_doneButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 config:(id)arg2;

@end
