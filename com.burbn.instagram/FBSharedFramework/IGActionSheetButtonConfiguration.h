//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface IGActionSheetButtonConfiguration : NSObject
{
    NSString *_title;
    NSString *_accessibilityIdentifier;
    UIImage *_image;
    long long _style;
}

+ (id)buttonWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 style:(long long)arg4;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithButtonTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 style:(long long)arg4;

@end
