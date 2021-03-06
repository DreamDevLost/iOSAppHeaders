//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IGBadgingTooltipToken : FBValueObject <NSCopying, NSCoding>
{
    NSString *_channelPk;
    NSString *_mediaPk;
}

@property(readonly, copy, nonatomic) NSString *mediaPk; // @synthesize mediaPk=_mediaPk;
@property(readonly, copy, nonatomic) NSString *channelPk; // @synthesize channelPk=_channelPk;
- (void).cxx_destruct;
- (id)initWithChannelPk:(id)arg1 mediaPk:(id)arg2;

@end

