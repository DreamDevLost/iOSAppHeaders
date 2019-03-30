//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, UIColor;

@interface IGSpinnerLabelViewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _showSeparator;
    long long _spinnerStyle;
    unsigned long long _spinnerInsetsVerticalAlignment;
    unsigned long long _spinnerInsetsHorizontalAlignment;
    unsigned long long _spinnerLabelAlignment;
    UIColor *_backgroundColor;
    double _alpha;
    double _height;
    double _customWidth;
    NSString *_title;
    struct UIEdgeInsets _spinnerInsets;
    struct UIEdgeInsets _separatorInset;
}

+ (id)directComposerSpinner;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(readonly, nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double customWidth; // @synthesize customWidth=_customWidth;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) unsigned long long spinnerLabelAlignment; // @synthesize spinnerLabelAlignment=_spinnerLabelAlignment;
@property(readonly, nonatomic) unsigned long long spinnerInsetsHorizontalAlignment; // @synthesize spinnerInsetsHorizontalAlignment=_spinnerInsetsHorizontalAlignment;
@property(readonly, nonatomic) unsigned long long spinnerInsetsVerticalAlignment; // @synthesize spinnerInsetsVerticalAlignment=_spinnerInsetsVerticalAlignment;
@property(readonly, nonatomic) struct UIEdgeInsets spinnerInsets; // @synthesize spinnerInsets=_spinnerInsets;
@property(readonly, nonatomic) long long spinnerStyle; // @synthesize spinnerStyle=_spinnerStyle;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithSpinnerStyle:(long long)arg1 spinnerInsets:(struct UIEdgeInsets)arg2 spinnerInsetsVerticalAlignment:(unsigned long long)arg3 spinnerInsetsHorizontalAlignment:(unsigned long long)arg4 spinnerLabelAlignment:(unsigned long long)arg5 backgroundColor:(id)arg6 alpha:(double)arg7 height:(double)arg8 customWidth:(double)arg9 title:(id)arg10 showSeparator:(_Bool)arg11 separatorInset:(struct UIEdgeInsets)arg12;

@end
