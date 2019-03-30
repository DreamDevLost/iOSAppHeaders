//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGSearchBarDelegate.h"

@class IGSearchBar, NSString;

@interface IGSearchContainingView : UIView <IGSearchBarDelegate>
{
    UIView *_resultsView;
    IGSearchBar *_searchBar;
    id <IGSearchContainingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGSearchContainingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (double)resultsViewHeightThatFits:(double)arg1;
- (void)layoutSubviews;
- (id)initWithSearchBarConfig:(id)arg1 resultsView:(id)arg2 initialQuery:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

