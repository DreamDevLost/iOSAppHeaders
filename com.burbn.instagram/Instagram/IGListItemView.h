//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGListItemViewProviderDelegate.h"

@class NSString;

@interface IGListItemView : UIView <IGListItemViewProviderDelegate>
{
    UIView *_leadingContent;
    UIView *_bodyContent;
    UIView *_trailingContent;
    _Bool _selected;
    _Bool _highlighted;
    id <IGListItemViewProvider> _provider;
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) id <IGListItemViewProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)viewProviderDidFinishUpdatingOutViews:(id)arg1;
- (double)heightFittingWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

