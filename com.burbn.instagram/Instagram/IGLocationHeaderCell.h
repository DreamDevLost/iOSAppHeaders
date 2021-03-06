//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGLocation, IGLocationHeaderView;

@interface IGLocationHeaderCell : UICollectionViewCell
{
    IGLocationHeaderView *_headerView;
    IGLocation *_location;
}

@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) IGLocationHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithSuperviewWidth:(double)arg1 location:(id)arg2 showExploreMapButton:(_Bool)arg3 showCurrentLocation:(_Bool)arg4;

@end

