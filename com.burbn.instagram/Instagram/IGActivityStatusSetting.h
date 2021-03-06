//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IGActivityStatusSetting : FBValueObject <NSCopying, NSCoding>
{
    _Bool _activityStatusEnabled;
    _Bool _threadActivityStatusEnabled;
}

@property(readonly, nonatomic) _Bool threadActivityStatusEnabled; // @synthesize threadActivityStatusEnabled=_threadActivityStatusEnabled;
@property(readonly, nonatomic) _Bool activityStatusEnabled; // @synthesize activityStatusEnabled=_activityStatusEnabled;
- (id)initWithActivityStatusEnabled:(_Bool)arg1 threadActivityStatusEnabled:(_Bool)arg2;

@end

