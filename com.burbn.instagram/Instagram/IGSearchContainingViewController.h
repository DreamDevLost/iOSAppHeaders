//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAnalyticsModule.h"
#import "IGFixedHeightViewContaining.h"
#import "IGGestureHandler.h"
#import "IGSearchContainingViewDelegate.h"

@class IGSearchBarConfig, IGSearchContainingView, NSString, UIViewController<IGAnalyticsModule><IGGestureHandler>;

@interface IGSearchContainingViewController : UIViewController <IGSearchContainingViewDelegate, IGAnalyticsModule, IGFixedHeightViewContaining, IGGestureHandler>
{
    UIViewController<IGAnalyticsModule><IGGestureHandler> *_resultsViewController;
    id <IGSearchControlling> _searchController;
    IGSearchContainingView *_containingView;
    IGSearchBarConfig *_searchBarConfig;
    NSString *_initialQuery;
    double _fixedHeight;
}

@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
- (void).cxx_destruct;
- (void)_updateFixedHeight;
- (id)analyticsModule;
- (_Bool)becomeFirstResponder;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)searchViewDidSearch:(id)arg1 withText:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithSearchBarConfig:(id)arg1 resultsViewController:(id)arg2 searchController:(id)arg3 initialQuery:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
