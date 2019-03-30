//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGBakeoffPromptTextView, IGBakeoffSelectionView;

@interface IGBakeoffSelectionPromptView : UIView
{
    IGBakeoffSelectionView *_selectionView;
    IGBakeoffPromptTextView *_promptTextView;
}

@property(readonly, nonatomic) IGBakeoffPromptTextView *promptTextView; // @synthesize promptTextView=_promptTextView;
@property(readonly, nonatomic) IGBakeoffSelectionView *selectionView; // @synthesize selectionView=_selectionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupSelectionViewWithDelegate:(id)arg1;
- (void)_setupPromptTextView;
- (id)initWithSelectionViewDelegate:(id)arg1;

@end

