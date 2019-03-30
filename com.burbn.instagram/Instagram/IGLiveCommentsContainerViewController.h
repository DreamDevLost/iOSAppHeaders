//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGLiveCommentsContainerViewDelegate.h"
#import "IGLiveCommentsSectionControllerDelegate.h"
#import "UICollectionViewDelegate.h"

@class IGListAdapter, IGLiveCommentModel, IGLiveCommentsContainerView, NSMutableArray, NSMutableSet, NSString;

@interface IGLiveCommentsContainerViewController : UIViewController <IGListAdapterDataSource, IGLiveCommentsSectionControllerDelegate, IGLiveCommentsContainerViewDelegate, UICollectionViewDelegate>
{
    IGLiveCommentsContainerView *_commentsContainerView;
    _Bool _isInBroadcastView;
    NSMutableArray *_commentModels;
    IGLiveCommentModel *_pinnedCommentModel;
    NSMutableSet *_visibleCommentPKs;
    NSString *_module;
    IGListAdapter *_listAdapter;
    id <IGLiveCommentsContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLiveCommentsContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentsContainerViewDidBeginScrolling:(id)arg1;
- (void)commentsContainerView:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 cell:(id)arg4;
- (void)commentsContainerView:(id)arg1 didReceiveUnpinTapOnComment:(id)arg2;
- (void)commentsContainerViewHeightDidChange:(id)arg1;
- (void)liveCommentsSectionController:(id)arg1 didSelectCommentModel:(id)arg2 cell:(id)arg3;
- (_Bool)liveCommentsSectionControllerIsInBroadcastView:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (void)_removeExtraComments;
- (void)_reinsertPinnedComment;
- (void)setEnabledIncreasedCommentHeight:(_Bool)arg1;
- (id)visibleCellForComment:(id)arg1;
- (long long)commentsContainerDisplayMode;
- (_Bool)isCommentVisible:(id)arg1;
- (_Bool)hasPinnedComment;
- (double)pinnedCommentHeight;
- (void)setCommentsContainerDisplayMode:(long long)arg1;
- (_Bool)canExpandCommentsContainer;
- (_Bool)isGestureOnCommentContainer:(id)arg1;
- (void)removeAllCommentsFromUserPk:(id)arg1;
- (void)removeCommentWithPk:(id)arg1;
- (void)removeAllComments;
- (id)currentPinnedComment;
- (void)unpinComment;
- (void)pinComment:(id)arg1 module:(id)arg2;
- (void)updateCommentPk:(id)arg1 withComment:(id)arg2;
- (void)addComments:(id)arg1 forceScrollToBottom:(_Bool)arg2 module:(id)arg3;
- (void)_setModule:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initIsInBroadcastView:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

