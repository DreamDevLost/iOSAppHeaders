//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface IGTableViewCell : UITableViewCell
{
    long long _customAccessoryType;
    _Bool _listRedesignOn;
    _Bool _isCheckmarkMutuallyExclusive;
    long long _cellStyle;
}

@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool isCheckmarkMutuallyExclusive; // @synthesize isCheckmarkMutuallyExclusive=_isCheckmarkMutuallyExclusive;
@property(nonatomic, getter=isListRedesignOn) _Bool listRedesignOn; // @synthesize listRedesignOn=_listRedesignOn;
- (void)setAccessoryView:(id)arg1;
- (void)_updateAccessoryViewWithCurrentType;
- (void)setAccessoryType:(long long)arg1;
- (long long)accessoryType;
- (void)updateLabelStyles;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

