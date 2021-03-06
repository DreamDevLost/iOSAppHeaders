//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGConstrainedSizeStickerViewType.h"
#import "IGTappableStickerViewType.h"
#import "IGUnpinnableStickerViewType.h"
#import "UITextViewDelegate.h"

@class IGFundraiserStickerDonateButtonView, IGGradientView, IGRemoteImageView, IGStoryFundraiserStickerConsumptionSheetModel, IGTextView, IGUser, NSArray, NSString, UIColor, UILabel;

@interface IGFundraiserStickerView : UIView <UITextViewDelegate, IGConstrainedSizeStickerViewType, IGUnpinnableStickerViewType, IGTappableStickerViewType>
{
    IGGradientView *_gradientView;
    IGTextView *_titleTextView;
    IGRemoteImageView *_profilePictureImageView;
    UIView *_profilePictureBorderView;
    UILabel *_subtitleLabel;
    IGFundraiserStickerDonateButtonView *_donateButton;
    NSString *_viewerUsername;
    _Bool _hasEditedTitle;
    IGUser *_beneficiary;
    NSString *_pk;
    IGStoryFundraiserStickerConsumptionSheetModel *_consumptionSheetModel;
    id <IGFundraiserStickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFundraiserStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_fundraiserStickerModel;
- (id)storyAssetDiffableIdentifier;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (_Bool)disableStickerPinning;
- (id)stickerView;
- (id)loggingId;
- (id)tapModelObject;
@property(retain, nonatomic) UIColor *donateTextColor;
@property(retain, nonatomic) UIColor *subtitleColor;
@property(retain, nonatomic) UIColor *titleColor;
@property(retain, nonatomic) NSArray *backgroundColors;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_defaultInitWithModel:(id)arg1;
- (id)initConsumptionWithStickerModel:(id)arg1;
- (id)initCreationWithStickerModel:(id)arg1 viewerUsername:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

