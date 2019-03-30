//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class RCTEventDispatcher, UIView;

@interface RCTWrapperViewController : UIViewController
{
    UIView *_wrapperView;
    UIView *_contentView;
    RCTEventDispatcher *_eventDispatcher;
    double _previousTopLayoutLength;
    double _previousBottomLayoutLength;
    id <UILayoutSupport> _currentTopLayoutGuide;
    id <UILayoutSupport> _currentBottomLayoutGuide;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContentView:(id)arg1;

@end

