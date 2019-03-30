//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface IGSlideshowTheme : FBValueObject <NSCopying, NSCoding>
{
    UIColor *_outerBackgroundColor;
    UIColor *_outerForegroundColor;
    long long _statusBarStyle;
}

+ (id)light;
+ (id)dark;
+ (id)themeForUserSession:(id)arg1;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, copy, nonatomic) UIColor *outerForegroundColor; // @synthesize outerForegroundColor=_outerForegroundColor;
@property(readonly, copy, nonatomic) UIColor *outerBackgroundColor; // @synthesize outerBackgroundColor=_outerBackgroundColor;
- (void).cxx_destruct;
- (id)initWithOuterBackgroundColor:(id)arg1 outerForegroundColor:(id)arg2 statusBarStyle:(long long)arg3;

@end
