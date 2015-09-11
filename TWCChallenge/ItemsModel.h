//
//  ItemsModel.h
//  TWCChallenge
//
//  Created by Rayen Kamta on 9/3/15.
//  Copyright (c) 2015 Geeksdobyte. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "SnippetModel.h"

@interface ItemsModel : JSONModel
@property (strong, nonatomic) SnippetModel* Snippet;
@end
