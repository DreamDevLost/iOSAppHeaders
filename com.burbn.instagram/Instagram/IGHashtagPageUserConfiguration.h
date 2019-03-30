//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGHashtagPageUserConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _allowFollowing;
    _Bool _isFollowing;
    _Bool _allowStoryMuting;
    _Bool _showDropDownButton;
    NSString *_subtitle;
    NSString *_followButtonText;
}

@property(readonly, copy, nonatomic) NSString *followButtonText; // @synthesize followButtonText=_followButtonText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) _Bool showDropDownButton; // @synthesize showDropDownButton=_showDropDownButton;
@property(readonly, nonatomic) _Bool allowStoryMuting; // @synthesize allowStoryMuting=_allowStoryMuting;
@property(readonly, nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) _Bool allowFollowing; // @synthesize allowFollowing=_allowFollowing;
- (void).cxx_destruct;
- (id)initWithAllowFollowing:(_Bool)arg1 isFollowing:(_Bool)arg2 allowStoryMuting:(_Bool)arg3 showDropDownButton:(_Bool)arg4 subtitle:(id)arg5 followButtonText:(id)arg6;

@end
