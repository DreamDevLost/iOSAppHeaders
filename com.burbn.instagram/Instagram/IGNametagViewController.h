//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGNametagBackgroundCellDelegate.h"
#import "IGNametagNUXViewControllerDelegate.h"
#import "IGNametagSelfieBackgroundCellDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGLabel, IGListAdapter, IGNametagBackgroundDataSource, IGNametagLoggingContext, IGNametagNUXViewController, IGNametagView, IGNametagViewConfiguration, IGTapButton, IGUser, IGUserSession, NSArray, NSString, UIBarButtonItem, UICollectionView, UINavigationBar, UIToolbar;

@interface IGNametagViewController : UIViewController <IGListAdapterDataSource, IGNametagBackgroundCellDelegate, IGNametagSelfieBackgroundCellDelegate, UICollectionViewDelegate, UIScrollViewDelegate, IGNametagNUXViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_currentProfileUser;
    NSArray *_backgroundConfigs;
    IGNametagViewConfiguration *_cardConfig;
    IGNametagView *_friendCardView;
    NSString *_module;
    UINavigationBar *_naviBar;
    UIToolbar *_toolbar;
    UICollectionView *_bgCollectionView;
    IGListAdapter *_bgListAdapter;
    IGTapButton *_scanButton;
    UIBarButtonItem *_cancelItem;
    IGTapButton *_switchModeButton;
    UIBarButtonItem *_shareItem;
    IGTapButton *_shareButton;
    IGNametagBackgroundDataSource *_dataSource;
    IGLabel *_shareNoteLabel;
    IGNametagLoggingContext *_loggingContext;
    IGNametagNUXViewController *_nametagNUXViewController;
    _Bool _showNUX;
    _Bool _isShareMode;
    id <IGProfileFriendCodeViewDelegate> _delegate;
}

@property(nonatomic) _Bool isShareMode; // @synthesize isShareMode=_isShareMode;
@property(readonly, nonatomic) IGNametagView *friendCardView; // @synthesize friendCardView=_friendCardView;
@property(nonatomic) __weak id <IGProfileFriendCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)NUXStepsDidFinish:(id)arg1;
- (void)_configShareNoteLabel;
- (void)_createShareNoteLabel;
- (void)_showNextGroup;
- (void)_didTapSwitchModeButton:(id)arg1;
- (void)_didTapShareButton:(id)arg1;
- (void)_didTapCameraButton:(id)arg1;
- (void)_didTapCloseButton:(id)arg1;
- (void)_createToolbarButtons;
- (void)_configToolbarWithBarColor:(id)arg1 itemTintColor:(id)arg2;
- (void)_createToolbar;
- (void)_createNaviBarButtons;
- (void)_configNaviBarWithBarColor:(id)arg1 itemTintColor:(id)arg2;
- (void)_createNavigationBar;
- (void)_createFriendCardView;
- (void)_createBgCollectionView;
- (void)_configCardView;
- (void)didCancelRetake;
- (void)didTapRetakeButton;
- (void)didTakeNewSelfie:(id)arg1 image:(id)arg2;
- (void)scrollAway:(id)arg1;
- (void)didUpdateBackground:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_appWillEnterBackground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (struct CGRect)shareAreaFrame;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 currentProfileUser:(id)arg2 showNUX:(_Bool)arg3 cardConfigs:(id)arg4 dataSource:(id)arg5 loggingContext:(id)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
