//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLocationInfoPageHeaderCell, IGLocationInfoPageModel, IGReel, IGReelOwnerView, IGStoryTrayViewModel;

@protocol IGLocationInfoPageHeaderCellDelegate <NSObject>
- (void)locationInfoPageHeaderCell:(IGLocationInfoPageHeaderCell *)arg1 didTapStory:(IGReelOwnerView *)arg2 withReel:(IGReel *)arg3 reelViewModel:(IGStoryTrayViewModel *)arg4;
- (void)locationInfoPageHeaderCell:(IGLocationInfoPageHeaderCell *)arg1 didTapViewInformationWithModel:(IGLocationInfoPageModel *)arg2;
@end
