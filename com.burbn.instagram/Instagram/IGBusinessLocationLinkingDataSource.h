//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUserSession;

@interface IGBusinessLocationLinkingDataSource : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)fetchLinkedBusinessWithLocationID:(id)arg1 facebookPlaceID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end

