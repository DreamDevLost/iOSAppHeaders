//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGDirectVisualMessageActionViewModel, IGUserSession, NSString;

@interface IGDirectVisualMessageChronologicalActivitySectionController : IGListSectionController
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGDirectVisualMessageActionViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

@end

