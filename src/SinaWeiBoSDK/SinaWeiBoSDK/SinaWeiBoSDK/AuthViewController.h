//
//  AuthViewController.h
//  YokaBeauty
//
//  Created by lai hj on 12-9-10.
//  Copyright (c) 2012年 Yoka. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WBAuthorizeWebView.h"
#import "NRUnRotateViewController.h"

@interface AuthViewController : NRUnRotateViewController <UIWebViewDelegate>{
    UIActivityIndicatorView *indicatorView;
	UIWebView *webView;
    NSURL *url;
}

@property (nonatomic, assign) id<WBAuthorizeWebViewDelegate> delegate;
@property (nonatomic, retain) UIActivityIndicatorView *indicatorView;
@property (nonatomic, retain) UIWebView *webView;
@property (nonatomic, retain) NSURL *url;

- (void)loadRequestWithURL:(NSURL *)url;

- (void)show:(BOOL)animated;

- (void)hide:(BOOL)animated;
- (void) Cancel;

@end
