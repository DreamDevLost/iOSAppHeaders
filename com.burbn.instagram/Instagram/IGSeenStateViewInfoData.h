//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSDictionary, NSString;

@interface IGSeenStateViewInfoData : FBValueObject <NSCopying, NSCoding>
{
    _Bool _mediaRendered;
    _Bool _mediaRenderedTimerEnabled;
    _Bool _isDirty;
    NSString *_viewInfoIdentifier;
    long long _viewInfoType;
    double _viewPercentage;
    NSDictionary *_percentagesToTimeInfo;
    NSDate *_lastModifiedTimeStamp;
    double _lastPercentageUpdate;
}

@property(readonly, nonatomic) double lastPercentageUpdate; // @synthesize lastPercentageUpdate=_lastPercentageUpdate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedTimeStamp; // @synthesize lastModifiedTimeStamp=_lastModifiedTimeStamp;
@property(readonly, copy, nonatomic) NSDictionary *percentagesToTimeInfo; // @synthesize percentagesToTimeInfo=_percentagesToTimeInfo;
@property(readonly, nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(readonly, nonatomic) _Bool mediaRenderedTimerEnabled; // @synthesize mediaRenderedTimerEnabled=_mediaRenderedTimerEnabled;
@property(readonly, nonatomic) _Bool mediaRendered; // @synthesize mediaRendered=_mediaRendered;
@property(readonly, nonatomic) double viewPercentage; // @synthesize viewPercentage=_viewPercentage;
@property(readonly, nonatomic) long long viewInfoType; // @synthesize viewInfoType=_viewInfoType;
@property(readonly, copy, nonatomic) NSString *viewInfoIdentifier; // @synthesize viewInfoIdentifier=_viewInfoIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithViewInfoIdentifier:(id)arg1 viewInfoType:(long long)arg2 viewPercentage:(double)arg3 mediaRendered:(_Bool)arg4 mediaRenderedTimerEnabled:(_Bool)arg5 isDirty:(_Bool)arg6 percentagesToTimeInfo:(id)arg7 lastModifiedTimeStamp:(id)arg8 lastPercentageUpdate:(double)arg9;
- (id)initWithCoder:(id)arg1;

@end

