//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class KFLayer;

@interface IGStoryGalleryWorldEffectButton : UIButton
{
    KFLayer *_selectedLayer;
    KFLayer *_unselectedLayer;
}

- (void).cxx_destruct;
- (void)_updateDisplayForCurrentState;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)init;

@end

