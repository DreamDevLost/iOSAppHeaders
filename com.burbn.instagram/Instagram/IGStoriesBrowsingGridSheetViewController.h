//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGGestureHandler.h"

@class NSString, UICollectionView, UILabel, UIView;

@interface IGStoriesBrowsingGridSheetViewController : UIViewController <IGAnalyticsModule, IGGestureHandler>
{
    id <IGStoriesBrowsingGridSheetViewControllerDelegate> _delegate;
    id <IGExperimentSetProviding> _experimentSetProvider;
    UICollectionView *_gridCollectionView;
    UILabel *_headerLabel;
    UIView *_headerBottomBorder;
    UIView *_footerView;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithStoriesBrowserController:(id)arg1 delegate:(id)arg2 experimentSetProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

