//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGBootstrapConfiguration : NSObject
{
    _Bool _shouldUseExpirationDate;
    NSString *_sectionBasedRecipientListSurfaceName;
    NSString *_directSearchSurfaceName;
    NSArray *_activeSurfaceNames;
    NSString *_favoritesSurfaceName;
    NSString *_topSearchSurfaceName;
    NSString *_userTaggingSearchSurfaceName;
    NSString *_userSearchSurfaceName;
}

+ (id)defaultValues;
@property(nonatomic) _Bool shouldUseExpirationDate; // @synthesize shouldUseExpirationDate=_shouldUseExpirationDate;
@property(copy, nonatomic) NSString *userSearchSurfaceName; // @synthesize userSearchSurfaceName=_userSearchSurfaceName;
@property(copy, nonatomic) NSString *userTaggingSearchSurfaceName; // @synthesize userTaggingSearchSurfaceName=_userTaggingSearchSurfaceName;
@property(copy, nonatomic) NSString *topSearchSurfaceName; // @synthesize topSearchSurfaceName=_topSearchSurfaceName;
@property(copy, nonatomic) NSString *favoritesSurfaceName; // @synthesize favoritesSurfaceName=_favoritesSurfaceName;
@property(copy, nonatomic) NSArray *activeSurfaceNames; // @synthesize activeSurfaceNames=_activeSurfaceNames;
@property(copy, nonatomic) NSString *directSearchSurfaceName; // @synthesize directSearchSurfaceName=_directSearchSurfaceName;
@property(copy, nonatomic) NSString *sectionBasedRecipientListSurfaceName; // @synthesize sectionBasedRecipientListSurfaceName=_sectionBasedRecipientListSurfaceName;
- (void).cxx_destruct;

@end

