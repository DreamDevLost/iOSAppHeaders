//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGGalleryAlbumPickerCell;

@interface IGSelectAlbumCell : UITableViewCell
{
    int _requestID;
    double _maximumContentWidth;
    IGGalleryAlbumPickerCell *_albumView;
}

@property(readonly, nonatomic) IGGalleryAlbumPickerCell *albumView; // @synthesize albumView=_albumView;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

