//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRichTextEmphasis, NSArray, NSString, UIColor, UIFont;

@interface IGRichTextFormat : NSObject
{
    _Bool _dynamicResizingEnabled;
    _Bool _realignmentEnabled;
    _Bool _backgroundFillEnabled;
    _Bool _fontSizeSliderEnabled;
    _Bool _emphasizeSelectionEnabled;
    _Bool _forceUppercaseText;
    long long _type;
    NSString *_displayName;
    UIFont *_font;
    double _minFontSize;
    double _maxFontSize;
    unsigned long long _defaultAlignment;
    double _lineHeightMultiple;
    NSArray *_displayConfigurations;
    IGRichTextEmphasis *_defaultTextEmphasis;
    UIColor *_defaultTextColor;
    NSString *_loggingName;
    CDUnknownBlockType _textShadowTransformer;
    CDUnknownBlockType _textColorTransformer;
    double _placeholderTextSize;
    long long _autocapitalizationType;
}

@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) double placeholderTextSize; // @synthesize placeholderTextSize=_placeholderTextSize;
@property(readonly, copy, nonatomic) CDUnknownBlockType textColorTransformer; // @synthesize textColorTransformer=_textColorTransformer;
@property(readonly, copy, nonatomic) CDUnknownBlockType textShadowTransformer; // @synthesize textShadowTransformer=_textShadowTransformer;
@property(readonly, copy, nonatomic) NSString *loggingName; // @synthesize loggingName=_loggingName;
@property(readonly, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(readonly, nonatomic) IGRichTextEmphasis *defaultTextEmphasis; // @synthesize defaultTextEmphasis=_defaultTextEmphasis;
@property(readonly, nonatomic) _Bool forceUppercaseText; // @synthesize forceUppercaseText=_forceUppercaseText;
@property(readonly, nonatomic) _Bool emphasizeSelectionEnabled; // @synthesize emphasizeSelectionEnabled=_emphasizeSelectionEnabled;
@property(readonly, nonatomic) _Bool fontSizeSliderEnabled; // @synthesize fontSizeSliderEnabled=_fontSizeSliderEnabled;
@property(readonly, copy, nonatomic) NSArray *displayConfigurations; // @synthesize displayConfigurations=_displayConfigurations;
@property(readonly, nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(readonly, nonatomic) unsigned long long defaultAlignment; // @synthesize defaultAlignment=_defaultAlignment;
@property(readonly, nonatomic) _Bool backgroundFillEnabled; // @synthesize backgroundFillEnabled=_backgroundFillEnabled;
@property(readonly, nonatomic) _Bool realignmentEnabled; // @synthesize realignmentEnabled=_realignmentEnabled;
@property(readonly, nonatomic) _Bool dynamicResizingEnabled; // @synthesize dynamicResizingEnabled=_dynamicResizingEnabled;
@property(readonly, nonatomic) double maxFontSize; // @synthesize maxFontSize=_maxFontSize;
@property(readonly, nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 displayName:(id)arg2 font:(id)arg3 minFontSize:(double)arg4 maxFontSize:(double)arg5 dynamicResizingEnabled:(_Bool)arg6 realignmentEnabled:(_Bool)arg7 backgroundFillEnabled:(_Bool)arg8 defaultAlignment:(unsigned long long)arg9 lineHeightMultiple:(double)arg10 displayConfigurations:(id)arg11 fontSizeSliderEnabled:(_Bool)arg12 defaultTextColor:(id)arg13 loggingName:(id)arg14 forceUppercaseText:(_Bool)arg15 defaultTextEmphasis:(id)arg16 textShadowTransformer:(CDUnknownBlockType)arg17 textColorTransformer:(CDUnknownBlockType)arg18 placeholderTextSize:(double)arg19 autocapitalizationType:(long long)arg20;

@end

