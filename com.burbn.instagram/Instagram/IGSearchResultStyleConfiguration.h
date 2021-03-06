//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface IGSearchResultStyleConfiguration : FBValueObject <NSCopying, NSCoding>
{
    UIColor *_titleTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_backgroundColor;
    UIColor *_highlightColor;
    UIColor *_verifiedBadgeColor;
}

@property(readonly, copy, nonatomic) UIColor *verifiedBadgeColor; // @synthesize verifiedBadgeColor=_verifiedBadgeColor;
@property(readonly, copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(readonly, copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
- (void).cxx_destruct;
- (id)initWithTitleTextColor:(id)arg1 secondaryTextColor:(id)arg2 backgroundColor:(id)arg3 highlightColor:(id)arg4 verifiedBadgeColor:(id)arg5;

@end

