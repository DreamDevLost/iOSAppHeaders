//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryViewerViewModel, NSDate, NSString;

@interface IGStoryMediaLoggingModel : NSObject
{
    IGStoryViewerViewModel *_viewModel;
    id <IGStoryItemType> _storyItem;
    NSString *_reelCacheKey;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *reelCacheKey; // @synthesize reelCacheKey=_reelCacheKey;
@property(readonly, nonatomic) id <IGStoryItemType> storyItem; // @synthesize storyItem=_storyItem;
@property(readonly, nonatomic) IGStoryViewerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_getMediaModelKey:(id)arg1 storyItem:(id)arg2;
- (id)initWithViewModel:(id)arg1 storyItem:(id)arg2;

@end

