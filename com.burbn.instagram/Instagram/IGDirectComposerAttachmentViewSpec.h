//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectComposerAttachmentViewSpec : NSObject
{
    _Bool _shouldHideForKeyboardPresentation;
    CDUnknownBlockType _viewProvider;
    double _viewHeight;
}

@property(readonly, nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(readonly, nonatomic) _Bool shouldHideForKeyboardPresentation; // @synthesize shouldHideForKeyboardPresentation=_shouldHideForKeyboardPresentation;
@property(readonly, nonatomic) CDUnknownBlockType viewProvider; // @synthesize viewProvider=_viewProvider;
- (void).cxx_destruct;
- (id)initWithViewProvider:(CDUnknownBlockType)arg1 shouldHideForKeyboardPresentation:(_Bool)arg2 viewHeight:(double)arg3;

@end
