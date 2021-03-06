//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGWatchAndMoreAdapterDelegate.h"
#import "IGWatchAndMoreViewControllerDelegate.h"

@class IGWatchAndMoreLoggingContext, IGWatchAndMorePresenter, IGWatchAndMoreViewController, NSString;

@interface IGWatchAndMoreController : NSObject <IGWatchAndMoreAdapterDelegate, IGWatchAndMoreViewControllerDelegate>
{
    id <IGWatchAndMoreAdapterProtocol> _adapter;
    IGWatchAndMorePresenter *_presenter;
    IGWatchAndMoreViewController *_viewController;
    IGWatchAndMoreLoggingContext *_loggingContext;
    _Bool _didDismiss;
    _Bool _supportSponsoredTracking;
    long long _videoViewerType;
    id <IGWatchAndMoreControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGWatchAndMoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissControllerWithAdapterDismissal:(_Bool)arg1;
- (id)_watchAndMoreAdapterFromFeedItem:(id)arg1 viewWidth:(double)arg2 pageCellState:(id)arg3 mediaPosition:(long long)arg4 userSession:(id)arg5 loggingProvider:(id)arg6;
- (void)watchAndMoreViewController:(id)arg1 videoDidCollapse:(_Bool)arg2;
- (void)watchAndMoreViewController:(id)arg1 showNavigationBarButtons:(_Bool)arg2;
- (void)watchAndMoreViewController:(id)arg1 setPlayVideo:(_Bool)arg2;
- (void)dismissWatchAndMoreViewController:(id)arg1;
- (void)watchAndMoreAdapterDidModalViewDismiss:(id)arg1;
- (void)watchAndMoreAdapterDidDismiss:(id)arg1;
- (void)dismissWatchAndMoreControllerAnimated:(_Bool)arg1;
- (void)present;
@property(readonly, nonatomic) _Bool isPresented;
@property(readonly, nonatomic) _Bool isPresenting;
- (id)initWithFeedItem:(id)arg1 videoCell:(id)arg2 videoCellManager:(id)arg3 loggingProvider:(id)arg4 userSession:(id)arg5 viewController:(id)arg6 pageCellState:(id)arg7 mediaPosition:(long long)arg8 entrySource:(unsigned long long)arg9 supportSponsoredTracking:(_Bool)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

