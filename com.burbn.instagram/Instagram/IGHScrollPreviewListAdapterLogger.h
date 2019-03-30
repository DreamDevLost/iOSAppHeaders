//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListAdapterDelegate.h"

@class IGUserSession, NSMutableSet, NSNumber, NSString;

@interface IGHScrollPreviewListAdapterLogger : NSObject <IGListAdapterDelegate>
{
    IGUserSession *_userSession;
    NSNumber *_viewStateItemType;
    NSString *_module;
    NSMutableSet *_loggedImpressions;
}

- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)initWithUserSession:(id)arg1 viewStateItemType:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
