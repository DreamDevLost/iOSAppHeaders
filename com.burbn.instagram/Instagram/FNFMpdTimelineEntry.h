//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface FNFMpdTimelineEntry : NSObject
{
    NSURL *_mediaUrl;
    unsigned int _time;
    unsigned int _duration;
    unsigned int _repetition;
    NSString *_mediaTemplate;
}

@property(readonly, copy, nonatomic) NSString *mediaTemplate; // @synthesize mediaTemplate=_mediaTemplate;
@property(readonly, nonatomic) unsigned int repetition; // @synthesize repetition=_repetition;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned int time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)mediaUrl;
- (id)initWithTime:(unsigned int)arg1 duration:(unsigned int)arg2 repetition:(unsigned int)arg3;
- (id)initWithTime:(unsigned int)arg1 duration:(unsigned int)arg2 mediaTemplate:(id)arg3;
- (id)initWithTime:(unsigned int)arg1 duration:(unsigned int)arg2 mediaUrl:(id)arg3;

@end

