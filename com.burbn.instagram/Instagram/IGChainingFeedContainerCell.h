//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, UIViewController;

@interface IGChainingFeedContainerCell : UICollectionViewCell
{
    CALayer *_overlayLayer;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(nonatomic) double overlayAlpha;
- (void)configureWithViewController:(id)arg1 parentViewController:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

