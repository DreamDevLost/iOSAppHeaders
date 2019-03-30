//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString, UIColor;

@interface IGStoryAdTextModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_text;
    UIColor *_textBackgroundColor;
    UIColor *_textColor;
    NSDictionary *_mentionedUser;
}

@property(readonly, copy, nonatomic) NSDictionary *mentionedUser; // @synthesize mentionedUser=_mentionedUser;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 textBackgroundColor:(id)arg2 textColor:(id)arg3 mentionedUser:(id)arg4;

@end

