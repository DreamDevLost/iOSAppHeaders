//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGMediaThumbnailViewDelegate.h"

@class CALayer, IGGradientView, IGMediaThumbnailView, IGStoryTrayAvatarView, NSString, UILabel;

@interface IGDiscoveryPostLiveOneByTwoCell : UICollectionViewCell <IGMediaThumbnailViewDelegate>
{
    IGMediaThumbnailView *_thumbnailView;
    IGGradientView *_gradientView;
    CALayer *_highlightOverlay;
    UILabel *_wasLiveLabel;
    UILabel *_usernameLabel;
    IGStoryTrayAvatarView *_avatarView;
}

- (void).cxx_destruct;
- (void)mediaThumbnailView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)mediaThumbnailView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)_configureAvatarViewWithBroadcast:(id)arg1 module:(id)arg2;
- (void)configureWithBroadcast:(id)arg1 module:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_updateCellForImageLoaded:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

