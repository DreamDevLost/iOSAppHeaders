//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface IGUFIButton : UIButton
{
    long long _type;
    long long _colorType;
}

@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)_updateStyle;
- (id)initWithType:(long long)arg1 colorType:(long long)arg2;

@end

