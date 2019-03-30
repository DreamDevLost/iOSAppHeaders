//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface IGStoryMusicTrack : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _isExplicit;
    NSString *_pk;
    NSString *_title;
    NSString *_artistName;
    NSURL *_albumArtURL;
    NSURL *_albumArtThumbnailURL;
    NSURL *_audioFileURL;
    long long _highlightTimeInMilliseconds;
}

@property(readonly, nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, nonatomic) long long highlightTimeInMilliseconds; // @synthesize highlightTimeInMilliseconds=_highlightTimeInMilliseconds;
@property(readonly, copy, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(readonly, copy, nonatomic) NSURL *albumArtThumbnailURL; // @synthesize albumArtThumbnailURL=_albumArtThumbnailURL;
@property(readonly, copy, nonatomic) NSURL *albumArtURL; // @synthesize albumArtURL=_albumArtURL;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 title:(id)arg2 artistName:(id)arg3 albumArtURL:(id)arg4 albumArtThumbnailURL:(id)arg5 audioFileURL:(id)arg6 highlightTimeInMilliseconds:(long long)arg7 isExplicit:(_Bool)arg8;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *searchSessionID; // @dynamic searchSessionID;

@end
