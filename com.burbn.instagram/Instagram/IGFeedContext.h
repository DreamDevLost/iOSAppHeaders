//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGFeedNetworkSource, NSDictionary, NSString;

@interface IGFeedContext : NSObject <NSCopying>
{
    _Bool _shouldPreload;
    NSString *_identifier;
    IGFeedNetworkSource *_feedSource;
    NSDictionary *_requestParameters;
    NSDictionary *_tailRequestParameters;
}

@property(retain, nonatomic) NSDictionary *tailRequestParameters; // @synthesize tailRequestParameters=_tailRequestParameters;
@property(retain, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(readonly, nonatomic) _Bool shouldPreload; // @synthesize shouldPreload=_shouldPreload;
@property(readonly, nonatomic) IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 feedSource:(id)arg2 shouldPreload:(_Bool)arg3;

@end

