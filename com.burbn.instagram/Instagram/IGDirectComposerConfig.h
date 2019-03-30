//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDirectComposerBackgroundConfig, UIColor;

@interface IGDirectComposerConfig : FBValueObject <NSCopying, NSCoding>
{
    IGDirectComposerBackgroundConfig *_backgroundConfig;
    double _defaultOvalHeight;
    UIColor *_ovalBackgroundColor;
    UIColor *_ovalBorderColor;
    UIColor *_textColor;
    UIColor *_placeholderTextColor;
}

+ (id)mainAppThreadConfig;
+ (id)directAppThreadConfig;
@property(readonly, copy, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) UIColor *ovalBorderColor; // @synthesize ovalBorderColor=_ovalBorderColor;
@property(readonly, copy, nonatomic) UIColor *ovalBackgroundColor; // @synthesize ovalBackgroundColor=_ovalBackgroundColor;
@property(readonly, nonatomic) double defaultOvalHeight; // @synthesize defaultOvalHeight=_defaultOvalHeight;
@property(readonly, copy, nonatomic) IGDirectComposerBackgroundConfig *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
- (void).cxx_destruct;
- (id)initWithBackgroundConfig:(id)arg1 defaultOvalHeight:(double)arg2 ovalBackgroundColor:(id)arg3 ovalBorderColor:(id)arg4 textColor:(id)arg5 placeholderTextColor:(id)arg6;

@end
