//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGTableLayoutSpec, IGTextButton, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface IGDiscoverPeopleConnectionCell : UICollectionViewCell
{
    IGTextButton *_connectButton;
    UILabel *_detailLabel;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    IGTableLayoutSpec *_tableInterface;
    UIActivityIndicatorView *_spinner;
    UIButton *_dismissButton;
    _Bool _shouldUseFollowListPadding;
    UIView *_bottomSeparator;
    id <IGDiscoverPeopleConnectionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDiscoverPeopleConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onDismissButtonTapped:(id)arg1;
- (void)_startAnimatingSpinner;
- (void)_didPressConnectButton;
- (void)configureWithTitleText:(id)arg1 detailText:(id)arg2 buttonText:(id)arg3 iconName:(id)arg4 isDismissable:(_Bool)arg5 shouldUseFollowListPadding:(_Bool)arg6 shouldShowBottomSeparator:(_Bool)arg7;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
