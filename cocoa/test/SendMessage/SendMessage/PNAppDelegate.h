//
//  PNAppDelegate.h
//  SendMessage
//
//  Created by Valentin Tuller on 4/4/14.
//  Copyright (c) 2014 Valentin Tuller. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PNImports.h"

@interface PNAppDelegate : NSObject <NSApplicationDelegate, PNDelegate>

@property (assign) IBOutlet NSWindow *window;
@property IBOutlet NSTextView *tbxLog;
@property IBOutlet NSButton *btnAutoscroll;

@property IBOutlet NSButton *btnReload;
-(IBAction)reloadClick:(id)sender;


@end
