//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQPTemplateModelProtocol.h"

@class NSArray, NSString, NSURL;

@interface IGQPInterstitial : NSObject <IGQPTemplateModelProtocol>
{
    _Bool _dismissible;
    NSString *_title;
    NSString *_content;
    NSString *_socialContextText;
    NSString *_surfaceID;
    NSString *_promotionID;
    NSString *_primaryActionTitle;
    NSURL *_primaryActionURL;
    id <IGQPActionHandlerProtocol> _primaryActionHandler;
    NSString *_secondaryActionTitle;
    NSURL *_secondaryActionURL;
    id <IGQPActionHandlerProtocol> _secondaryActionHandler;
    NSString *_templateName;
    NSArray *_socialContextImages;
    NSURL *_imageURL;
}

@property(readonly, nonatomic) _Bool dismissible; // @synthesize dismissible=_dismissible;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSArray *socialContextImages; // @synthesize socialContextImages=_socialContextImages;
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(readonly, nonatomic) id <IGQPActionHandlerProtocol> secondaryActionHandler; // @synthesize secondaryActionHandler=_secondaryActionHandler;
@property(readonly, nonatomic) NSURL *secondaryActionURL; // @synthesize secondaryActionURL=_secondaryActionURL;
@property(readonly, copy, nonatomic) NSString *secondaryActionTitle; // @synthesize secondaryActionTitle=_secondaryActionTitle;
@property(readonly, nonatomic) id <IGQPActionHandlerProtocol> primaryActionHandler; // @synthesize primaryActionHandler=_primaryActionHandler;
@property(readonly, nonatomic) NSURL *primaryActionURL; // @synthesize primaryActionURL=_primaryActionURL;
@property(readonly, copy, nonatomic) NSString *primaryActionTitle; // @synthesize primaryActionTitle=_primaryActionTitle;
@property(readonly, copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(readonly, copy, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
@property(readonly, copy, nonatomic) NSString *socialContextText; // @synthesize socialContextText=_socialContextText;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 content:(id)arg2 socialContextText:(id)arg3 surfaceID:(id)arg4 promotionID:(id)arg5 primaryActionTitle:(id)arg6 primaryActionURL:(id)arg7 primaryActionHandler:(id)arg8 secondaryActionTitle:(id)arg9 secondaryActionURL:(id)arg10 secondaryActionHandler:(id)arg11 templateName:(id)arg12 imageURL:(id)arg13 socialContextImages:(id)arg14 dismissible:(_Bool)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
