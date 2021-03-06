//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNearbyBusinessDataModel, IGNearbyBusinessProfileCTAViewModel, IGNearbyBusinessProfileInfoViewModel, IGNearbyBusinessStoryViewModel, IGUser, NSArray;

@interface IGNearbyBusinessViewModel : NSObject
{
    IGNearbyBusinessDataModel *_dataModel;
    IGNearbyBusinessProfileCTAViewModel *_profileCTA;
    IGNearbyBusinessProfileInfoViewModel *_profileInfo;
    IGNearbyBusinessStoryViewModel *_story;
    IGUser *_user;
    NSArray *_mediaURLs;
    double _distance;
}

@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSArray *mediaURLs; // @synthesize mediaURLs=_mediaURLs;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGNearbyBusinessStoryViewModel *story; // @synthesize story=_story;
@property(readonly, nonatomic) IGNearbyBusinessProfileInfoViewModel *profileInfo; // @synthesize profileInfo=_profileInfo;
@property(readonly, nonatomic) IGNearbyBusinessProfileCTAViewModel *profileCTA; // @synthesize profileCTA=_profileCTA;
@property(readonly, nonatomic) IGNearbyBusinessDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)arg1 centerLocation:(id)arg2;

@end

