//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

#import "IGListHeaderViewDelegate.h"

@class CALayer, IGListHeaderView, IGStoryLinkCreationPreviewCell, NSString, UILabel;

@interface IGStoryBusinessTransactionLinksCreationFormCell : IGGroupedTableViewCell <IGListHeaderViewDelegate>
{
    IGListHeaderView *_headerView;
    IGStoryLinkCreationPreviewCell *_storyPreviewCell;
    double _storyPreviewCropBottomPercentage;
    UILabel *_previewLinkLabel;
    CALayer *_separatorLayer;
    id <IGStoryBusinessTransactionLinksCreationFormCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryBusinessTransactionLinksCreationFormCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)headerViewActionWasTapped:(id)arg1;
- (double)_getHeightToMaintainAspectRatioForWidth:(double)arg1;
- (double)_storyPreviewWidth;
- (double)preferredHeight;
- (void)refreshStoryPreview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 userSession:(id)arg2 reuseIdentifier:(id)arg3 headerTitle:(id)arg4 storyScreenshot:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

