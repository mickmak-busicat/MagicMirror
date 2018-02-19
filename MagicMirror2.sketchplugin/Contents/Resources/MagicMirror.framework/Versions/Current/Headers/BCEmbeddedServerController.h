//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPRequestOperationManager, BCTaskManager, NSURL;

@interface BCEmbeddedServerController : NSObject
{
    BOOL _isRunning;
    NSURL *_temporaryFolder;
    AFHTTPRequestOperationManager *_manager;
    BCTaskManager *_serverTaskManager;
    NSURL *_publicBaseURL;
}


- (id)init;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) AFHTTPRequestOperationManager *manager; // @synthesize manager=_manager;
- (void)mount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSURL *publicBaseURL; // @synthesize publicBaseURL=_publicBaseURL;
- (void)reloadBrowser;
- (void)runEndpoint:(id)arg1 withPayload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)serverDidStartAtURL:(id)arg1;
@property(retain, nonatomic) BCTaskManager *serverTaskManager; // @synthesize serverTaskManager=_serverTaskManager;
@property(retain, nonatomic) NSURL *temporaryFolder; // @synthesize temporaryFolder=_temporaryFolder;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)unmount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
