//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface IGRearrangeOverlayView : UIView
{
    long long _type;
    UILabel *_removeLabel;
    UIImageView *_removeImageView;
}

@property(retain, nonatomic) UIImageView *removeImageView; // @synthesize removeImageView=_removeImageView;
@property(retain, nonatomic) UILabel *removeLabel; // @synthesize removeLabel=_removeLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_updateRemoveText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

