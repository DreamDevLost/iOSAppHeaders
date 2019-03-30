//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSearchBarWithCancel, UIActivityIndicatorView, UIButton, UILabel, UIPageControl, UIVisualEffectView;

@interface IGStoryStickerTrayContainerView : UIView
{
    UIVisualEffectView *_blurEffectView;
    UIView *_searchActivityContainerView;
    UILabel *_searchLabel;
    UIActivityIndicatorView *_searchActivityIndicator;
    _Bool _searchActivityIndicatorVisible;
    id <IGStoryStickerTrayContainerViewDelegate> _delegate;
    UIButton *_chevronView;
    IGSearchBarWithCancel *_searchBarWithCancel;
    UIPageControl *_pageControl;
    long long _backgroundBlurStyle;
    unsigned long long _searchBarConfigStyle;
    UIView *_trayContentView;
    UIView *_searchResultsView;
}

@property(nonatomic) _Bool searchActivityIndicatorVisible; // @synthesize searchActivityIndicatorVisible=_searchActivityIndicatorVisible;
@property(retain, nonatomic) UIView *searchResultsView; // @synthesize searchResultsView=_searchResultsView;
@property(retain, nonatomic) UIView *trayContentView; // @synthesize trayContentView=_trayContentView;
@property(nonatomic) unsigned long long searchBarConfigStyle; // @synthesize searchBarConfigStyle=_searchBarConfigStyle;
@property(nonatomic) long long backgroundBlurStyle; // @synthesize backgroundBlurStyle=_backgroundBlurStyle;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) IGSearchBarWithCancel *searchBarWithCancel; // @synthesize searchBarWithCancel=_searchBarWithCancel;
@property(readonly, nonatomic) UIButton *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic) __weak id <IGStoryStickerTrayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackgroundBlurStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_didChangePageControl:(id)arg1;
- (void)_didTapChevronButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
