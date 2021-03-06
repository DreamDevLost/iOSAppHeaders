//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectMessageIndicatorView, IGUser, UIView;

@interface IGDirectThreadNewMessageIndicator : NSObject
{
    IGDirectMessageIndicatorView *_indicatorView;
    UIView *_containingView;
    UIView *_referenceView;
    IGUser *_currentUser;
    id <IGDirectThreadScrollStateDelegate> _scrollStateDelegate;
}

@property(readonly, nonatomic) __weak id <IGDirectThreadScrollStateDelegate> scrollStateDelegate; // @synthesize scrollStateDelegate=_scrollStateDelegate;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(readonly, nonatomic) __weak UIView *containingView; // @synthesize containingView=_containingView;
@property(readonly, nonatomic) IGDirectMessageIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)_hideNewMessageIndicator;
- (void)_showNewMessageIndicatorWithUser:(id)arg1 module:(id)arg2;
- (void)_didTapNewMessageIndicatorView:(id)arg1;
- (void)_createNewMessageIndicator;
- (void)hideIndicatorIfNeededForScrolling;
- (_Bool)_shouldHideIndicator;
- (void)toggleIndicatorForLastMessage:(id)arg1 lastMessageSender:(id)arg2 lastSeenMessage:(id)arg3 module:(id)arg4;
- (void)layoutNewMessageIndicator;
- (id)initWithContainingView:(id)arg1 referenceView:(id)arg2 scrollStateDelegate:(id)arg3 currentUser:(id)arg4;

@end

