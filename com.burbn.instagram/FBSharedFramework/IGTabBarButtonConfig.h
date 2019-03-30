//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, UIImage;

@interface IGTabBarButtonConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _clearsBadgeWhenSelected;
    unsigned long long _badgeType;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSString *_accessibilityLabel;
    NSString *_accessibilityIdentifier;
}

+ (id)directInboxConfig;
+ (id)profileButtonConfigForMultipleUsersWithBadgeType:(unsigned long long)arg1;
+ (id)profileButtonConfigWithBadgeType:(unsigned long long)arg1;
+ (id)newsButtonConfigWithBadgeType:(unsigned long long)arg1;
+ (id)cameraButtonConfigWithBadgeType:(unsigned long long)arg1;
+ (id)exploreButtonConfigWithBadgeType:(unsigned long long)arg1;
+ (id)homeButtonConfigWithBadgeType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool clearsBadgeWhenSelected; // @synthesize clearsBadgeWhenSelected=_clearsBadgeWhenSelected;
@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
- (void).cxx_destruct;
- (id)initWithBadgeType:(unsigned long long)arg1 image:(id)arg2 highlightedImage:(id)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 clearsBadgeWhenSelected:(_Bool)arg6;
- (id)_initWithBadgeType:(unsigned long long)arg1 iconName:(unsigned long long)arg2 highlightedIconName:(unsigned long long)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 clearsBadgeWhenSelected:(_Bool)arg6;

@end
