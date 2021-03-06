//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface FBAddressBookReader : NSObject
{
    id <FBCCUConfigurationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_addressBook;
}

- (void).cxx_destruct;
- (id)addressBook;
- (void)_copyCredentialsFromRecord:(void *)arg1 toRecord:(id)arg2 onProperty:(int)arg3;
- (void)_readAddressBook;
- (void)readAddressBook;
- (id)initWithIntegrationDelegate:(id)arg1 queue:(id)arg2;

@end

