//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedItemCTAButtonCellConfigurable.h"

@class IGFeedItem, IGLeftAlignedFullWidthCTAButton, NSArray, NSString, UIView;

@interface IGFeedItemCTAButtonCell : UICollectionViewCell <IGFeedItemCTAButtonCellConfigurable>
{
    _Bool _ctaVisible;
    IGFeedItem *_feedItem;
    unsigned long long _accessoryViewType;
    id <IGFeedItemCTAButtonCellConfigurableDelegate> _delegate;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    UIView *_customizableButtonContainer;
    IGLeftAlignedFullWidthCTAButton *_customizableButton;
    unsigned long long _customizableButtonCTAState;
    NSArray *_accessibilityElements;
}

+ (double)height;
@property(copy, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(nonatomic, getter=isCTAVisible) _Bool ctaVisible; // @synthesize ctaVisible=_ctaVisible;
@property(nonatomic) unsigned long long customizableButtonCTAState; // @synthesize customizableButtonCTAState=_customizableButtonCTAState;
@property(retain, nonatomic) IGLeftAlignedFullWidthCTAButton *customizableButton; // @synthesize customizableButton=_customizableButton;
@property(readonly, nonatomic) UIView *customizableButtonContainer; // @synthesize customizableButtonContainer=_customizableButtonContainer;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) __weak id <IGFeedItemCTAButtonCellConfigurableDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)_accessibleElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGRect)_frameForCustomizableButton;
- (void)_onCustomizableButtonPressed:(id)arg1;
- (void)prepareForReuse;
- (void)updateForVisibleDisplayRect:(struct CGRect)arg1;
- (void)setCustomizableButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCustomizableButtonToCTAState:(unsigned long long)arg1 withIntent:(id)arg2 animated:(_Bool)arg3;
- (void)progressCustomizableButtonCTAStateWithIntent:(id)arg1;
- (void)_setCustomizableButtonBackgroundColor:(id)arg1;
- (void)setCustomizableButtonPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2;
- (void)prograssivelyUpdateButtonStyleFromPostItem:(id)arg1 toPostItem:(id)arg2 progressPercentage:(double)arg3;
- (void)updateDestinationAdText:(id)arg1 accessoryColor:(id)arg2;
- (void)_updateDestinationAdTextForAdMetadata:(id)arg1;
- (void)updateButtonWithPostItem:(id)arg1;
- (void)configureWithFeedItem:(id)arg1 cellDelegate:(id)arg2 loggingDelegate:(id)arg3 actionCellState:(id)arg4 pageCellState:(id)arg5 accessoryPosition:(unsigned long long)arg6 tappableAreaInsets:(struct UIEdgeInsets)arg7;
- (void)configureWithTitle:(id)arg1 backgroundColor:(id)arg2 cellDelegate:(id)arg3;
- (void)_setupVisibilityAction;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

