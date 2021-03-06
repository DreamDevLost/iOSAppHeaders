//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBTimer, IGFeedItem, NSMutableArray, UIImageView;

@interface IGCarouselImageView : UIView
{
    UIImageView *_imageView;
    NSMutableArray *_loadedImages;
    NSMutableArray *_pendingImageUrls;
    IGFeedItem *_firstFeedItemForPPRLog;
    FBTimer *_animationTimer;
    unsigned long long _currentPhotoIndex;
    double _carouselDuration;
    double _animationDuration;
    unsigned long long _viewAnimationOptions;
}

- (void).cxx_destruct;
- (void)_handleImageLoad:(id)arg1 imageRequest:(id)arg2 source:(unsigned long long)arg3 networkRequestSummary:(id)arg4 error:(id)arg5;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithFeedItems:(id)arg1 carouselDuration:(double)arg2 animationDuration:(double)arg3 options:(unsigned long long)arg4 analyticsModule:(id)arg5;
- (id)init;

@end

