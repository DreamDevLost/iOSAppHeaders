//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGStoryMusicTrack, IGUser;

@interface IGStoryMusicBrowserRecommendedSongMetadata : NSObject <IGListDiffable>
{
    _Bool _shouldMuteAudio;
    IGStoryMusicTrack *_track;
    IGUser *_user;
}

@property(readonly, nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGStoryMusicTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTrack:(id)arg1 user:(id)arg2 shouldMuteAudio:(_Bool)arg3;

@end
