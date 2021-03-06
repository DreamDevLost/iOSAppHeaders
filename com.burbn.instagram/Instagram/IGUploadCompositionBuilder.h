//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGUploadCompositionBuilder : NSObject
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
- (id)build;
- (void)addAudioWithAudioFileUrl:(id)arg1 uploadId:(id)arg2 uploadParams:(id)arg3 mediaKey:(id)arg4;
- (void)addImageUploadModel:(id)arg1 uploadId:(id)arg2 uploadParams:(id)arg3 mediaKey:(id)arg4;
- (void)addVideoSource:(id)arg1 renderOptions:(id)arg2 coverPhotoImageData:(id)arg3 useFirstFrameForCoverPhoto:(_Bool)arg4 uploadId:(id)arg5 uploadParams:(id)arg6 mediaKey:(id)arg7;
- (id)init;

@end

