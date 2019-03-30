//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class IGLocationInfoPageModel, IGProfilePictureImageView, IGReel, IGReelOwnerView, IGStoryTrayViewModel, IGTextButton, IGUserSession, NSString, UIImageView, UILabel, UIView;

@interface IGLocationInfoPageHeaderCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    IGLocationInfoPageModel *_infoPageModel;
    IGTextButton *_infoPageButton;
    IGUserSession *_userSession;
    UILabel *_categoryLabel;
    UILabel *_regionLabel;
    UIView *_contentContainerView;
    IGReel *_reel;
    IGStoryTrayViewModel *_reelViewModel;
    IGProfilePictureImageView *_profileImageView;
    long long _locationHeaderLayoutType;
    UIImageView *_iconView;
    id <IGLocationInfoPageHeaderCellDelegate> _delegate;
    IGReelOwnerView *_reelOwnerView;
}

@property(readonly, nonatomic) IGReelOwnerView *reelOwnerView; // @synthesize reelOwnerView=_reelOwnerView;
@property(nonatomic) __weak id <IGLocationInfoPageHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_layoutCategoryAndInfoButton;
- (void)_layoutCategoryAndCity;
- (void)_layoutCategoryOnly;
- (void)_didTapStoryView:(id)arg1;
- (void)_moreInfoButtonTapped;
- (void)updateDefaultPhotoURL:(id)arg1;
- (void)updateReel:(id)arg1;
- (void)configureWithInfoPageModel:(id)arg1 withLocationDescription:(id)arg2 userSession:(id)arg3 locationPageHeaderLayoutType:(long long)arg4;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
