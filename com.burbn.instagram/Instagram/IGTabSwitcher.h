//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UITapGestureRecognizer;

@interface IGTabSwitcher : UIView
{
    _Bool _isUsedOnDarkBackground;
    NSArray *_tabTitles;
    unsigned long long _selectedIndex;
    NSMutableArray *_titleLabelViews;
    NSMutableArray *_lineViews;
    UITapGestureRecognizer *_gestureRecognizer;
    id <IGTabSwitcherDelegate> _delegate;
}

@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) __weak id <IGTabSwitcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) NSMutableArray *lineViews; // @synthesize lineViews=_lineViews;
@property(readonly, nonatomic) NSMutableArray *titleLabelViews; // @synthesize titleLabelViews=_titleLabelViews;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *tabTitles; // @synthesize tabTitles=_tabTitles;
- (void).cxx_destruct;
- (void)_didTapOnSwithcer:(id)arg1;
- (id)_createLineViews;
- (void)_dehighlightSelectedTab:(unsigned long long)arg1;
- (void)_highlightSelectedTab:(unsigned long long)arg1;
- (id)_createTitleLabel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTabTitles:(id)arg1 preselectedTabIndex:(unsigned long long)arg2 delegate:(id)arg3 isUsedOnDarkBackground:(_Bool)arg4;

@end

