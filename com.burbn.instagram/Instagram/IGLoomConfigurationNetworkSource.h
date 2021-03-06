//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLoomConfigurationNetworkSource.h"

@class IGRequestToken, IGUserSession;

@interface IGLoomConfigurationNetworkSource : NSObject <FBLoomConfigurationNetworkSource>
{
    struct mutex _onGoingRequestMutex;
    IGRequestToken *_onGoingRequest;
    id <FBLoomConfigurationNetworkSourceDelegate> _delegate;
    IGUserSession *_userSession;
}

@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <FBLoomConfigurationNetworkSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetchConfiguration;
- (_Bool)canFetchConfiguration;

@end

