//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHViewController.h"

#import "BCPopoverContentController.h"
#import "MSWebPublisherDelegate.h"

@class MSDocument, MSLocalWebServer, MSWebPublisher, NSButton, NSProgressIndicator, NSString, NSTextField, NSView;

@interface MSPublisherViewController : CHViewController <BCPopoverContentController, MSWebPublisherDelegate>
{
    id <MSPublisherViewControllerDelegate> _delegate;
    MSDocument *_document;
    MSLocalWebServer *_localServer;
    MSWebPublisher *_onlinePublisher;
    NSView *_explanatoryView;
    NSView *_publishView;
    NSButton *_localServerToggleButton;
    NSButton *_shareLocalButton;
    NSView *_uploadProgressContainerView;
    NSButton *_uploadButton;
    NSProgressIndicator *_progressView;
    NSButton *_shareOnlineButton;
    NSTextField *_remainingTimeField;
    double _uploadStartTime;
    double _lastUpdateTime;
}


- (void)adjustShareButtons;
- (void)adjustToggleButtonState;
- (void)adjustUI;
- (void)adjustUploadButtonTitle;
- (void)awakeFromNib;
- (void)cancelUploadAction:(id)arg1;
@property(nonatomic) __weak id <MSPublisherViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSView *explanatoryView; // @synthesize explanatoryView=_explanatoryView;
- (void)hideExplanatoryViewAction:(id)arg1;
- (void)hideUploadUI;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) MSLocalWebServer *localServer; // @synthesize localServer=_localServer;
@property(retain, nonatomic) NSButton *localServerToggleButton; // @synthesize localServerToggleButton=_localServerToggleButton;
- (id)localURLForDocument;
@property(retain, nonatomic) MSWebPublisher *onlinePublisher; // @synthesize onlinePublisher=_onlinePublisher;
- (id)onlineURLForDocument;
@property(retain, nonatomic) NSProgressIndicator *progressView; // @synthesize progressView=_progressView;
- (void)publish;
@property(retain, nonatomic) NSView *publishView; // @synthesize publishView=_publishView;
- (void)publisher:(id)arg1 uploadDidCancelWithError:(id)arg2;
- (void)publisher:(id)arg1 uploadDidFailWithError:(id)arg2;
- (void)publisher:(id)arg1 uploadDidFinishUploadingToURL:(id)arg2;
- (void)publisher:(id)arg1 uploadDidProgressTo:(double)arg2;
- (void)publisherWillStartUploading:(id)arg1;
- (void)registerPublishedURL:(id)arg1;
@property(retain, nonatomic) NSTextField *remainingTimeField; // @synthesize remainingTimeField=_remainingTimeField;
@property(retain, nonatomic) NSButton *shareLocalButton; // @synthesize shareLocalButton=_shareLocalButton;
@property(retain, nonatomic) NSButton *shareOnlineButton; // @synthesize shareOnlineButton=_shareOnlineButton;
@property(retain, nonatomic) NSButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) NSView *uploadProgressContainerView; // @synthesize uploadProgressContainerView=_uploadProgressContainerView;
@property(nonatomic) double uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
- (void)shareAction:(id)arg1;
- (void)showContentView:(id)arg1;
- (void)showUploadUI;
- (void)toggleLocalServerAction:(id)arg1;
- (void)unpublish;
- (void)uploadOnlineAction:(id)arg1;
- (void)viewWillAppear;
- (void)warnUploadFailed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

