//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGGDPRConsentLayoutSpec, NSMutableArray;

@interface IGGDPRConsentMultiTextView : UIView
{
    NSMutableArray *_textViews;
    IGGDPRConsentLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2;

@end

