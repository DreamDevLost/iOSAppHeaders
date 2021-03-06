//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGFavoritesTabBarView, IGSearchBar, NSString, UILabel;

@interface IGFavoritesHomeHeaderView : UIView
{
    UILabel *_infoLabel;
    IGFavoritesTabBarView *_tabBarView;
    UIView *_searchBarBottomBorder;
    double _topInset;
    IGSearchBar *_searchBar;
    id <IGFavoritesHomeHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGFavoritesHomeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) IGFavoritesTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (void).cxx_destruct;
@property(nonatomic) double searchBarBottomBorderAlpha;
@property(retain, nonatomic) NSString *baseInfoText;
- (void)_onInfoLabelTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

