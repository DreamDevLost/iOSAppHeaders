//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCellSwipeActionManagerActionDelegate.h"
#import "IGCellSwipeActionManagerSwipingDelegate.h"
#import "IGCommentContentWithLikeViewDelegate.h"
#import "IGListBindable.h"

@class CALayer, IGActionSheetCoordinator, IGCellSwipeActionManager, NSString, UIButton, UITapGestureRecognizer, UIView<IGCommentContentViewProtocol>;

@interface IGCommentCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate, IGCellSwipeActionManagerSwipingDelegate, IGCommentContentWithLikeViewDelegate, IGListBindable>
{
    IGActionSheetCoordinator *_actionSheetCoordinator;
    UITapGestureRecognizer *_doubleTapGesture;
    UIButton *_saveToQuickReplyButton;
    CALayer *_saveToQuickReplyButtonSeparatorLayer;
    _Bool _isShowingEditActions;
    _Bool _enableDoubleTap;
    _Bool _showActions;
    id <IGCommentCellDelegate> _delegate;
    id <IGCommentCellInteractionDelegate> _interactionDelegate;
    id <IGCommentCellUFIDelegate> _ufiDelegate;
    UIButton *_replyButton;
    UIButton *_deleteButton;
    UIButton *_reportButton;
    CALayer *_reportButtonSeparatorLayer;
    IGCellSwipeActionManager *_cellSwipeActionManager;
    double _beginningX;
    long long _maxActionBarWidth;
}

@property(nonatomic) long long maxActionBarWidth; // @synthesize maxActionBarWidth=_maxActionBarWidth;
@property(nonatomic) _Bool showActions; // @synthesize showActions=_showActions;
@property(nonatomic) double beginningX; // @synthesize beginningX=_beginningX;
@property(retain, nonatomic) IGCellSwipeActionManager *cellSwipeActionManager; // @synthesize cellSwipeActionManager=_cellSwipeActionManager;
@property(readonly, nonatomic) CALayer *reportButtonSeparatorLayer; // @synthesize reportButtonSeparatorLayer=_reportButtonSeparatorLayer;
@property(readonly, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(nonatomic) _Bool enableDoubleTap; // @synthesize enableDoubleTap=_enableDoubleTap;
@property(nonatomic) __weak id <IGCommentCellUFIDelegate> ufiDelegate; // @synthesize ufiDelegate=_ufiDelegate;
@property(nonatomic) __weak id <IGCommentCellInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <IGCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isShowingEditActions; // @synthesize isShowingEditActions=_isShowingEditActions;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (void)bindViewModel:(id)arg1;
- (void)contentView:(id)arg1 didTapOnTranslateButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnUndoButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnRetryButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnReplyButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnLikeCountButton:(id)arg2;
- (void)contentView:(id)arg1 didTapOnLikeButton:(id)arg2;
- (void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2;
- (void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2;
- (_Bool)cellSwipeActionManagerShouldAllowSwipeToAction:(id)arg1;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (_Bool)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)showHighlight;
- (void)_didDoubleTap:(id)arg1;
- (void)_didLongPressCommentCell:(id)arg1;
- (void)_toggleActions;
- (void)peekActions;
- (void)showActions:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_saveToQuickReplyButtonTapped:(id)arg1;
- (void)_deleteButtonTapped:(id)arg1;
- (void)_reportButtonTapped:(id)arg1;
- (void)_replyButtonTapped:(id)arg1;
- (void)setActionButtons:(long long)arg1 presentationStyle:(long long)arg2;
- (void)setCommentViewModel:(id)arg1 coreTextLinkHandler:(id)arg2 profilePicViewDelegate:(id)arg3 cachedProfileImage:(id)arg4 sizingButtonOnlyOnce:(_Bool)arg5 supportUnseenIndicator:(_Bool)arg6;
@property(readonly, nonatomic) UIView<IGCommentContentViewProtocol> *commentView;
- (void)_setupSaveToQuickReplyButton;
- (void)_setupDeleteButton;
- (void)_setupReplyButton;
- (void)_setupReportButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
