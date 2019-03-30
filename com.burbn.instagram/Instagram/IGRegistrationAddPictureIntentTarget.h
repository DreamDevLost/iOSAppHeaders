//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGeneratedIntentTarget.h"

@class IGNUXLayoutSpec, IGStandardizedNUXLayoutSpec, IGUserSession;

@interface IGRegistrationAddPictureIntentTarget : FBGeneratedIntentTarget
{
    _Bool _isNUXRedesignEnabled;
    IGUserSession *_userSession;
    IGNUXLayoutSpec *_layoutSpec;
    IGStandardizedNUXLayoutSpec *_standardizedLayoutSpec;
    long long _source;
    id <IGRegistrationAddPictureViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) id <IGRegistrationAddPictureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool isNUXRedesignEnabled; // @synthesize isNUXRedesignEnabled=_isNUXRedesignEnabled;
@property(readonly, nonatomic) IGStandardizedNUXLayoutSpec *standardizedLayoutSpec; // @synthesize standardizedLayoutSpec=_standardizedLayoutSpec;
@property(readonly, nonatomic) IGNUXLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 layoutSpec:(id)arg2 standardizedLayoutSpec:(id)arg3 isNUXRedesignEnabled:(_Bool)arg4 source:(long long)arg5 delegate:(id)arg6;

@end

