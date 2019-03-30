//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary;

@interface Uploader : NSObject
{
    NSMutableDictionary *parameters_;
    NSData *minidumpContents_;
    NSData *logFileData_;
    NSMutableDictionary *serverDictionary_;
    NSMutableDictionary *socorroDictionary_;
    NSMutableDictionary *googleDictionary_;
    NSMutableDictionary *extraServerVars_;
}

+ (id)readConfigurationDataFromFile:(id)arg1;
- (void)dealloc;
- (id)parameters;
- (void)logUploadWithID:(const char *)arg1;
- (void)uploadData:(id)arg1 name:(id)arg2;
- (void)report;
- (id)queryItemWithName:(id)arg1 forParamKey:(id)arg2;
- (void)handleNetworkResponse:(id)arg1 withError:(id)arg2;
- (void)addServerParameter:(id)arg1 forKey:(id)arg2;
- (_Bool)populateServerDictionary:(id)arg1;
- (id)urlParameterDictionary;
- (id)dictionaryForServerType:(id)arg1;
- (void)createServerParameterDictionaries;
- (_Bool)readMinidumpData;
- (_Bool)readLogFileData;
- (id)clientID;
- (void)translateConfigurationData:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfigFile:(const char *)arg1;

@end

