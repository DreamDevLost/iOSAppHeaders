//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGListItemView;

@interface IGListItemTableViewCell : UITableViewCell
{
    id <IGListItemViewProvider> _provider;
    IGListItemView *_itemView;
}

@property(readonly, nonatomic) IGListItemView *itemView; // @synthesize itemView=_itemView;
@property(readonly, nonatomic) id <IGListItemViewProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)__private_initializeProvider:(id)arg1;

@end

