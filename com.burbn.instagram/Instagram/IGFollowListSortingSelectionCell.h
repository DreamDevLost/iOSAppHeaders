//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

@class IGFollowListSortingSelectionViewModel;

@interface IGFollowListSortingSelectionCell : IGGroupedTableViewCell
{
    _Bool _optionSelected;
    IGFollowListSortingSelectionViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)_selectionSortingImageViewWithSelection:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)updateLabelStyles;
- (void)prepareForReuse;

@end

