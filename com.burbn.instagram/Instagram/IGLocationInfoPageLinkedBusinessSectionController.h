//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGInfoPageLinkedBusinessCardCollectionViewCellDelegate.h"

@class IGInfoLinkedBusinessViewModel, NSString;

@interface IGLocationInfoPageLinkedBusinessSectionController : IGListSectionController <IGInfoPageLinkedBusinessCardCollectionViewCellDelegate>
{
    IGInfoLinkedBusinessViewModel *_viewModel;
    id <IGLocationInfoPageLinkedBusinessSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLocationInfoPageLinkedBusinessSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)infoPageLinkedBusinessCardCollectionViewCellDidTapViewProfileButton;
- (void)infoPageLinkedBusinessCardCollectionViewCellDidTapProfilePic;
- (void)infoPageLinkedBusinessCardCollectionViewCellDidTapFeedItem:(id)arg1;
- (void)infoPageLinkedBusinessCardCollectionViewCellDidTapTitle;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

