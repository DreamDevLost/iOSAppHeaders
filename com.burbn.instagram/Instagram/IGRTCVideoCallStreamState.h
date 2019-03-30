//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRTCVideoCallStreamState : NSObject
{
    _Bool _videoEnabled;
    _Bool _videoStalled;
    _Bool _audioEnabled;
}

@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) _Bool videoStalled; // @synthesize videoStalled=_videoStalled;
@property(readonly, nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) long long videoState;
- (id)initWithVideoEnabled:(_Bool)arg1 videoStalled:(_Bool)arg2 audioEnabled:(_Bool)arg3;

@end

