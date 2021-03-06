//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface IGBusinessCategorySearchResultManager : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_categorySearchResult;
    id <IGBusinessCategorySearchResultManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGBusinessCategorySearchResultManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *categorySearchResult; // @synthesize categorySearchResult=_categorySearchResult;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

