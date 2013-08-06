//
//  FLPromisedResult.h
//  FishLampCocoa
//
//  Created by Mike Fullerton on 6/23/13.
//  Copyright (c) 2013 Mike Fullerton. All rights reserved.
//

#import <FishLampCore/FishLampCore.h>

#define FLPromisedResult id

@interface NSObject (FLPromisedResult)
- (BOOL) isError;
+ (id) fromPromisedResult:(FLPromisedResult) promisedResult;
@end




