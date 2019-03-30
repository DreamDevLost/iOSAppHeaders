//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGRTCVideoCallParticipantVideoInfo, NSString;

@interface IGRTCVideoCallParticipantInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _audioEnabled;
    NSString *_userId;
    IGRTCVideoCallParticipantVideoInfo *_videoState;
}

@property(readonly, copy, nonatomic) IGRTCVideoCallParticipantVideoInfo *videoState; // @synthesize videoState=_videoState;
@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 audioEnabled:(_Bool)arg2 videoState:(id)arg3;

@end

