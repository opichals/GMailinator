//
//  NoFlaggedMailbox.h
//  NoFlaggedMailbox
//
//  Created by Eelco Lempsink on 28-09-12.
//  Copyright (c) 2012 Eelco Lempsink. All rights reserved.
//

#import "SearchManager.h"
#import <Foundation/Foundation.h>

@interface GMailinator : NSObject {
    SearchManager *sm;
}

+ (void)registerBundle;
@end

NSBundle *GetGMailinatorBundle(void);