//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (Screenshot)
- (id)fb_associatedSnapshotViewAfterScreenUpdates:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (id)fb_associatedSnapshotViewAfterScreenUpdates:(_Bool)arg1;
- (id)fb_renderedScreenshotImageOfRect:(struct CGRect)arg1 opaque:(_Bool)arg2;
- (id)fb_renderedScreenshotImageOfRect:(struct CGRect)arg1;
- (id)fb_screenshotImageOfRect:(struct CGRect)arg1 opaque:(_Bool)arg2 afterScreenUpdates:(_Bool)arg3;
- (void)_drawScreenshotImageOfRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withRenderMethod:(unsigned long long)arg3;
- (id)_fb_screenshotImageOfRect:(struct CGRect)arg1 opaque:(_Bool)arg2 renderMethod:(unsigned long long)arg3;
@end
