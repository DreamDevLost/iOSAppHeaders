//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGHashtagHeaderViewConfiguration : NSObject
{
    NSString *_subtitle;
    NSString *_followButtonText;
    long long _hashtagFollowState;
    long long _dropdownViewState;
}

@property(readonly, nonatomic) long long dropdownViewState; // @synthesize dropdownViewState=_dropdownViewState;
@property(readonly, nonatomic) long long hashtagFollowState; // @synthesize hashtagFollowState=_hashtagFollowState;
@property(readonly, copy, nonatomic) NSString *followButtonText; // @synthesize followButtonText=_followButtonText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSubtitle:(id)arg1 followButtonText:(id)arg2 hashtagFollowState:(long long)arg3 dropdownViewState:(long long)arg4;

@end
