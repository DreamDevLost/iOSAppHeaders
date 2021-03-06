//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@interface IGPartialModalSheetPresentationController : UIPresentationController
{
    _Bool _shouldHidePresentersView;
    id <IGPartialModalSheetPresentationControllerDismissDelegate> _dismissDelegate;
}

@property(nonatomic) __weak id <IGPartialModalSheetPresentationControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) _Bool shouldHidePresentersView; // @synthesize shouldHidePresentersView=_shouldHidePresentersView;
- (void).cxx_destruct;
- (void)_updatePresentersViewHidden:(_Bool)arg1;
- (_Bool)shouldPresentInFullscreen;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;

@end

