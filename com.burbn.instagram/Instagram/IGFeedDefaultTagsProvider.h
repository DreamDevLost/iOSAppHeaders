//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedTagsProvider.h"

@class IGFBUserTagGroup, IGHashtagFeedModel, IGProductItemTagGroup, IGUsertagGroup, NSString;

@interface IGFeedDefaultTagsProvider : NSObject <IGFeedTagsProvider>
{
    IGUsertagGroup *_userTags;
    IGProductItemTagGroup *_productItemTags;
    IGFBUserTagGroup *_fbUserTags;
    IGHashtagFeedModel *_hashtagFeedModel;
    _Bool _showUnifiedTagDisplay;
}

- (void).cxx_destruct;
- (_Bool)shouldShowHashtagsOnMedia;
- (_Bool)showUnifiedTagDisplay;
- (_Bool)hasUserTags;
- (_Bool)hasProductTags;
- (_Bool)hasHashtagsTags;
- (id)userTags;
- (id)productItemTags;
- (id)hashtagFeedModel;
- (id)fbUserTags;
- (id)initWithUsertags:(id)arg1 productItemTags:(id)arg2 fbUserTags:(id)arg3 hashtagFeedModel:(id)arg4 showUnifiedTagDisplay:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

