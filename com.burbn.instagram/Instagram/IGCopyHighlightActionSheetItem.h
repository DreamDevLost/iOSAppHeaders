//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGActionSheetItem.h"

@class IGUserSession, NSString, UIViewController;

@interface IGCopyHighlightActionSheetItem : IGActionSheetItem
{
    NSString *_reelPK;
    NSString *_entryPointString;
    IGUserSession *_userSession;
    UIViewController *_viewingVC;
}

- (void).cxx_destruct;
- (void)onTap;
- (id)initWithReelPK:(id)arg1 entryPointString:(id)arg2 viewingVC:(id)arg3 userSession:(id)arg4 onComplete:(CDUnknownBlockType)arg5;

@end
