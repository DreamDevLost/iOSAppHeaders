//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGUser, NSString;

@interface IGUserListItemConfiguration : NSObject <IGListDiffable>
{
    _Bool _showBottomSeparator;
    IGUser *_user;
    NSString *_sectionTitle;
}

@property(readonly, nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 sectionTitle:(id)arg2 showBottomSeparator:(_Bool)arg3;

@end

