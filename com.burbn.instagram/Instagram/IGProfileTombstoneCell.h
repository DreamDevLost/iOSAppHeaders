//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGTombstoneView;

@interface IGProfileTombstoneCell : UICollectionViewCell
{
    IGTombstoneView *_tombstoneView;
    id <IGProfileTombstoneCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGProfileTombstoneCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tombstoneDidTapShowButton:(id)arg1;
- (void)configureForTombstoneReportType:(long long)arg1;
- (void)configureForTombstoneReportType:(long long)arg1 withUsername:(id)arg2;
- (void)layoutSubviews;

@end
