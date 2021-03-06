//
//  JIMP_ClientAppDelegate.h
//  JIMP Client
//
//  Created by Alex Nichol on 4/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SignonViewController.h"
#import "JIMPSessionManager.h"

@interface JIMP_ClientAppDelegate : NSObject <NSApplicationDelegate> {
	NSWindow * window;
	SignonViewController * signon;
	IBOutlet NSMenuItem * menuItemAddBuddy;
	IBOutlet NSMenuItem * menuItemAddGroup;
	IBOutlet NSMenuItem * menuItemRemoveBuddy;
}

@property (assign) IBOutlet NSWindow * window;
@property (assign) IBOutlet NSMenuItem * menuItemAddBuddy;
@property (assign) IBOutlet NSMenuItem * menuItemAddGroup;
@property (assign) IBOutlet NSMenuItem * menuItemRemoveBuddy;

@end
