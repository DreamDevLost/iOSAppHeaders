//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UILabel;

@interface IGFollowListSortingCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UILabel *_sortingTitle;
    UIImageView *_sortingImageView;
    id <IGFollowListSortingCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFollowListSortingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapCell;
- (id)_attributedStringForSortingTitle:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
