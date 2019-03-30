//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IG4BLogger, IGLocalBusinessBusinessCardResponse, IGLocalBusinessCardConfiguration, IGLocalBusinessPlacesSearchCategory, IGUserSession;

@interface IGLocalBusinessCardIntentTarget : FBGeneratedIntentTarget
{
    _Bool _isCategorySelectionEnabled;
    IGUserSession *_userSession;
    IGLocalBusinessCardConfiguration *_config;
    IGLocalBusinessBusinessCardResponse *_businessCardResponse;
    IG4BLogger *_priorLogger;
    IGLocalBusinessPlacesSearchCategory *_placesSearchCategory;
}

@property(readonly, nonatomic) IGLocalBusinessPlacesSearchCategory *placesSearchCategory; // @synthesize placesSearchCategory=_placesSearchCategory;
@property(readonly, nonatomic) _Bool isCategorySelectionEnabled; // @synthesize isCategorySelectionEnabled=_isCategorySelectionEnabled;
@property(readonly, nonatomic) IG4BLogger *priorLogger; // @synthesize priorLogger=_priorLogger;
@property(readonly, nonatomic) IGLocalBusinessBusinessCardResponse *businessCardResponse; // @synthesize businessCardResponse=_businessCardResponse;
@property(readonly, nonatomic) IGLocalBusinessCardConfiguration *config; // @synthesize config=_config;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 config:(id)arg2 businessCardResponse:(id)arg3 priorLogger:(id)arg4 isCategorySelectionEnabled:(_Bool)arg5 placesSearchCategory:(id)arg6;

@end

