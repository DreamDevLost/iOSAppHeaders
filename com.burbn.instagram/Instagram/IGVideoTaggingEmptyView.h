//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface IGVideoTaggingEmptyView : UIControl
{
    UILabel *_taggingAddLabel;
    UILabel *_taggingMultipleLabel;
    UIImageView *_plusIcon;
    _Bool _hasMultipleAssets;
    long long _taggingMode;
}

@property(nonatomic) long long taggingMode; // @synthesize taggingMode=_taggingMode;
@property(nonatomic) _Bool hasMultipleAssets; // @synthesize hasMultipleAssets=_hasMultipleAssets;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
