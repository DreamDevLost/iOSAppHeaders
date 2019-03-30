//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor;

@interface IGCanvasRichTextViewModelBuilder : NSObject
{
    NSString *_text;
    double _fontSize;
    UIColor *_textColor;
    double _lineHeight;
    NSArray *_inlineStyles;
    long long _textAlignment;
    NSString *_fontName;
}

- (void).cxx_destruct;
- (id)richTextViewModel;
- (id)withInlineStyles:(id)arg1;
- (id)withFontName:(id)arg1;
- (id)withTextAlignment:(long long)arg1;
- (id)withLineHeight:(double)arg1;
- (id)withTextColor:(id)arg1;
- (id)withFontSize:(double)arg1;
- (id)withText:(id)arg1;
- (id)init;

@end

