//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGReactRootConfiguration.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface IGReactRootViewConfiguration : NSObject <IGReactRootConfiguration, NSCopying>
{
    _Bool _loadingViewHidden;
    NSString *_moduleName;
    NSDictionary *_initialProperties;
}

@property(readonly, nonatomic) _Bool loadingViewHidden; // @synthesize loadingViewHidden=_loadingViewHidden;
@property(readonly, copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModuleName:(id)arg1 initialProperties:(id)arg2 loadingViewHidden:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

