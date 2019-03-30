//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAnalyticsSamplingConfiguration.h"
#import "IGUserSessionObject.h"

@class NSString;

@interface IGAnalyticsSamplingConfiguration : NSObject <IGAnalyticsSamplingConfiguration, IGUserSessionObject>
{
    _Bool _samplingEnabled;
    NSString *_userPK;
}

- (void).cxx_destruct;
- (_Bool)samplingEnabled;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
