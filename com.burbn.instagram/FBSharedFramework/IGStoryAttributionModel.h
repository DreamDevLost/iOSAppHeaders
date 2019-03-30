//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGJSONCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSAttributedString, NSString, NSURL;

@interface IGStoryAttributionModel : FBValueObject <IGJSONCoding, NSCopying, NSCoding>
{
    _Bool _canShowChevron;
    NSString *_appID;
    NSString *_appName;
    NSURL *_attributionIconURL;
    NSString *_appActionText;
    NSURL *_contentURL;
    NSURL *_fallbackURL;
    NSAttributedString *_customAttributionString;
    NSString *_customAttributionText;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *customAttributionText; // @synthesize customAttributionText=_customAttributionText;
@property(readonly, copy, nonatomic) NSAttributedString *customAttributionString; // @synthesize customAttributionString=_customAttributionString;
@property(readonly, nonatomic) _Bool canShowChevron; // @synthesize canShowChevron=_canShowChevron;
@property(readonly, copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *appActionText; // @synthesize appActionText=_appActionText;
@property(readonly, copy, nonatomic) NSURL *attributionIconURL; // @synthesize attributionIconURL=_attributionIconURL;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)toJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppID:(id)arg1 appName:(id)arg2 attributionIconURL:(id)arg3 appActionText:(id)arg4 contentURL:(id)arg5 fallbackURL:(id)arg6 canShowChevron:(_Bool)arg7 customAttributionString:(id)arg8 customAttributionText:(id)arg9;
- (id)attributionURL;
- (id)attributionAttributedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

