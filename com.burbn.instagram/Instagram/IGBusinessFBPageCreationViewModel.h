//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBusinessCategorySectionViewModel, IGBusinessFBPageCreationContext, IGBusinessPageNameSectionViewModel, NSMutableArray;

@interface IGBusinessFBPageCreationViewModel : NSObject
{
    NSMutableArray *_sections;
    IGBusinessPageNameSectionViewModel *_pageModel;
    IGBusinessCategorySectionViewModel *_categoryModel;
    IGBusinessFBPageCreationContext *_context;
}

@property(retain, nonatomic) IGBusinessFBPageCreationContext *context; // @synthesize context=_context;
@property(retain, nonatomic) IGBusinessCategorySectionViewModel *categoryModel; // @synthesize categoryModel=_categoryModel;
@property(retain, nonatomic) IGBusinessPageNameSectionViewModel *pageModel; // @synthesize pageModel=_pageModel;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (_Bool)shouldShowSubcategoryAndSuggestCategoryOnSamePage;
- (id)_createCategoryModel;
- (id)_createPageModel;
- (id)initWithContext:(id)arg1;
- (id)initWithPageModel:(id)arg1 categoryModel:(id)arg2;

@end
