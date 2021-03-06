//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGPhoto, IGVideo;

@interface IGDirectPublishedMessageVisualMedia : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGPhoto *_photo;
    IGVideo *_video_video;
    IGPhoto *_video_overlayPhoto;
}

+ (id)videoWithVideo:(id)arg1 overlayPhoto:(id)arg2;
+ (id)photo:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhoto:(CDUnknownBlockType)arg1 video:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanPhoto:(CDUnknownBlockType)arg1 video:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

