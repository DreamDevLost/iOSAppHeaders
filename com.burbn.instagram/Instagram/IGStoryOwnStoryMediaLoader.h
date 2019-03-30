//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession, NSString;

@interface IGStoryOwnStoryMediaLoader : NSObject
{
    NSString *_module;
    id <IGStoryOwnStoryMediaLoaderDelegate> _delegate;
    IGUserSession *_userSession;
    id <IGStoryItemType> _storyItem;
}

@property(readonly, nonatomic) id <IGStoryItemType> storyItem; // @synthesize storyItem=_storyItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGStoryOwnStoryMediaLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_fetchAndSaveVideoFromURLCaches:(id)arg1;
- (void)_respondWithFailureCanRetry:(_Bool)arg1;
- (void)_respondWithImage:(id)arg1;
- (void)_respondWithVideoData:(id)arg1;
- (void)handleVideoLoad:(id)arg1;
- (void)handlePhotoLoad:(id)arg1;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

@end
