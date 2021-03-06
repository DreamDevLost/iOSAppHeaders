//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface IGLeadGenDisclaimerStageModel : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_disclaimerBody;
    NSArray *_checkboxes;
    NSString *_disclaimerTitle;
    NSString *_advertiserPrivacyPolicyName;
}

@property(readonly, copy, nonatomic) NSString *advertiserPrivacyPolicyName; // @synthesize advertiserPrivacyPolicyName=_advertiserPrivacyPolicyName;
@property(readonly, copy, nonatomic) NSString *disclaimerTitle; // @synthesize disclaimerTitle=_disclaimerTitle;
@property(readonly, copy, nonatomic) NSArray *checkboxes; // @synthesize checkboxes=_checkboxes;
@property(readonly, copy, nonatomic) NSArray *disclaimerBody; // @synthesize disclaimerBody=_disclaimerBody;
- (void).cxx_destruct;
- (id)initWithDisclaimerBody:(id)arg1 checkboxes:(id)arg2 disclaimerTitle:(id)arg3 advertiserPrivacyPolicyName:(id)arg4;

@end

