//
//  RKMappingFormatJSONParser.h
//  RestKit
//
//  Created by Blake Watters on 3/4/10.
//  Copyright 2010 Two Toasters. All rights reserved.
//

#import "RKResourceMapper.h"
#import "JSON.h"

@interface RKMappingFormatJSONParser : NSObject <RKMappingFormatParser> {
	SBJSON* _parser;
}

@end