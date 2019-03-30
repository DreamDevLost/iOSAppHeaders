//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGEmptyFeedView, IGTextButton, UIActivityIndicatorView, UILabel;

@interface IGFindUsersEmptyFeedView : UICollectionViewCell
{
    IGEmptyFeedView *_emptyView;
    IGTextButton *_connectButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_socialContextLabel;
    id <IGFindUsersEmptyFeedViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFindUsersEmptyFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startAnimatingSpinner;
- (void)_didPressConnectButton;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

