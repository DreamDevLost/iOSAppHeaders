//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRTCVideoView, RTCVideoTrack;

@interface IGWebRTCVideoViewContainer : NSObject
{
    IGRTCVideoView *_view;
    RTCVideoTrack *_track;
}

@property(readonly, nonatomic) RTCVideoTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) IGRTCVideoView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1 track:(id)arg2;

@end
