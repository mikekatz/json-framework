//
//  DisplayPrettyController.h
//  DisplayPretty
//
//  Created by Stig Brautaset on 25/05/2011.
//  Copyright 2011 Stig Brautaset. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KCS_SBJsonParser;
@class KCS_SBJsonWriter;

@interface DisplayPrettyController : NSObject {
@private
    KCS_SBJsonParser *_parser;
    KCS_SBJsonWriter *_writer;
    
    IBOutlet NSTextField *_source;
    IBOutlet NSTextField *_formatted;
}

- (IBAction)formatText:(id)sender;

@end
