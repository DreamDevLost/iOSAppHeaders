//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGLeadGenContextStageViewModel, IGLeadGenDisclaimerStageViewModel, IGLeadGenEndStageViewModel, IGLeadGenQuestionStageViewModel, NSString;

@interface IGLeadGenFormViewModel : NSObject <NSCoding>
{
    _Bool _hasSharedInfo;
    IGLeadGenContextStageViewModel *_contextStageViewModel;
    IGLeadGenQuestionStageViewModel *_questionStageViewModel;
    IGLeadGenDisclaimerStageViewModel *_disclaimerStageViewModel;
    IGLeadGenEndStageViewModel *_endStageViewModel;
    NSString *_formID;
    NSString *_pageName;
}

@property(readonly, nonatomic) _Bool hasSharedInfo; // @synthesize hasSharedInfo=_hasSharedInfo;
@property(readonly, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(readonly, copy, nonatomic) NSString *formID; // @synthesize formID=_formID;
@property(readonly, nonatomic) IGLeadGenEndStageViewModel *endStageViewModel; // @synthesize endStageViewModel=_endStageViewModel;
@property(readonly, nonatomic) IGLeadGenDisclaimerStageViewModel *disclaimerStageViewModel; // @synthesize disclaimerStageViewModel=_disclaimerStageViewModel;
@property(readonly, nonatomic) IGLeadGenQuestionStageViewModel *questionStageViewModel; // @synthesize questionStageViewModel=_questionStageViewModel;
@property(readonly, nonatomic) IGLeadGenContextStageViewModel *contextStageViewModel; // @synthesize contextStageViewModel=_contextStageViewModel;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormID:(id)arg1 pageName:(id)arg2 contextStageViewModel:(id)arg3 questionStageViewModel:(id)arg4 disclaimerStageViewModel:(id)arg5 endStageViewModel:(id)arg6 hasSharedInfo:(_Bool)arg7;

@end

