//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIvarBasedEqualityObject.h"

#import "NSCoding.h"

@class NSData, NSString;

@interface IGImageUploadSource : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSData *_imageData_data;
    NSString *_imageFilePath_path;
}

+ (id)imageFilePathWithPath:(id)arg1;
+ (id)imageDataWithData:(id)arg1;
- (void).cxx_destruct;
- (void)matchImageData:(CDUnknownBlockType)arg1 imageFilePath:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

