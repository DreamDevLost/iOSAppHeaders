//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIControl, UILabel;

@interface IGStoryExtendedGalleryPermissionsView : UIView
{
    UILabel *_label;
    UIControl *_enablePhotoAccessButton;
}

@property(readonly, nonatomic) UIControl *enablePhotoAccessButton; // @synthesize enablePhotoAccessButton=_enablePhotoAccessButton;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *titleTextColor;
@property(copy, nonatomic) NSString *titleText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

