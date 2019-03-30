//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class IGUnifiedWebViewToolbar, NSString, UIScrollView;

@interface IGUnifiedWebViewScrollViewToolbarCoordinator : NSObject <UIScrollViewDelegate>
{
    _Bool _navigationToolbarIsPresented;
    _Bool _navigationToolbarIsTransitioning;
    id <IGUnifiedWebViewScrollViewToolbarCoordinatorDelegate> _delegate;
    UIScrollView *_scrollView;
    IGUnifiedWebViewToolbar *_navigationToolbar;
    double _totalViewHeight;
}

@property(nonatomic) double totalViewHeight; // @synthesize totalViewHeight=_totalViewHeight;
@property(nonatomic) _Bool navigationToolbarIsTransitioning; // @synthesize navigationToolbarIsTransitioning=_navigationToolbarIsTransitioning;
@property(readonly, nonatomic) __weak IGUnifiedWebViewToolbar *navigationToolbar; // @synthesize navigationToolbar=_navigationToolbar;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool navigationToolbarIsPresented; // @synthesize navigationToolbarIsPresented=_navigationToolbarIsPresented;
@property(nonatomic) __weak id <IGUnifiedWebViewScrollViewToolbarCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_panGestureRecognizerEnded:(id)arg1;
- (void)_scrollViewPanGestureRecognized:(id)arg1;
- (void)_hideToolbar;
- (void)presentToolbar;
- (id)initWithScrollView:(id)arg1 navigationToolbar:(id)arg2 totalViewHeight:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
