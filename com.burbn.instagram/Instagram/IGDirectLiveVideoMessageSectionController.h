//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGDirectExpiringReshareMessageCellDelegate.h"

@class IGDirectLiveVideoMessageViewModel;

@interface IGDirectLiveVideoMessageSectionController : IGDirectMessageSectionController <IGDirectExpiringReshareMessageCellDelegate>
{
}

- (void)messageCellDidTapOnExpiringMediaThumbnail:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) IGDirectLiveVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end
