#import <Cocoa/Cocoa.h>
#import "FindFile.h"

@interface Worker : NSObject
{
	id <FindFileProtocol> delegate;
}

@property id <FindFileProtocol> delegate;

- (void) DoFindFileWork;

@end // Worker