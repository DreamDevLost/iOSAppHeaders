//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGNonFeedActivationWelcomeCardCellDelegate.h"

@class IGNonFeedActivationWelcomeCardCell, IGNonFeedActivationWelcomeCardViewModel;

@interface IGNonFeedActivationWelcomeCardSectionController : IGListSectionController <IGNonFeedActivationWelcomeCardCellDelegate>
{
    id <IGNonFeedActivationWelcomeCardSectionControllerDelegate> _delegate;
    IGNonFeedActivationWelcomeCardCell *_sizingCell;
    IGNonFeedActivationWelcomeCardViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)nonFeedActivationWelcomeCardCellDidTapAction:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1;

@end
