//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class IGShoppingProductSourceModel, IGUserSession, NSString;

@interface IGSearchShoppingProductSourceSectionController : IGListSectionController
{
    IGShoppingProductSourceModel *_viewModel;
    IGUserSession *_userSession;
    NSString *_module;
    unsigned long long _taggingState;
    long long _taggingUserType;
}

- (void).cxx_destruct;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 taggingState:(unsigned long long)arg3;

@end

