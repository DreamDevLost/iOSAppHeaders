//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface IGStoryMusicMood : NSObject
{
    NSString *_pk;
    NSString *_name;
    NSURL *_albumArtURL;
}

@property(readonly, nonatomic) NSURL *albumArtURL; // @synthesize albumArtURL=_albumArtURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (id)initWithPk:(id)arg1 name:(id)arg2 albumArtURL:(id)arg3;

@end

