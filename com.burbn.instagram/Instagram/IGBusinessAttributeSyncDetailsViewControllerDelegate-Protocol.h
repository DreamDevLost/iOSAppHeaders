//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessAttributeSyncInfo;

@protocol IGBusinessAttributeSyncDetailsViewControllerDelegate <NSObject>
- (void)didTapBackButtonAtStep:(long long)arg1 dataModel:(IGBusinessAttributeSyncInfo *)arg2;
- (void)didTapDismissButtonAtStep:(long long)arg1 dataModel:(IGBusinessAttributeSyncInfo *)arg2;
- (void)didSelectNextButtonAtStep:(long long)arg1 updatedDataModel:(IGBusinessAttributeSyncInfo *)arg2;
@end

