//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAREffectListDownloader, IGAREffectListModel, IGAREffectTargetResponse;

@protocol IGAREffectListDownloaderDelegate <NSObject>
- (void)arEffectsDownloader:(IGAREffectListDownloader *)arg1 didFetchEffectListModel:(IGAREffectListModel *)arg2 withTargetResponse:(IGAREffectTargetResponse *)arg3 fromNetwork:(_Bool)arg4;
@end

