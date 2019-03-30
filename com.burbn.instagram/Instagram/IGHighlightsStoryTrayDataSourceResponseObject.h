//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGTVHighlightsTrayChannelViewModel, NSArray;

@interface IGHighlightsStoryTrayDataSourceResponseObject : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_reels;
    IGTVHighlightsTrayChannelViewModel *_userIGTVChannel;
    NSArray *_suggestedReels;
    long long _suggestedHighlightsUnseenCount;
}

@property(readonly, nonatomic) long long suggestedHighlightsUnseenCount; // @synthesize suggestedHighlightsUnseenCount=_suggestedHighlightsUnseenCount;
@property(readonly, copy, nonatomic) NSArray *suggestedReels; // @synthesize suggestedReels=_suggestedReels;
@property(readonly, copy, nonatomic) IGTVHighlightsTrayChannelViewModel *userIGTVChannel; // @synthesize userIGTVChannel=_userIGTVChannel;
@property(readonly, copy, nonatomic) NSArray *reels; // @synthesize reels=_reels;
- (void).cxx_destruct;
- (id)initWithReels:(id)arg1 userIGTVChannel:(id)arg2 suggestedReels:(id)arg3 suggestedHighlightsUnseenCount:(long long)arg4;

@end
