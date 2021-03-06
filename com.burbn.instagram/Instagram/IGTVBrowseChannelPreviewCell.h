//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGTVVideoPreviewCell.h"

@class CALayer, IGTVBrowseChannelPreviewDetailsView, IGTVVideoPreviewCoverImageView, IGTVVideoPreviewLegibilityController, IGTVVideoProgressHeaderView, NSString;

@interface IGTVBrowseChannelPreviewCell : UICollectionViewCell <IGTVVideoPreviewCell>
{
    IGTVVideoPreviewCoverImageView *_coverImageView;
    IGTVVideoProgressHeaderView *_headerView;
    IGTVBrowseChannelPreviewDetailsView *_detailsView;
    IGTVVideoPreviewLegibilityController *_legibilityController;
    CALayer *_highlightOverlay;
}

- (void).cxx_destruct;
- (void)configureWithFeedItem:(id)arg1 seenDuration:(double)arg2;
- (void)configureWithFeedItem:(id)arg1 seenDuration:(double)arg2 configuration:(id)arg3 analyticsModule:(id)arg4;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

