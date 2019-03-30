//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDiscoveryGridItem.h"
#import "IGListDiffable.h"

@class IGFeedItem, IGGridLayoutSpec, NSString;

@interface IGChannelModel : NSObject <IGDiscoveryGridItem, IGListDiffable>
{
    NSString *_channelId;
    NSString *_channelType;
    NSString *_header;
    NSString *_title;
    NSString *_context;
    IGGridLayoutSpec *_gridLayoutSpec;
    IGFeedItem *_post;
}

@property(retain, nonatomic) IGFeedItem *post; // @synthesize post=_post;
@property(readonly, nonatomic) IGGridLayoutSpec *gridLayoutSpec; // @synthesize gridLayoutSpec=_gridLayoutSpec;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(readonly, copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)updatePost:(id)arg1;
- (id)initWithDictionary:(id)arg1 gridLayoutSpec:(id)arg2;
- (id)initWithChannelId:(id)arg1 channelType:(id)arg2 header:(id)arg3 title:(id)arg4 context:(id)arg5 gridLayoutSpec:(id)arg6 feedItem:(id)arg7;

@end
