//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGSimpleTableViewCell.h"

@class NSMutableArray;

@interface IGPhotoGridCell : IGSimpleTableViewCell
{
    long long _layout;
    long long _topPadding;
    long long _photosCount;
    NSMutableArray *_imageViews;
    NSMutableArray *_imageButtons;
}

+ (double)_photoInsetForLayout:(long long)arg1;
+ (double)_photoPaddingForLayout:(long long)arg1;
+ (struct CGSize)sizeForLayout:(long long)arg1;
+ (double)_photoMarginForLayout:(long long)arg1;
+ (double)_photoSizeForLayout:(long long)arg1;
+ (long long)photosPerRowForLayout:(long long)arg1;
@property(nonatomic) long long photosCount; // @synthesize photosCount=_photosCount;
@property(readonly, nonatomic) NSMutableArray *imageButtons; // @synthesize imageButtons=_imageButtons;
@property(readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_arrangeViewFor3UpExplore;
- (void)_arrangeViews;
- (void)hideImage:(_Bool)arg1 atIndex:(long long)arg2;
- (void)setImageTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithReuseIdentifier:(id)arg1 layout:(long long)arg2 topPadding:(long long)arg3 photosCount:(long long)arg4;
- (id)initWithReuseIdentifier:(id)arg1 layout:(long long)arg2;

@end

