//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGRadioButtonView, NSString, UILabel;

@interface IGDirectInboxFilterCell : UITableViewCell
{
    _Bool _isSelected;
    UILabel *_cellLabel;
    IGRadioButtonView *_selectedFilterRadioButton;
    IGRadioButtonView *_deselectedFilterRadioButton;
    NSString *_module;
}

+ (double)height;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)updateCellToSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFilterName:(id)arg1 reuseIdentifier:(id)arg2 module:(id)arg3;

@end
