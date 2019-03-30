//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "IGListDiffable.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IGBusinessActionBarViewModel, IGProfileActionsModel, IGProfileBioModel, IGUsernameModel;

@interface IGInterestProfileDisplayOptionsProfilePreviewModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    IGProfileActionsModel *_actionModel;
    IGUsernameModel *_usernameModel;
    IGProfileBioModel *_bioModel;
    IGBusinessActionBarViewModel *_businessActionBarModel;
}

@property(readonly, copy, nonatomic) IGBusinessActionBarViewModel *businessActionBarModel; // @synthesize businessActionBarModel=_businessActionBarModel;
@property(readonly, copy, nonatomic) IGProfileBioModel *bioModel; // @synthesize bioModel=_bioModel;
@property(readonly, copy, nonatomic) IGUsernameModel *usernameModel; // @synthesize usernameModel=_usernameModel;
@property(readonly, copy, nonatomic) IGProfileActionsModel *actionModel; // @synthesize actionModel=_actionModel;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithActionModel:(id)arg1 usernameModel:(id)arg2 bioModel:(id)arg3 businessActionBarModel:(id)arg4;

@end

