//
//  HttpTaskXAuthFilter.h
//  aimdev
//
//  Created by dongjianbo on 15/11/9.
//  Copyright © 2015年 salam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HAObject.h"
#import "HAHttpTask.h"
#import "SynthesizeSingleton.h"

@interface HttpTaskXAuthFilter : HAObject <HAHttpTaskBuildParamsFilter>

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(HttpTaskXAuthFilter);
@end
