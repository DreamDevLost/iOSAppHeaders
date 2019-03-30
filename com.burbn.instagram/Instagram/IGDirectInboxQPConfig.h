//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGQPSlotID, IGQPTriggerID;

@interface IGDirectInboxQPConfig : FBValueObject <NSCopying, NSCoding>
{
    IGQPTriggerID *_megaphoneTrigger;
    IGQPTriggerID *_interstitialTrigger;
    IGQPSlotID *_slot;
}

@property(readonly, copy, nonatomic) IGQPSlotID *slot; // @synthesize slot=_slot;
@property(readonly, copy, nonatomic) IGQPTriggerID *interstitialTrigger; // @synthesize interstitialTrigger=_interstitialTrigger;
@property(readonly, copy, nonatomic) IGQPTriggerID *megaphoneTrigger; // @synthesize megaphoneTrigger=_megaphoneTrigger;
- (void).cxx_destruct;
- (id)initWithMegaphoneTrigger:(id)arg1 interstitialTrigger:(id)arg2 slot:(id)arg3;

@end

