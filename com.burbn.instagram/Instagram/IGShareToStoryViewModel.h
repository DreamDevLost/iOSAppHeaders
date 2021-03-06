//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGShareToStoryLayoutSpec, IGUser, NSString;

@interface IGShareToStoryViewModel : NSObject <IGListDiffable>
{
    _Bool _isSharingPrivatePost;
    _Bool _shouldShowProductShareSubtitle;
    NSString *_ctaText;
    IGUser *_currentUser;
    IGShareToStoryLayoutSpec *_layoutSpec;
    NSString *_module;
}

@property(readonly, nonatomic) _Bool shouldShowProductShareSubtitle; // @synthesize shouldShowProductShareSubtitle=_shouldShowProductShareSubtitle;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGShareToStoryLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) _Bool isSharingPrivatePost; // @synthesize isSharingPrivatePost=_isSharingPrivatePost;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithCurrentUser:(id)arg1 ctaText:(id)arg2 isSharingPrivatePost:(_Bool)arg3 layoutSpec:(id)arg4 module:(id)arg5 shouldShowProductShareSubtitle:(_Bool)arg6;

@end

