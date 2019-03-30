//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGNetegoItem.h"

@class NSArray, NSString;

@interface IGFBUpsellNetegoModel : NSObject <IGListDiffable, IGNetegoItem>
{
    NSString *_pk;
    NSString *_title;
    NSString *_subtitle;
    NSString *_mediaUrl;
    double _mediaAspectRatio;
    NSString *_message;
    NSString *_messageBackgroundMediaUrl;
    NSString *_actionText;
    NSString *_fbAppUrl;
    NSString *_msiteUrl;
    long long _facepileOutlineColorHexInt;
    NSArray *_facepilePhotoUrls;
    NSString *_trackingToken;
    unsigned long long _upsellType;
}

@property(readonly, nonatomic) unsigned long long upsellType; // @synthesize upsellType=_upsellType;
@property(readonly, copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, copy, nonatomic) NSArray *facepilePhotoUrls; // @synthesize facepilePhotoUrls=_facepilePhotoUrls;
@property(readonly, nonatomic) long long facepileOutlineColorHexInt; // @synthesize facepileOutlineColorHexInt=_facepileOutlineColorHexInt;
@property(readonly, copy, nonatomic) NSString *msiteUrl; // @synthesize msiteUrl=_msiteUrl;
@property(readonly, copy, nonatomic) NSString *fbAppUrl; // @synthesize fbAppUrl=_fbAppUrl;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, copy, nonatomic) NSString *messageBackgroundMediaUrl; // @synthesize messageBackgroundMediaUrl=_messageBackgroundMediaUrl;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)mainFeedItemType;
- (id)itemId;
- (unsigned long long)type;
- (id)initWithPk:(id)arg1 title:(id)arg2 subtitle:(id)arg3 facepilePhotoUrls:(id)arg4 facepileOutlineColorHexInt:(long long)arg5 mediaUrl:(id)arg6 mediaAspectRatio:(double)arg7 message:(id)arg8 messageBackgroundMediaUrl:(id)arg9 actionText:(id)arg10 fbAppUrl:(id)arg11 msiteUrl:(id)arg12 trackingToken:(id)arg13 upsellType:(unsigned long long)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

