//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGVideoRenderOptions, NSString;

@interface IGVideoUploadConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _useFirstRenderedFrameForCoverPhoto;
    NSString *_uploadId;
    NSString *_mediaId;
    IGVideoRenderOptions *_renderOptions;
    NSString *_waterfallId;
    NSString *_workingPath;
}

@property(readonly, copy, nonatomic) NSString *workingPath; // @synthesize workingPath=_workingPath;
@property(readonly, copy, nonatomic) NSString *waterfallId; // @synthesize waterfallId=_waterfallId;
@property(readonly, nonatomic) _Bool useFirstRenderedFrameForCoverPhoto; // @synthesize useFirstRenderedFrameForCoverPhoto=_useFirstRenderedFrameForCoverPhoto;
@property(readonly, copy, nonatomic) IGVideoRenderOptions *renderOptions; // @synthesize renderOptions=_renderOptions;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
- (void).cxx_destruct;
- (id)initWithUploadId:(id)arg1 mediaId:(id)arg2 renderOptions:(id)arg3 useFirstRenderedFrameForCoverPhoto:(_Bool)arg4 waterfallId:(id)arg5 workingPath:(id)arg6;

@end

