//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCanvasSwipeUpViewDelegate.h"

@class IGCanvasSwipeUpView, IGGradientView, NSString;

@interface IGCanvasSwipeUpCell : UICollectionViewCell <IGCanvasSwipeUpViewDelegate>
{
    IGGradientView *_gradientView;
    IGCanvasSwipeUpView *_swipeUpView;
    id <IGCanvasSwipeUpCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)canvasSwipeUpViewDidTap;
- (void)layoutSubviews;
- (void)configureViewModel:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

