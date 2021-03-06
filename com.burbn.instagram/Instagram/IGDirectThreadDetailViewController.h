//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectThreadUpdateObserverDelegate.h"
#import "IGTitleAndToggleCellDelegate.h"

@class IGDirectThreadDetailListAdapterDataSource, IGDirectThreadUpdateObserver, IGListAdapter, NSString, UICollectionView;

@interface IGDirectThreadDetailViewController : IGViewController <IGDirectThreadUpdateObserverDelegate, IGTitleAndToggleCellDelegate>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDirectThreadDetailListAdapterDataSource *_dataSource;
    id <IGDirectOutgoingUpdateSending> _directOutgoingUpdateSender;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGDirectThreadUpdateObserver *_updateObserver;
    id <IGDirectThreadDetailViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectThreadDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)threadUpdateObserverDidUpdate:(unsigned long long)arg1;
- (void)titleAndToggleCell:(id)arg1 didSwitchValueTo:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithConfig:(id)arg1 threadService:(id)arg2 directOutgoingUpdateSender:(id)arg3 analyticsLogger:(id)arg4 cache:(id)arg5 mutationManager:(id)arg6 experimentProvider:(id)arg7 irisSyncStatusProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

