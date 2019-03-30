//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGNetegoItem.h"

@class IGTVGuideResponse, NSString;

@interface IGTVNetegoTrayModel : NSObject <IGListDiffable, IGNetegoItem>
{
    NSString *_pk;
    NSString *_title;
    NSString *_trackingToken;
    IGTVGuideResponse *_tvGuideResponse;
}

@property(readonly, nonatomic) IGTVGuideResponse *tvGuideResponse; // @synthesize tvGuideResponse=_tvGuideResponse;
@property(readonly, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPK:(id)arg1 title:(id)arg2 trackingToken:(id)arg3 tvGuideResponse:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
