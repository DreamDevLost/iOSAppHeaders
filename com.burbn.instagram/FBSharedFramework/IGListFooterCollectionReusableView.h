//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class IGListFooterView, NSString;

@interface IGListFooterCollectionReusableView : UICollectionReusableView
{
    IGListFooterView *_footerView;
}

+ (double)heightWithText:(id)arg1 contentWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingSeparator;
@property(retain, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

