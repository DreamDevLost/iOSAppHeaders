//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGTVCreationFlowNavigationBar, UICollectionView, UIPageControl;

@interface IGTVChannelOnboardingView : UIView
{
    UICollectionView *_collectionView;
    IGTVCreationFlowNavigationBar *_navigationBar;
    UIPageControl *_pageControl;
}

@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) IGTVCreationFlowNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

