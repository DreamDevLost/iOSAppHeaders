//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class IGStoryOverlayTapModelObject, NSString;

@interface IGStoryOverlayTapModel : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isPinned;
    NSString *_attribution;
    IGStoryOverlayTapModelObject *_object;
    struct IGOverlayViewTapInfo _tapInfo;
}

+ (id)tapModelsWithServerArray:(id)arg1;
+ (id)tapModelWithServerDict:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(readonly, nonatomic) struct IGOverlayViewTapInfo tapInfo; // @synthesize tapInfo=_tapInfo;
@property(readonly, nonatomic) IGStoryOverlayTapModelObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
- (void).cxx_destruct;
- (id)_uploadType;
- (id)objectName;
- (id)objectSharingInfo;
- (id)backendKey;
- (id)uploadArray;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithObject:(id)arg1 tapInfo:(struct IGOverlayViewTapInfo)arg2 attribution:(id)arg3 isPinned:(_Bool)arg4;

@end
