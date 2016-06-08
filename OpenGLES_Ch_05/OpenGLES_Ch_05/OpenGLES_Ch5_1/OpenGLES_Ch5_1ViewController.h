//
//  OpenGLES_Ch5_1ViewController.h
//  OpenGLES_Ch5_1
//

#import "BaseViewController.h"

@class AGLKVertexAttribArrayBuffer;

@interface OpenGLES_Ch5_1ViewController : BaseViewController

@property (strong, nonatomic) GLKBaseEffect 
   *baseEffect;
@property (strong, nonatomic) AGLKVertexAttribArrayBuffer 
   *vertexPositionBuffer;
@property (strong, nonatomic) AGLKVertexAttribArrayBuffer 
   *vertexNormalBuffer;
@property (strong, nonatomic) AGLKVertexAttribArrayBuffer 
   *vertexTextureCoordBuffer;

@end
