//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface IGEIFormerUsername : NSObject
{
    NSString *_formerUsername;
    NSNumber *_dateChangedTimestamp;
}

+ (id)formerUsernameWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSNumber *dateChangedTimestamp; // @synthesize dateChangedTimestamp=_dateChangedTimestamp;
@property(readonly, nonatomic) NSString *formerUsername; // @synthesize formerUsername=_formerUsername;
- (void).cxx_destruct;
- (id)initWithFormerUsername:(id)arg1 dateChangedTimestamp:(id)arg2;

@end

