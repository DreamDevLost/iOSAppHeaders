//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class NSString;

@interface IGSuggestedHashtagSectionController : IGListSectionController
{
    id <IGSuggestedHashtagSectionControllerDelegate> _delegate;
    NSString *_hashtag;
}

@property(readonly, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(nonatomic) __weak id <IGSuggestedHashtagSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct UIEdgeInsets)inset;

@end

