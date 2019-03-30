//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGActionSheetDelegate.h"

@class IGFeedItem, IGMediaManager, NSString, UIImpactFeedbackGenerator;

@interface IGTVBrowseCellActionController : NSObject <IGActionSheetDelegate>
{
    IGMediaManager *_mediaManager;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    IGFeedItem *_feedItem;
    id <IGTVBrowseCellActionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVBrowseCellActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reportContentAsHidden;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)showActionsForFeedItem:(id)arg1;
- (id)initWithMediaManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

