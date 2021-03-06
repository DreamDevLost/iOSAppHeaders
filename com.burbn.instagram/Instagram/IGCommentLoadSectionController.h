//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGCommentLoadMore, IGHeaderFooterSupplementaryViewSource;

@interface IGCommentLoadSectionController : IGListSectionController
{
    _Bool _shouldShowSeparator;
    id <IGCommentLoadItemDelegate> _delegate;
    unsigned long long _direction;
    IGCommentLoadMore *_loadMore;
    IGHeaderFooterSupplementaryViewSource *_compositedViewSource;
}

@property(retain, nonatomic) IGHeaderFooterSupplementaryViewSource *compositedViewSource; // @synthesize compositedViewSource=_compositedViewSource;
@property(readonly, nonatomic) IGCommentLoadMore *loadMore; // @synthesize loadMore=_loadMore;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) __weak id <IGCommentLoadItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithShouldShowSeparator:(_Bool)arg1;
- (id)init;

@end

