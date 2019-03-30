//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

#import "IGListHeaderViewDelegate.h"

@class CALayer, IGListHeaderView, NSString, UITextField;

@interface IGStoryWebLinksCreationFormCell : IGGroupedTableViewCell <IGListHeaderViewDelegate>
{
    _Bool _shouldShowHeader;
    IGListHeaderView *_headerView;
    CALayer *_separatorLayer;
    UITextField *_urlTextField;
    id <IGStoryWebLinksCreationFormCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryWebLinksCreationFormCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextField *urlTextField; // @synthesize urlTextField=_urlTextField;
- (void).cxx_destruct;
- (void)headerViewActionWasTapped:(id)arg1;
- (double)preferredHeight;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 shouldShowHeader:(_Bool)arg3 shouldShowSeparator:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

