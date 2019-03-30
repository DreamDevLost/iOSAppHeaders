//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStorySaveWholeStoryRequestDelegate.h"

@class IGStorySaveWholeStoryRequest, IGUserSession, NSArray, NSString, UIView;

@interface IGStorySaveWholeStoryController : NSObject <IGStorySaveWholeStoryRequestDelegate>
{
    NSString *_module;
    id <IGAlertHUDHandling> _alertHandler;
    id <IGStorySaveWholeStoryControllerDelegate> _delegate;
    IGUserSession *_userSession;
    NSArray *_items;
    UIView *_hostingView;
    IGStorySaveWholeStoryRequest *_saveStoryRequest;
}

@property(retain, nonatomic) IGStorySaveWholeStoryRequest *saveStoryRequest; // @synthesize saveStoryRequest=_saveStoryRequest;
@property(readonly, nonatomic) UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGStorySaveWholeStoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveStoryRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)saveStoryRequestDidComplete:(id)arg1;
@property(readonly, nonatomic) _Bool saveInProgress;
- (void)saveWholeStoryToVideoSize:(struct CGSize)arg1;
- (id)initWithItems:(id)arg1 userSession:(id)arg2 hostingView:(id)arg3 module:(id)arg4;

@end

