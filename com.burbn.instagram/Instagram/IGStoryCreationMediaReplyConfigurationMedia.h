//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGPhoto, UIImage;

@interface IGStoryCreationMediaReplyConfigurationMedia : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGPhoto *_photo_sourceMediaPhoto;
    UIImage *_videoFrame_sourceMediaVideoFrame;
}

+ (id)videoFrameWithSourceMediaVideoFrame:(id)arg1;
+ (id)photoWithSourceMediaPhoto:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhoto:(CDUnknownBlockType)arg1 videoFrame:(CDUnknownBlockType)arg2;

@end

