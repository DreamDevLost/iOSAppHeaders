//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMediaViewerDismissDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGDirectMediaViewerViewController, IGUserSession, NSString, UICollectionViewCell<IGDirectMediaViewerCellProtocol>, UIColor, UIImage, UIViewController;

@interface IGDirectMediaViewerTransitionManager : NSObject <IGDirectMediaViewerDismissDelegate, UIViewControllerTransitioningDelegate>
{
    IGUserSession *_userSession;
    NSString *_module;
    UICollectionViewCell<IGDirectMediaViewerCellProtocol> *_dismissingMediaCell;
    id <IGMediaViewerSpecifierProvider> _mediaViewerProducer;
    UIViewController *_sourceController;
    id <IGDirectMediaViewerTransitionManagerDelegate> _transitionDelegate;
    id <IGDirectMediaViewerActionDelegate> _actionDelegate;
    _Bool _isPresenting;
    struct CGPoint _initialCenterForDismiss;
    _Bool _useCustomInitialDismissCenter;
    UIImage *_bottomBarSnapshot;
    UIImage *_topBarSnapshot;
    UIColor *_backgroundColor;
    IGDirectMediaViewerViewController *_mediaViewer;
    id <IGDirectMediaViewerTransitionManagerPresentationDelegate> _presentationDelegate;
    id <IGDirectMediaViewerTransitionManagerSnapshotDelegate> _snapshotDelegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
}

@property(readonly, nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGDirectMediaViewerTransitionManagerSnapshotDelegate> snapshotDelegate; // @synthesize snapshotDelegate=_snapshotDelegate;
@property(nonatomic) __weak id <IGDirectMediaViewerTransitionManagerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)mediaViewerDidDismiss:(id)arg1;
- (void)mediaViewerWillDismiss:(id)arg1;
- (void)didEndDraggingMediaViewer:(id)arg1 mediaCenter:(struct CGPoint)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_snapshotBottomView;
- (void)setInitialCenterForDismiss:(struct CGPoint)arg1;
- (void)presentMediaViewer;
- (id)initWithMediaViewerProducer:(id)arg1 sourceController:(id)arg2 transitionDelegate:(id)arg3 actionDelegate:(id)arg4 userSession:(id)arg5 module:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

