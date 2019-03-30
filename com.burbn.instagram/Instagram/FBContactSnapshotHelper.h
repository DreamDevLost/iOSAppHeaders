//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBContactSnapshot, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface FBContactSnapshotHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contactsChangeSet;
    FBContactSnapshot *_addressBookSnapshot;
    NSString *_addressBookRootHash;
}

@property(readonly, nonatomic) NSString *addressBookRootHash; // @synthesize addressBookRootHash=_addressBookRootHash;
@property(readonly, nonatomic) FBContactSnapshot *addressBookSnapshot; // @synthesize addressBookSnapshot=_addressBookSnapshot;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *contactsChangeSet;
- (id)_genSnapshot:(id)arg1;
- (_Bool)createChangeSetWithAddressBook:(id)arg1 serverSnapshot:(id)arg2 serverRoothash:(id)arg3;
- (id)initWithQueue:(id)arg1;

@end

