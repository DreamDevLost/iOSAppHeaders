//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class NSURL, UIImage;

@interface IGDirectVisualMessagePreviewThumbnailSpecifier : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIImage *_thumbnailImage;
    NSURL *_thumbnailURL;
}

+ (id)thumbnailURL:(id)arg1;
+ (id)thumbnailImage:(id)arg1;
+ (id)emptyThumbnail;
- (void).cxx_destruct;
- (void)matchEmptyThumbnail:(CDUnknownBlockType)arg1 thumbnailImage:(CDUnknownBlockType)arg2 thumbnailURL:(CDUnknownBlockType)arg3;
- (id)initWithMessagePhotoUrl:(id)arg1 preloadedImage:(id)arg2;

@end

