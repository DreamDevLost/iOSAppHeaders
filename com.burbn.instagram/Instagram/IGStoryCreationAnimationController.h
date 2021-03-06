//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryCreationAnimationType.h"

@class IGStoryCameraViewController, NSString;

@interface IGStoryCreationAnimationController : NSObject <IGStoryCreationAnimationType>
{
    _Bool _presenting;
    IGStoryCameraViewController *_cameraViewController;
}

@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) IGStoryCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void).cxx_destruct;
- (void)_adjustButton:(id)arg1 transform:(struct CGAffineTransform)arg2 alpha:(double)arg3;
- (void)_showPreviewHeaderView:(id)arg1 footerView:(id)arg2 show:(_Bool)arg3;
- (void)_showCameraFooterView:(id)arg1 headerView:(id)arg2 show:(_Bool)arg3;
- (void)_dismissTransition:(id)arg1;
- (void)_presentationTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

