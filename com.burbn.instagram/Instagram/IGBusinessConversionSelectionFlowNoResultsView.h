//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGBusinessSelectionFlowNoResultsView.h"

@class IGButton, NSString, UILabel;

@interface IGBusinessConversionSelectionFlowNoResultsView : UIView <IGBusinessSelectionFlowNoResultsView>
{
    id <IGBusinessSelectionFlowNoResultsViewDelegate> delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGButton *_createPageButton;
    UILabel *_disclaimerLabel;
}

@property(retain, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) IGButton *createPageButton; // @synthesize createPageButton=_createPageButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <IGBusinessSelectionFlowNoResultsViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_newSecondaryLabel;
- (void)_didTapCreatePageButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
