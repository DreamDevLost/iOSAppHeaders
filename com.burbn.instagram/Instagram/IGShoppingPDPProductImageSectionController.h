//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListWorkingRangeDelegate.h"
#import "IGShoppingPDPProductImageCellDelegate.h"
#import "IGZoomHandlerDelegate.h"
#import "IGZoomLoggerProtocol.h"

@class IGMediaPreloader, IGShoppingConsumptionFeedItemLogger, IGShoppingPDPProductImageViewModel, IGUserSession, IGZoomViewPresenter, NSMutableDictionary, NSString, UIView;

@interface IGShoppingPDPProductImageSectionController : IGListSectionController <IGListWorkingRangeDelegate, IGShoppingPDPProductImageCellDelegate, IGZoomHandlerDelegate, IGZoomLoggerProtocol>
{
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
    IGShoppingPDPProductImageViewModel *_viewModel;
    IGMediaPreloader *_mediaPreloader;
    IGZoomViewPresenter *_zoomViewPresenter;
    NSMutableDictionary *_backgroundColorCache;
    UIView *_zoomedViewParentView;
    long long _zoomedViewParentPosition;
}

- (void).cxx_destruct;
- (void)logZoomWillEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomWillBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidEndWithZoomController:(id)arg1 extras:(id)arg2;
- (void)logZoomDidBeginWithZoomController:(id)arg1 extras:(id)arg2;
- (void)_preloadImage;
- (void)didEndZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)didStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)willStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (id)zoomViewControllerForZoomController:(id)arg1 frame:(struct CGRect)arg2;
- (double)headerHeightForZoomController:(id)arg1;
- (id)presentingController;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (void)shoppingPDPProductImageCell:(id)arg1 didComputeGradientColors:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

