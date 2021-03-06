//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGRTCVideoCallConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _audioEnabled;
    _Bool _videoEnabled;
}

@property(readonly, nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
- (id)initWithAudioEnabled:(_Bool)arg1 videoEnabled:(_Bool)arg2;

@end

