//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGProfileImage, NSString;

@interface IGProfileViewModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showVerifiedBadge;
    IGProfileImage *_profileImage;
    NSString *_titleText;
    NSString *_subtitleText;
}

@property(readonly, nonatomic) _Bool showVerifiedBadge; // @synthesize showVerifiedBadge=_showVerifiedBadge;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) IGProfileImage *profileImage; // @synthesize profileImage=_profileImage;
- (void).cxx_destruct;
- (id)initWithProfileImage:(id)arg1 titleText:(id)arg2 subtitleText:(id)arg3 showVerifiedBadge:(_Bool)arg4;

@end
