//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGStoryColorPaletteView, IGStoryEyedropperToggleButton, IGStoryHuePickerView;

@interface IGStoryColorPickingControls : UIView
{
    _Bool _huePickerVisible;
    IGStoryColorPaletteView *_colorPaletteView;
    IGStoryEyedropperToggleButton *_eyedropperToggleButton;
    IGStoryHuePickerView *_huePickerView;
}

@property(nonatomic) _Bool huePickerVisible; // @synthesize huePickerVisible=_huePickerVisible;
@property(readonly, nonatomic) IGStoryHuePickerView *huePickerView; // @synthesize huePickerView=_huePickerView;
@property(readonly, nonatomic) IGStoryEyedropperToggleButton *eyedropperToggleButton; // @synthesize eyedropperToggleButton=_eyedropperToggleButton;
@property(readonly, nonatomic) IGStoryColorPaletteView *colorPaletteView; // @synthesize colorPaletteView=_colorPaletteView;
- (void).cxx_destruct;
- (void)setHuePickerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithColorPalettes:(id)arg1 eyedropperColorPickerEnabled:(_Bool)arg2;

@end

