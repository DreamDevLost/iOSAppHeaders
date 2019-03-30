//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoPlaybackAbrDecisionHistory, IGVideoPlaybackAnalyticsEventHistory, IGVideoPlaybackStateTransitionHistory;

@interface IGVideoPlaybackSessions : NSObject
{
    IGVideoPlaybackStateTransitionHistory *_stateTransitionHistory;
    IGVideoPlaybackAnalyticsEventHistory *_analyticsEventHistory;
    IGVideoPlaybackAbrDecisionHistory *_abrDecisionHistory;
}

@property(readonly, nonatomic) IGVideoPlaybackAbrDecisionHistory *abrDecisionHistory; // @synthesize abrDecisionHistory=_abrDecisionHistory;
@property(readonly, nonatomic) IGVideoPlaybackAnalyticsEventHistory *analyticsEventHistory; // @synthesize analyticsEventHistory=_analyticsEventHistory;
@property(readonly, nonatomic) IGVideoPlaybackStateTransitionHistory *stateTransitionHistory; // @synthesize stateTransitionHistory=_stateTransitionHistory;
- (void).cxx_destruct;
- (id)init;

@end
