//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface IGHashtagFeedModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _shouldShowTagCount;
    NSArray *_previewHashtags;
    unsigned long long _totalHashtagsCount;
    long long _displayStyle;
}

@property(readonly, nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) _Bool shouldShowTagCount; // @synthesize shouldShowTagCount=_shouldShowTagCount;
@property(readonly, nonatomic) unsigned long long totalHashtagsCount; // @synthesize totalHashtagsCount=_totalHashtagsCount;
@property(readonly, copy, nonatomic) NSArray *previewHashtags; // @synthesize previewHashtags=_previewHashtags;
- (void).cxx_destruct;
- (id)initWithPreviewHashtags:(id)arg1 totalHashtagsCount:(unsigned long long)arg2 shouldShowTagCount:(_Bool)arg3 displayStyle:(long long)arg4;
- (_Bool)shouldShowHashtagsOnMedia;
- (id)initWithDictionary:(id)arg1;

@end
