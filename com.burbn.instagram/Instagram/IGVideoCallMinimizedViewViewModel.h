//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGVideoCallSessionListener.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGUser, NSMutableArray, NSString;

@interface IGVideoCallMinimizedViewViewModel : NSObject <UICollectionViewDelegate, IGVideoCallSessionListener, UICollectionViewDataSource>
{
    unsigned long long _mode;
    NSMutableArray *_allParticipants;
    NSMutableArray *_videoParticipants;
    NSMutableArray *_avatarParticipants;
    IGUser *_currentUser;
    NSString *_module;
    id <IGVideoCallParticipantsContainerDataSourceDelegate> _avatarsDelegate;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)videoCallSession:(id)arg1 didUpdateThread:(id)arg2;
- (void)videoCallSession:(id)arg1 participant:(id)arg2 didUpdateVideoState:(long long)arg3 videoView:(id)arg4 audioEnabled:(_Bool)arg5;
- (void)videoCallSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)videoCallSession:(id)arg1 participantDidJoin:(id)arg2 isFirstJoin:(_Bool)arg3 videoView:(id)arg4 videoState:(long long)arg5 audioEnabled:(_Bool)arg6 isExistingParticipant:(_Bool)arg7;
- (id)_avatarParticipantsForCurrentMode;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithParticipants:(id)arg1 audioParticipants:(id)arg2 videoParticipants:(id)arg3 currentUser:(id)arg4 minimizedMode:(unsigned long long)arg5 avatarsDelegate:(id)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

