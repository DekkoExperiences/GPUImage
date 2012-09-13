#import <UIKit/UIKit.h>
#import "GPUImageOpenGLESContext.h"

/**
 OpenGLES texture endpoint for displaying GPUImage outputs
 */
@interface GPUGLTextureOutput : NSObject <GPUImageInput>
{
}

- (id)initWithTextureName:(GLuint)textureName;

@property(nonatomic) BOOL enabled;

@end
