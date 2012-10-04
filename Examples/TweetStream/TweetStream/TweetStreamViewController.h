//
//  TweetStreamViewController.h
//  TweetStream
//
//  Created by Stig Brautaset on 24/05/2011.
//  Copyright 2011 Stig Brautaset. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KCS_SBJsonStreamParser;
@class KCS_SBJsonStreamParserAdapter;

@interface TweetStreamViewController : UIViewController {
    IBOutlet UITextField *username;
    IBOutlet UITextField *password;
    IBOutlet UITextView *tweet;
    
    NSURLConnection *theConnection;
    KCS_SBJsonStreamParser *parser;
    KCS_SBJsonStreamParserAdapter *adapter;
}

- (IBAction)go;

@end
