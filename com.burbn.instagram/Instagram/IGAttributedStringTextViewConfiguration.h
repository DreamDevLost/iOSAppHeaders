//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface IGAttributedStringTextViewConfiguration : NSObject
{
    UIColor *_backgroundColor;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)arg1 textViewInsets:(struct UIEdgeInsets)arg2;

@end
