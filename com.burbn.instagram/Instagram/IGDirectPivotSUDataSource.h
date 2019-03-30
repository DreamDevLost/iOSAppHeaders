//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser;

@interface IGDirectPivotSUDataSource : NSObject
{
    id <IGAPIClient> _networker;
    IGUser *_user;
    id <IGDirectPivotSUDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectPivotSUDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchData;
- (id)_parseListResponse:(id)arg1;
- (id)initWithNetworker:(id)arg1 user:(id)arg2;

@end

