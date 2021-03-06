//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class IGDirectOutgoingMessagePermanentMedia, IGDirectOutgoingMessageThirdPartyAnimatedMedia, IGDirectOutgoingVisualMedia;

@interface IGDirectOutgoingMessageMedia : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGDirectOutgoingMessagePermanentMedia *_permanentMedia;
    IGDirectOutgoingVisualMedia *_visualMedia;
    IGDirectOutgoingMessageThirdPartyAnimatedMedia *_thirdPartyAnimatedMedia;
}

+ (id)visualMedia:(id)arg1;
+ (id)thirdPartyAnimatedMedia:(id)arg1;
+ (id)permanentMedia:(id)arg1;
- (void).cxx_destruct;
- (void)matchPermanentMedia:(CDUnknownBlockType)arg1 visualMedia:(CDUnknownBlockType)arg2 thirdPartyAnimatedMedia:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanPermanentMedia:(CDUnknownBlockType)arg1 visualMedia:(CDUnknownBlockType)arg2 thirdPartyAnimatedMedia:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

