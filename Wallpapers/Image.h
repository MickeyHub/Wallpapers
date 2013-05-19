//
//  GIF.h
//  GIFs
//
//  Created by orta therox on 12/01/2013.
//  Copyright (c) 2013 Orta Therox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Quartz/Quartz.h>

@interface Image : NSObject

- (id)initWithRedditDictionary:(NSDictionary *)dictionary;
- (id)initWithDownloadURL:(NSString *)downloadURL andThumbnail:(NSString *)thumbnail;

- (NSString *)imageUID;
- (NSString *)imageRepresentationType;
- (id) imageRepresentation;
- (NSURL *)downloadURL;
- (NSString *)imageTitle;
- (NSString *)source;
@end
