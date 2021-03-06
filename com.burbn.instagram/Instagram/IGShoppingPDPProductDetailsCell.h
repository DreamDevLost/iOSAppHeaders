//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, IGShoppingPDPProductDetailsViewModel, NSString, UIButton, UILabel;

@interface IGShoppingPDPProductDetailsCell : UICollectionViewCell <IGCoreTextLinkHandler>
{
    IGShoppingPDPProductDetailsViewModel *_viewModel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    IGCoreTextView *_soldByTextView;
    UIButton *_saveButton;
    UIButton *_shareButton;
    id <IGShoppingPDPProductDetailsCellDelegate> _delegate;
}

+ (double)preferredHeightForWidth:(double)arg1 viewModel:(id)arg2;
@property(nonatomic) __weak id <IGShoppingPDPProductDetailsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_animateSaveButtonWithHasSaved:(_Bool)arg1;
- (void)_onShareButtonPressed;
- (void)_onSaveButtonPressed;
- (void)updateSaveButtonWithHasSaved:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 width:(double)arg2 qpCoordinator:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

