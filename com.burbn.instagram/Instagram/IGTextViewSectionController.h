//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGCoreTextLinkHandler.h"

@class NSString;

@interface IGTextViewSectionController : IGListSectionController <IGCoreTextLinkHandler>
{
    id <IGTextViewSectionControllerDelegate> _delegate;
    id <IGTextViewItemViewModelProtocol> _viewModel;
}

@property(readonly, nonatomic) id <IGTextViewItemViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGTextViewSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_heightForStyledString:(id)arg1 insets:(struct UIEdgeInsets)arg2 constrainedToWidth:(double)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
