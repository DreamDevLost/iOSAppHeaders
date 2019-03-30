//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGAssetModelConfig : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_remoteUrlString;
    NSString *_version;
    long long _compressionType;
    id _source;
}

@property(readonly, nonatomic) id source; // @synthesize source=_source;
@property(readonly, nonatomic) long long compressionType; // @synthesize compressionType=_compressionType;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *remoteUrlString; // @synthesize remoteUrlString=_remoteUrlString;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 remoteUrlString:(id)arg3 version:(id)arg4 compressionType:(long long)arg5 source:(id)arg6;

@end
