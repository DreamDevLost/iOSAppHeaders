//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewingDelegate.h"

@class IGFeedItemPreviewingHandler, IGUserPreviewingHandler, NSString;

@interface IGActivityPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate>
{
    id <IGActivityFeedViewControllerProtocol> _newsViewController;
    IGUserPreviewingHandler *_userDelegate;
    IGFeedItemPreviewingHandler *_feedItemDelegate;
    id <UIViewControllerPreviewingDelegate> _usedDelegate;
}

@property(retain, nonatomic) id <UIViewControllerPreviewingDelegate> usedDelegate; // @synthesize usedDelegate=_usedDelegate;
@property(retain, nonatomic) IGFeedItemPreviewingHandler *feedItemDelegate; // @synthesize feedItemDelegate=_feedItemDelegate;
@property(retain, nonatomic) IGUserPreviewingHandler *userDelegate; // @synthesize userDelegate=_userDelegate;
@property(readonly, nonatomic) __weak id <IGActivityFeedViewControllerProtocol> newsViewController; // @synthesize newsViewController=_newsViewController;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 newsListViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

