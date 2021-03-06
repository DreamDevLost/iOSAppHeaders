//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGHScrollHeaderConfig, IGHScrollHideConfirmationConfig, NSString;

@interface IGHScrollSectionConfig : FBValueObject <NSCopying, NSCoding>
{
    _Bool _centersCellsWhenPaging;
    _Bool _autoScrollsOffscreen;
    IGHScrollHeaderConfig *_headerConfig;
    long long _workingRangeSize;
    IGHScrollHideConfirmationConfig *_hideConfirmationConfig;
    NSString *_listAdapterUpdaterLoggerModule;
}

@property(readonly, nonatomic) _Bool autoScrollsOffscreen; // @synthesize autoScrollsOffscreen=_autoScrollsOffscreen;
@property(readonly, copy, nonatomic) NSString *listAdapterUpdaterLoggerModule; // @synthesize listAdapterUpdaterLoggerModule=_listAdapterUpdaterLoggerModule;
@property(readonly, copy, nonatomic) IGHScrollHideConfirmationConfig *hideConfirmationConfig; // @synthesize hideConfirmationConfig=_hideConfirmationConfig;
@property(readonly, nonatomic) _Bool centersCellsWhenPaging; // @synthesize centersCellsWhenPaging=_centersCellsWhenPaging;
@property(readonly, nonatomic) long long workingRangeSize; // @synthesize workingRangeSize=_workingRangeSize;
@property(readonly, copy, nonatomic) IGHScrollHeaderConfig *headerConfig; // @synthesize headerConfig=_headerConfig;
- (void).cxx_destruct;
- (id)initWithHeaderConfig:(id)arg1 workingRangeSize:(long long)arg2 centersCellsWhenPaging:(_Bool)arg3 hideConfirmationConfig:(id)arg4 listAdapterUpdaterLoggerModule:(id)arg5 autoScrollsOffscreen:(_Bool)arg6;

@end

