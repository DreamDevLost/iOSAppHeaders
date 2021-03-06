//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGMultiImageThumbnailView, IGRemoteImageView, IGStoryFacepileView, UIImageView, UILabel;

@interface IGSaveHomeThumbnailViewCell : UICollectionViewCell
{
    UIImageView *_titleIconView;
    IGStoryFacepileView *_facepileview;
    double _topPadding;
    double _bottomPadding;
    double _leftPadding;
    double _rightPadding;
    IGRemoteImageView *_singleImageThumbnailView;
    IGMultiImageThumbnailView *_multiImageThumbnailView;
    UILabel *_titleLabel;
}

+ (double)heightForWidth:(double)arg1 index:(long long)arg2;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGMultiImageThumbnailView *multiImageThumbnailView; // @synthesize multiImageThumbnailView=_multiImageThumbnailView;
@property(retain, nonatomic) IGRemoteImageView *singleImageThumbnailView; // @synthesize singleImageThumbnailView=_singleImageThumbnailView;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (void).cxx_destruct;
- (void)_configureMultiImageThumbnailViewWithMediaList:(id)arg1 module:(id)arg2;
- (id)_lazyLoadFacepileViewIfNeeded;
- (void)updateWithCollection:(id)arg1 index:(unsigned long long)arg2 module:(id)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

