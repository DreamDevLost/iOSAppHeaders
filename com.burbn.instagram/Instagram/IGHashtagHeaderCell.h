//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFollowControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, IGFollowController, IGHashtagModel, IGReel, IGReelOwnerView, IGTapButton, IGUserSession, NSString, UIActivityIndicatorView, UILabel, UIView;

@interface IGHashtagHeaderCell : UICollectionViewCell <IGFollowControllerDelegate, UIGestureRecognizerDelegate>
{
    IGHashtagModel *_hashtagModel;
    IGUserSession *_userSession;
    IGReel *_reel;
    IGFollowController *_followController;
    UIView *_contentContainerView;
    UILabel *_postsCountLabel;
    UILabel *_subtitle;
    UIActivityIndicatorView *_spinner;
    IGTapButton *_dropdownButton;
    CALayer *_separatorLayer;
    id <IGHashtagHeaderCellDelegate> _headerCellDelegate;
    IGReelOwnerView *_reelOwnerView;
}

@property(readonly, nonatomic) IGReelOwnerView *reelOwnerView; // @synthesize reelOwnerView=_reelOwnerView;
@property(nonatomic) __weak id <IGHashtagHeaderCellDelegate> headerCellDelegate; // @synthesize headerCellDelegate=_headerCellDelegate;
- (void).cxx_destruct;
- (void)_configureDropdownButtonWithViewState:(long long)arg1 hashtagFollowState:(long long)arg2;
- (id)_analyticsModule;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)_dropdownButtonTapped;
- (void)_didLongPressStoryView:(id)arg1;
- (void)_didTapStoryView:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateReel:(id)arg1;
- (void)configureWithHashtagModel:(id)arg1 userSession:(id)arg2 headerViewConfiguration:(id)arg3 attribution:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

