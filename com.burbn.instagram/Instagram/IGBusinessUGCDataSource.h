//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser, IGUserSession;

@interface IGBusinessUGCDataSource : NSObject
{
    id <IGBusinessUGCDataSourceDelegate> _delegate;
    IGUserSession *_userSession;
    IGUser *_profileUser;
}

@property(retain, nonatomic) IGUser *profileUser; // @synthesize profileUser=_profileUser;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <IGBusinessUGCDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchData;
- (id)initWithUserSession:(id)arg1 profileUser:(id)arg2;

@end

