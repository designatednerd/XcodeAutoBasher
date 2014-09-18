//
//  VOKScriptForFolder.h
//  XcodeScriptWriter
//
//  Created by Ellen Shapiro (Vokal) on 9/18/14.
//  Copyright (c) 2014 Vokal Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VOKScriptForFolder : NSObject <NSCoding>

@property (nonatomic) NSString *pathToFolder;
@property (nonatomic) NSString *pathToScript;

/**
 * Runs the script in bash. 
 */
- (BOOL)runScript;

@end
