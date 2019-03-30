//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGStoryAdTextModel, UIColor;

@interface IGStoryLandscapeAdsMetadata : NSObject <NSCoding>
{
    UIColor *_topBackgroundColor;
    UIColor *_bottomBackgroundColor;
    IGStoryAdTextModel *_caption;
    IGStoryAdTextModel *_headline;
}

@property(readonly, nonatomic) IGStoryAdTextModel *headline; // @synthesize headline=_headline;
@property(readonly, nonatomic) IGStoryAdTextModel *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) UIColor *bottomBackgroundColor; // @synthesize bottomBackgroundColor=_bottomBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *topBackgroundColor; // @synthesize topBackgroundColor=_topBackgroundColor;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

