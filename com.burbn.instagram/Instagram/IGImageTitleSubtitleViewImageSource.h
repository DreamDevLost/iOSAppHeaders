//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

@class IGDirectAvatarViewSpec, IGUser, NSString, UIImage;

@interface IGImageTitleSubtitleViewImageSource : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUser *_avatar_firstUser;
    IGUser *_avatar_secondUser;
    IGDirectAvatarViewSpec *_avatar_spec;
    NSString *_avatar_module;
    UIImage *_image_image;
}

+ (id)imageWithImage:(id)arg1;
+ (id)avatarWithFirstUser:(id)arg1 secondUser:(id)arg2 spec:(id)arg3 module:(id)arg4;
- (void).cxx_destruct;
- (void)matchAvatar:(CDUnknownBlockType)arg1 image:(CDUnknownBlockType)arg2;

@end

