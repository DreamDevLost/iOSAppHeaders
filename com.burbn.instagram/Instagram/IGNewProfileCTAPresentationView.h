//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCTAPresentationViewType.h"

@class IGFeedPhotoView, NSString, UIButton, UILabel;

@interface IGNewProfileCTAPresentationView : UIView <IGCTAPresentationViewType>
{
    NSString *_module;
    long long _midRollCTAType;
    _Bool _isCollapsed;
    unsigned long long _presentationStyle;
    id <IGCTAPresentationViewDelegate> _delegate;
    id <IGCTAPresentationConfigurationType> _configuration;
    IGFeedPhotoView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_directResponseButton;
    UIView *_contentView;
    UIView *_chevronView;
}

@property(readonly, nonatomic) UIView *chevronView; // @synthesize chevronView=_chevronView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIButton *directResponseButton; // @synthesize directResponseButton=_directResponseButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) IGFeedPhotoView *imageView; // @synthesize imageView=_imageView;
@property(readonly, copy, nonatomic) id <IGCTAPresentationConfigurationType> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak id <IGCTAPresentationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
- (void).cxx_destruct;
- (void)_didTapDirectResponseButton:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)_configureVerticalCenterLayoutForLabel:(id)arg1;
- (void)_configureStackedLabelLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)_updateImageView;
- (void)_updateDirectResponseButton;
- (void)_updateChevronView;
- (id)initWithDelegate:(id)arg1 presentationStyle:(unsigned long long)arg2 configuration:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
