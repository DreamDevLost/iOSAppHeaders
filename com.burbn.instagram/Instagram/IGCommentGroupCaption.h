//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGSimpleTrackableObject.h"

@class IGCommentModel, IGPhoto, IGUser;

@interface IGCommentGroupCaption : NSObject <IGListDiffable, IGSimpleTrackableObject>
{
    _Bool _hideProfileImage;
    _Bool _showMediaThumbnail;
    IGCommentModel *_caption;
    IGPhoto *_mediaPhoto;
    IGUser *_author;
}

+ (id)newWithCaption:(id)arg1 hideProfileImage:(_Bool)arg2 showMediaThumbnail:(_Bool)arg3 mediaPhoto:(id)arg4 author:(id)arg5;
@property(readonly, nonatomic) IGUser *author; // @synthesize author=_author;
@property(readonly, nonatomic) IGPhoto *mediaPhoto; // @synthesize mediaPhoto=_mediaPhoto;
@property(readonly, nonatomic) _Bool showMediaThumbnail; // @synthesize showMediaThumbnail=_showMediaThumbnail;
@property(readonly, nonatomic) _Bool hideProfileImage; // @synthesize hideProfileImage=_hideProfileImage;
@property(readonly, nonatomic) IGCommentModel *caption; // @synthesize caption=_caption;
- (void).cxx_destruct;
- (id)pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)_initWithCaption:(id)arg1 hideProfileImage:(_Bool)arg2 showMediaThumbnail:(_Bool)arg3 mediaPhoto:(id)arg4 author:(id)arg5;

@end
