//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMultiMediaWriterItem.h"

@class AVAsset, NSURL;

@interface IGMultiMediaWriterVideoItem : NSObject <IGMultiMediaWriterItem>
{
    NSURL *_videoFileURL;
    AVAsset *_mediaAsset;
}

@property(retain, nonatomic) AVAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(readonly, nonatomic) NSURL *videoFileURL; // @synthesize videoFileURL=_videoFileURL;
- (void).cxx_destruct;
- (_Bool)hasAudioTrack;
- (CDStruct_1b6d18a9)duration;
- (void)prepareItemOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)preparedMediaAsset;
- (id)initWithVideoFileURL:(id)arg1;

@end

