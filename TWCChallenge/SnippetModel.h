//
//  SnippetModel.h
//  TWCChallenge
//
//  Created by Rayen Kamta on 9/3/15.
//  Copyright (c) 2015 Geeksdobyte. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"


@interface SnippetModel : JSONModel

@property (strong, nonatomic) NSString* apiTitle;
@property (strong, nonatomic) NSString* apiDescription;

@end
