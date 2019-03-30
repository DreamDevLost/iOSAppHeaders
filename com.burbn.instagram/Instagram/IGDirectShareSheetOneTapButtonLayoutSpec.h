//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor, UIFont;

@interface IGDirectShareSheetOneTapButtonLayoutSpec : FBValueObject <NSCopying, NSCoding>
{
    _Bool _borderlessEnabled;
    UIColor *_defaultBackgroundColor;
    UIColor *_defaultBorderColor;
    UIColor *_defaultTextColor;
    UIColor *_disabledBackgroundColor;
    UIColor *_disabledBorderColor;
    UIColor *_undoBackgroundColor;
    UIColor *_undoBorderColor;
    UIColor *_undoTextColor;
    UIColor *_sentBackgroundColor;
    UIColor *_sentBorderColor;
    UIColor *_sentTextColor;
    UIColor *_disabledSentBackgroundColor;
    UIColor *_disabledSentBorderColor;
    UIColor *_disabledSentTextColor;
    UIFont *_textFont;
    UIFont *_disabledSentTextFont;
    double _minimumWidth;
    double _textPadding;
    double _backgroundHeight;
}

+ (id)borderlessSendButtonLayoutSpec;
+ (id)sendButtonLayoutSpec;
@property(readonly, nonatomic) _Bool borderlessEnabled; // @synthesize borderlessEnabled=_borderlessEnabled;
@property(readonly, nonatomic) double backgroundHeight; // @synthesize backgroundHeight=_backgroundHeight;
@property(readonly, nonatomic) double textPadding; // @synthesize textPadding=_textPadding;
@property(readonly, nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(readonly, copy, nonatomic) UIFont *disabledSentTextFont; // @synthesize disabledSentTextFont=_disabledSentTextFont;
@property(readonly, copy, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(readonly, copy, nonatomic) UIColor *disabledSentTextColor; // @synthesize disabledSentTextColor=_disabledSentTextColor;
@property(readonly, copy, nonatomic) UIColor *disabledSentBorderColor; // @synthesize disabledSentBorderColor=_disabledSentBorderColor;
@property(readonly, copy, nonatomic) UIColor *disabledSentBackgroundColor; // @synthesize disabledSentBackgroundColor=_disabledSentBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *sentTextColor; // @synthesize sentTextColor=_sentTextColor;
@property(readonly, copy, nonatomic) UIColor *sentBorderColor; // @synthesize sentBorderColor=_sentBorderColor;
@property(readonly, copy, nonatomic) UIColor *sentBackgroundColor; // @synthesize sentBackgroundColor=_sentBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *undoTextColor; // @synthesize undoTextColor=_undoTextColor;
@property(readonly, copy, nonatomic) UIColor *undoBorderColor; // @synthesize undoBorderColor=_undoBorderColor;
@property(readonly, copy, nonatomic) UIColor *undoBackgroundColor; // @synthesize undoBackgroundColor=_undoBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *disabledBorderColor; // @synthesize disabledBorderColor=_disabledBorderColor;
@property(readonly, copy, nonatomic) UIColor *disabledBackgroundColor; // @synthesize disabledBackgroundColor=_disabledBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(readonly, copy, nonatomic) UIColor *defaultBorderColor; // @synthesize defaultBorderColor=_defaultBorderColor;
@property(readonly, copy, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void).cxx_destruct;
- (id)initWithDefaultBackgroundColor:(id)arg1 defaultBorderColor:(id)arg2 defaultTextColor:(id)arg3 disabledBackgroundColor:(id)arg4 disabledBorderColor:(id)arg5 undoBackgroundColor:(id)arg6 undoBorderColor:(id)arg7 undoTextColor:(id)arg8 sentBackgroundColor:(id)arg9 sentBorderColor:(id)arg10 sentTextColor:(id)arg11 disabledSentBackgroundColor:(id)arg12 disabledSentBorderColor:(id)arg13 disabledSentTextColor:(id)arg14 textFont:(id)arg15 disabledSentTextFont:(id)arg16 minimumWidth:(double)arg17 textPadding:(double)arg18 backgroundHeight:(double)arg19 borderlessEnabled:(_Bool)arg20;

@end
