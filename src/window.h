/*1:*/
#line 218 "weaver-window.cweb"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#line 224 "weaver-window.cweb"
#include <stdbool.h>  
#if !defined(_WIN32)
#include <sys/param.h>  
#endif
#line 228 "weaver-window.cweb"
/*31:*/
#line 768 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#include <X11/X.h> 
#endif
#line 772 "weaver-window.cweb"
#if defined(__EMSCRIPTEN__)
#include <GLES3/gl3.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
#line 777 "weaver-window.cweb"
/*:31*//*50:*/
#line 1122 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#include <EGL/egl.h> 
#include <GLES3/gl3.h> 
#include <EGL/eglext.h> 
#endif
#line 1128 "weaver-window.cweb"
/*:50*//*59:*/
#line 1269 "weaver-window.cweb"

#if defined(_WIN32)
#pragma comment(lib, "Opengl32.lib")
#pragma comment(lib, "Shell32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Gdi32.lib")
#include <windows.h> 
#include <GL/gl.h> 
#endif
#line 1278 "weaver-window.cweb"
/*:59*/
#line 228 "weaver-window.cweb"

/*28:*/
#line 711 "weaver-window.cweb"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
#line 715 "weaver-window.cweb"
/*:28*//*77:*/
#line 1654 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_VERTEX_SHADER          0x8B31
#define GL_FRAGMENT_SHADER        0x8B30
#endif
#line 1659 "weaver-window.cweb"
/*:77*//*78:*/
#line 1663 "weaver-window.cweb"

#if defined(_WIN32)
typedef char GLchar;
#endif
#line 1667 "weaver-window.cweb"
/*:78*//*82:*/
#line 1754 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_SHADER_TYPE          0x8B4F
#define GL_DELETE_STATUS        0x8B80
#define GL_COMPILE_STATUS       0x8B81
#define GL_INFO_LOG_LENGTH      0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif
#line 1762 "weaver-window.cweb"
/*:82*//*83:*/
#line 1768 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_LOW_FLOAT    0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT   0x8DF2
#define GL_LOW_INT      0x8DF3
#define GL_MEDIUM_INT   0x8DF4
#define GL_HIGH_INT     0x8DF5
#endif
#line 1777 "weaver-window.cweb"
/*:83*//*84:*/
#line 1784 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED        0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE           0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE         0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE           0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED     0x886A
#define GL_CURRENT_VERTEX_ATTRIB              0x8626
#endif
#line 1794 "weaver-window.cweb"
/*:84*//*85:*/
#line 1799 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif
#line 1803 "weaver-window.cweb"
/*:85*//*86:*/
#line 1808 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#endif
#line 1812 "weaver-window.cweb"
/*:86*//*93:*/
#line 1907 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_DELETE_STATUS               0x8B80
#define GL_LINK_STATUS                 0x8B82
#define GL_VALIDATE_STATUS             0x8B83
#define GL_INFO_LOG_LENGTH             0x8B84
#define GL_ATTACHED_SHADERS            0x8B85
#define GL_ACTIVE_ATTRIBUTES           0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_ACTIVE_UNIFORMS             0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH   0x8B87
#endif
#line 1919 "weaver-window.cweb"
/*:93*//*97:*/
#line 1962 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_FLOAT      0x1406
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#endif
#line 1972 "weaver-window.cweb"
/*:97*//*101:*/
#line 2108 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_INT         0x1404
#define GL_INT_VEC2    0x8B53
#define GL_INT_VEC3    0x8B54
#define GL_INT_VEC4    0x8B55
#define GL_BOOL        0x8B56
#define GL_BOOL_VEC2   0x8B57
#define GL_BOOL_VEC3   0x8B58
#define GL_BOOL_VEC4   0x8B59
#define GL_SAMPLER_2D  0x8B5E
#define GL_SAMPER_CUBE 0x8B60
#endif
#line 2121 "weaver-window.cweb"
/*:101*//*105:*/
#line 2210 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_FIXED          0x140C
#endif
#line 2214 "weaver-window.cweb"
/*:105*//*109:*/
#line 2273 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_ARRAY_BUFFER         0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#endif
#line 2278 "weaver-window.cweb"
/*:109*//*110:*/
#line 2283 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_STATIC_DRAW  0x88E4
#define GL_STREAM_DRAW  0x88E0
#define GL_DYNAMIC_DRAW 0x88E8
#endif
#line 2289 "weaver-window.cweb"
/*:110*//*111:*/
#line 2294 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_BUFFER_SIZE  0x8764
#define GL_BUFFER_USAGE 0x8765
#endif
#line 2299 "weaver-window.cweb"
/*:111*//*112:*/
#line 2306 "weaver-window.cweb"

#if defined(_WIN32)

#include <BaseTsd.h> 
typedef size_t GLsizeiptr;
typedef SSIZE_T GLintptr;
#endif
#line 2313 "weaver-window.cweb"
/*:112*//*116:*/
#line 2344 "weaver-window.cweb"

#if defined(_WIN32)
typedef float GLclampf;
#endif
#line 2348 "weaver-window.cweb"
/*:116*//*120:*/
#line 2398 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_RGB                              0x1907
#define GL_RGBA                             0x1908
#define GL_ALPHA                            0x1906
#define GL_TEXTURE0                         0x84C0
#define GL_TEXTURE1                         0x84C1
#define GL_TEXTURE2                         0x84C2
#define GL_TEXTURE3                         0x84C3
#define GL_TEXTURE4                         0x84C4
#define GL_TEXTURE5                         0x84C5
#define GL_TEXTURE6                         0x84C6
#define GL_TEXTURE7                         0x84C7
#define GL_TEXTURE8                         0x84C8
#define GL_TEXTURE9                         0x84C9
#define GL_TEXTURE10                        0x84CA
#define GL_TEXTURE11                        0x84CB
#define GL_TEXTURE12                        0x84CC
#define GL_TEXTURE13                        0x84CD
#define GL_TEXTURE14                        0x84CE
#define GL_TEXTURE15                        0x84CF
#define GL_TEXTURE16                        0x84D0
#define GL_TEXTURE17                        0x84D1
#define GL_TEXTURE18                        0x84D2
#define GL_TEXTURE19                        0x84D3
#define GL_TEXTURE20                        0x84D4
#define GL_TEXTURE21                        0x84D5
#define GL_TEXTURE22                        0x84D6
#define GL_TEXTURE23                        0x84D7
#define GL_TEXTURE24                        0x84D8
#define GL_TEXTURE25                        0x84D9
#define GL_TEXTURE26                        0x84DA
#define GL_TEXTURE27                        0x84DB
#define GL_TEXTURE28                        0x84DC
#define GL_TEXTURE29                        0x84DD
#define GL_TEXTURE30                        0x84DE
#define GL_TEXTURE31                        0x84DF
#define GL_LUMINANCE                        0x1909
#define GL_TEXTURE_2D                       0x0DE1
#define GL_UNSIGNED_BYTE                    0x1401
#define GL_TEXTURE_WRAP_S                   0x2802
#define GL_TEXTURE_WRAP_T                   0x2803
#define GL_LUMINANCE_ALPHA                  0x190A
#define GL_TEXTURE_MAG_FILTER               0x2800
#define GL_TEXTURE_MIN_FILTER               0x2801
#define GL_UNSIGNED_SHORT_5_6_5             0x8363
#define GL_UNSIGNED_SHORT_4_4_4_4           0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1           0x8034
#define GL_MAX_TEXTURE_IMAGE_UNITS          0x8872
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X      0x8515
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y      0x8517
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z      0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X      0x8516
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y      0x8518
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z      0x851A
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS   0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#endif
#line 2456 "weaver-window.cweb"
/*:120*//*124:*/
#line 2517 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_ONE                      1
#define GL_ZERO                     0
#define GL_LESS                     0x0201
#define GL_INCR                     0x1E02
#define GL_DECR                     0x1E03
#define GL_KEEP                     0x1E00
#define GL_BACK                     0x0405
#define GL_FRONT                    0x0404
#define GL_EQUAL                    0x0202
#define GL_NEVER                    0x0200
#define GL_ALWAYS                   0x0207
#define GL_LEQUAL                   0x0203
#define GL_GEQUAL                   0x0206
#define GL_INVERT                   0x150A
#define GL_REPLACE                  0x1E01
#define GL_GREATER                  0x0204
#define GL_NOTEQUAL                 0x0205
#define GL_FUNC_ADD                 0x8006
#define GL_INCR_WRAP                0x8507
#define GL_DECR_WRAP                0x8508
#define GL_SRC_ALPHA                0x0302
#define GL_DST_ALPHA                0x0304
#define GL_SRC_COLOR                0x0300
#define GL_DST_COLOR                0x0306
#define GL_FUNC_SUBTRACT            0x800A
#define GL_FRONT_AND_BACK           0x0408
#define GL_CONSTANT_COLOR           0x8001
#define GL_CONSTANT_ALPHA           0x8003
#define GL_SRC_ALPHA_SATURATE     0x0308
#define GL_ONE_MINUS_SRC_COLOR      0x0301
#define GL_ONE_MINUS_DST_COLOR      0x0307
#define GL_ONE_MINUS_SRC_ALPHA      0x0303
#define GL_ONE_MINUS_DST_ALPHA      0x0305
#define GL_FUNC_REVERSE_SUBTRACT    0x800B
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#endif
#line 2556 "weaver-window.cweb"
/*:124*//*131:*/
#line 2688 "weaver-window.cweb"

#if defined(_WIN32)
#define GL_RGBA4                                        0x8056
#define GL_RGB565                                       0x8D62
#define GL_RGB5_A1                                      0x8057
#define GL_FRAMEBUFFER                                  0x8D40
#define GL_RENDERBUFFER                                 0x8D41
#define GL_STENCIL_INDEX8                               0x8D48
#define GL_DEPTH_ATTACHMENT                             0x8D00
#define GL_DEPTH_COMPONENT16                            0x81A5
#define GL_COLOR_ATTACHMENT0                            0x8CE0
#define GL_STENCIL_ATTACHMENT                           0x8D20
#define GL_RENDERBUFFER_WIDTH                           0x8D42
#define GL_RENDERBUFFER_HEIGHT                          0x8D43
#define GL_FRAMEBUFFER_COMPLETE                         0x8CD5
#define GL_RENDERBUFFER_RED_SIZE                        0x8D50
#define GL_RENDERBUFFER_BLUE_SIZE                       0x8D52
#define GL_RENDERBUFFER_GREEN_SIZE                      0x8D51
#define GL_RENDERBUFFER_ALPHA_SIZE                      0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE                      0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE                    0x8D55
#define GL_RENDERBUFFER_INTERNAL_FORMAT                 0x8D44
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE           0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME           0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL         0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#endif
#line 2715 "weaver-window.cweb"
/*:131*//*164:*/
#line 3632 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#define W_KEYBOARD_SIZE 256
#endif
#line 3636 "weaver-window.cweb"
/*:164*//*171:*/
#line 3799 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
#define W_KEYBOARD_SIZE SDL_NUM_SCANCODES
#endif
#line 3803 "weaver-window.cweb"
/*:171*//*175:*/
#line 3904 "weaver-window.cweb"

#if defined(_WIN32)
#define W_KEYBOARD_SIZE 256
#endif
#line 3908 "weaver-window.cweb"
/*:175*//*187:*/
#line 4194 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#define W_MOUSE_SIZE 6
#define W_MOUSE_LEFT   Button1
#define W_MOUSE_MIDDLE Button2
#define W_MOUSE_RIGHT  Button3
#define W_MOUSE_X1     Button4
#define W_MOUSE_X2     Button5
#endif
#line 4203 "weaver-window.cweb"
/*:187*//*192:*/
#line 4276 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
#define W_MOUSE_SIZE 6
#define W_MOUSE_LEFT   SDL_BUTTON_LEFT
#define W_MOUSE_MIDDLE SDL_BUTTON_MIDDLE
#define W_MOUSE_RIGHT  SDL_BUTTON_RIGHT
#define W_MOUSE_X1     SDL_BUTTON_X1
#define W_MOUSE_X2     SDL_BUTTON_X2
#endif
#line 4285 "weaver-window.cweb"
/*:192*//*197:*/
#line 4341 "weaver-window.cweb"

#if defined(_WIN32)
#define W_MOUSE_SIZE 6
#define W_MOUSE_LEFT   1
#define W_MOUSE_MIDDLE 2
#define W_MOUSE_RIGHT  3
#define W_MOUSE_X1     4
#define W_MOUSE_X2     5
#endif
#line 4350 "weaver-window.cweb"
/*:197*/
#line 229 "weaver-window.cweb"

/*156:*/
#line 3463 "weaver-window.cweb"

struct _Wkeyboard{
long key[W_KEYBOARD_SIZE+1];
};
/*:156*//*157:*/
#line 3498 "weaver-window.cweb"

struct _Wmouse{
long button[W_MOUSE_SIZE];
int x,y,dx,dy,ddx,ddy;
};
/*:157*/
#line 230 "weaver-window.cweb"

/*3:*/
#line 277 "weaver-window.cweb"

bool _Wcreate_window(struct _Wkeyboard*keyboard,struct _Wmouse*mouse);
/*:3*//*4:*/
#line 295 "weaver-window.cweb"

bool _Wdestroy_window(void);
/*:4*//*5:*/
#line 304 "weaver-window.cweb"

bool _Wrender_window(void);
/*:5*//*6:*/
#line 313 "weaver-window.cweb"

bool _Wget_screen_resolution(int*resolution_x,int*resolution_y);
/*:6*//*7:*/
#line 322 "weaver-window.cweb"

bool _Wget_window_size(int*width,int*height);
/*:7*//*8:*/
#line 332 "weaver-window.cweb"

void _Wget_window_input(unsigned long long current_time,
struct _Wkeyboard*keyboard,
struct _Wmouse*mouse);
/*:8*//*9:*/
#line 343 "weaver-window.cweb"

void _Wflush_window_input(struct _Wkeyboard*keyboard,
struct _Wmouse*mouse);
/*:9*//*10:*/
#line 355 "weaver-window.cweb"

bool _Wis_fullscreen(void);
/*:10*//*11:*/
#line 362 "weaver-window.cweb"

void _Wtoggle_fullscreen(void);
/*:11*//*12:*/
#line 369 "weaver-window.cweb"

bool _Wresize_window(int width,int height);
/*:12*//*13:*/
#line 377 "weaver-window.cweb"

void _Wset_resize_function(void(*func)(int,int,int,int));
/*:13*//*67:*/
#line 1459 "weaver-window.cweb"

#if defined(_WIN32)
extern BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,
UINT,int*,UINT*);
extern HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
#line 1465 "weaver-window.cweb"
/*:67*//*74:*/
#line 1601 "weaver-window.cweb"

#if defined(_WIN32)
extern GLuint(__stdcall*glCreateShader)(GLenum shaderType);
extern void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
extern void(__stdcall*glCompileShader)(GLuint);
extern void(__stdcall*glReleaseShaderCompiler)(void);
extern void(__stdcall*glDeleteShader)(GLuint);
#endif
#line 1610 "weaver-window.cweb"
/*:74*//*79:*/
#line 1675 "weaver-window.cweb"

#if defined(_WIN32)
extern GLboolean(__stdcall*glIsShader)(GLuint);
extern void(__stdcall*glGetShaderiv)(GLuint,GLenum,GLint*);
extern void(__stdcall*glGetAttachedShaders)(GLuint,GLsizei,GLsizei*,
GLuint*);
extern void(__stdcall*glGetShaderInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
extern void(__stdcall*glGetShaderSource)(GLuint,GLsizei,GLsizei*,GLchar*);
extern void(__stdcall*glGetShaderPrecisionFormat)(GLenum,GLenum,GLint*,
GLint*);
extern void(__stdcall*glGetVertexAttribfv)(GLuint,GLenum,GLfloat*);
extern void(__stdcall*glGetVertexAttribiv)(GLuint,GLenum,GLint*);
extern void(__stdcall*glGetVertexAttribPointerv)(GLuint,GLenum,void**);
extern void(__stdcall*glGetUniformfv)(GLuint,GLint,GLfloat*);
extern void(__stdcall*glGetUniformiv)(GLuint,GLint,GLint*);
#endif
#line 1691 "weaver-window.cweb"
/*:79*//*87:*/
#line 1819 "weaver-window.cweb"

#if defined(_WIN32)
extern GLuint(__stdcall*glCreateProgram)(void);
extern void(__stdcall*glAttachShader)(GLuint,GLuint);
extern void(__stdcall*glDetachShader)(GLuint,GLuint);
extern void(__stdcall*glLinkProgram)(GLuint);
extern void(__stdcall*glUseProgram)(GLuint);
extern void(__stdcall*glDeleteProgram)(GLuint);
#endif
#line 1828 "weaver-window.cweb"
/*:87*//*90:*/
#line 1866 "weaver-window.cweb"

#if defined(_WIN32)
extern GLboolean(__stdcall*glIsProgram)(GLuint);
extern void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
extern void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,
GLchar*);
extern void(__stdcall*glValidadeProgram)(GLuint);
#endif
#line 1874 "weaver-window.cweb"
/*:90*//*94:*/
#line 1924 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,
GLint*,GLenum*,GLchar*);
extern GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
extern void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
#line 1931 "weaver-window.cweb"
/*:94*//*98:*/
#line 1977 "weaver-window.cweb"

#if defined(_WIN32)
extern GLint(__stdcall*glGetUniformLocation)(GLuint,const GLchar*);
extern void(__stdcall*glGetActiveUniform)(GLuint,GLuint,GLsizei,GLsizei*,
GLint*,GLenum*,GLchar*);
extern void(__stdcall*glUniform1f)(GLint,GLfloat);
extern void(__stdcall*glUniform2f)(GLint,GLfloat,GLfloat);
extern void(__stdcall*glUniform3f)(GLint,GLfloat,GLfloat,GLfloat);
extern void(__stdcall*glUniform4f)(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
extern void(__stdcall*glUniform1i)(GLint,GLint);
extern void(__stdcall*glUniform2i)(GLint,GLint,GLint);
extern void(__stdcall*glUniform3i)(GLint,GLint,GLint,GLint);
extern void(__stdcall*glUniform4i)(GLint,GLint,GLint,GLint,GLint);
extern void(__stdcall*glUniform1fv)(GLint,GLsizei,const GLfloat*);
extern void(__stdcall*glUniform2fv)(GLint,GLsizei,const GLfloat*);
extern void(__stdcall*glUniform3fv)(GLint,GLsizei,const GLfloat*);
extern void(__stdcall*glUniform4fv)(GLint,GLsizei,const GLfloat*);
extern void(__stdcall*glUniform1iv)(GLint,GLsizei,const GLint*);
extern void(__stdcall*glUniform2iv)(GLint,GLsizei,const GLint*);
extern void(__stdcall*glUniform3iv)(GLint,GLsizei,const GLint*);
extern void(__stdcall*glUniform4iv)(GLint,GLsizei,const GLint*);
extern void(__stdcall*glUniformMatrix2fv)(GLint,GLsizei,GLboolean,
const GLfloat*);
extern void(__stdcall*glUniformMatrix3fv)(GLint,GLsizei,GLboolean,
const GLfloat*);
extern void(__stdcall*glUniformMatrix4fv)(GLint,GLsizei,GLboolean,
const GLfloat*);
#endif
#line 2005 "weaver-window.cweb"
/*:98*//*102:*/
#line 2129 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glVertexAttrib1f)(GLuint,GLfloat);
extern void(__stdcall*glVertexAttrib2f)(GLuint,GLfloat,GLfloat);
extern void(__stdcall*glVertexAttrib3f)(GLuint,GLfloat,GLfloat,GLfloat);
extern void(__stdcall*glVertexAttrib4f)(GLuint,GLfloat,GLfloat,GLfloat,
GLfloat);
extern void(__stdcall*glVertexAttrib1fv)(GLuint,GLfloat*);
extern void(__stdcall*glVertexAttrib2fv)(GLuint,GLfloat*);
extern void(__stdcall*glVertexAttrib3fv)(GLuint,GLfloat*);
extern void(__stdcall*glVertexAttrib4fv)(GLuint,GLfloat*);
extern void(__stdcall*glVertexAttribPointer)(GLuint,GLint,GLenum,GLboolean,
GLsizei,const void*);
extern void(__stdcall*glEnableVertexAttribArray)(GLuint);
extern void(__stdcall*glDisableVertexAttribArray)(GLuint);
#endif
#line 2145 "weaver-window.cweb"
/*:102*//*106:*/
#line 2219 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glGenBuffers)(GLsizei,GLuint*);
extern void(__stdcall*glDeleteBuffers)(GLsizei,const GLuint*);
extern void(__stdcall*glBindBuffer)(GLenum,GLuint);
extern void(__stdcall*glBufferData)(GLenum,GLsizeiptr,const void*,GLenum);
extern void(__stdcall*glBufferSubData)(GLenum,GLintptr,GLsizeiptr,
const void*);
extern void(__stdcall*glIsBuffer)(GLuint);
extern void(__stdcall*glGetBufferParameteriv)(GLenum,GLenum,GLint*);
#endif
#line 2230 "weaver-window.cweb"
/*:106*//*113:*/
#line 2318 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glDepthRangef)(GLclampf,GLclampf);
#endif
#line 2322 "weaver-window.cweb"
/*:113*//*117:*/
#line 2352 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glActiveTexture)(GLenum);
extern void(__stdcall*glCompressedTexImage2D)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*);
extern void(__stdcall*glCompressedTexSubImage2D)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,
void*);
extern void(__stdcall*glGenerateMipmap)(GLenum);
#endif
#line 2362 "weaver-window.cweb"
/*:117*//*121:*/
#line 2463 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glSampleCoverage)(GLclampf,bool);
extern void(__stdcall*glStencilFuncSeparate)(GLenum,GLenum,int,unsigned int);
extern void(__stdcall*glStencilOpSeparate)(GLenum,GLenum,GLenum,GLenum);
extern void(__stdcall*glBlendEquation)(GLenum);
extern void(__stdcall*glBlendEquationSeparate)(GLenum,GLenum);
extern void(__stdcall*glBlendFuncSeparate)(GLenum,GLenum);
extern void(__stdcall*glBlendColor)(GLclampf,GLclampf,GLclampf,GLclampf);
#endif
#line 2473 "weaver-window.cweb"
/*:121*//*125:*/
#line 2561 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glStencilMaskSeparate)(GLenum,unsigned int);
extern void(__stdcall*glClearDepthf)(GLclampf);
#endif
#line 2566 "weaver-window.cweb"
/*:125*//*128:*/
#line 2590 "weaver-window.cweb"

#if defined(_WIN32)
extern void(__stdcall*glBindFramebuffer)(GLenum,unsigned int);
extern void(__stdcall*glDeleteFramebuffers)(GLsizei,unsigned int*);
extern void(__stdcall*glGenFramebuffers)(GLsizei,unsigned int*);
extern void(__stdcall*glBindRenderbuffer)(GLenum,unsigned int);
extern void(__stdcall*glDeleteRenderbuffers)(GLsizei,const unsigned int*);
extern void(__stdcall*glGenRenderbuffers)(GLsizei,unsigned int*);
extern void(__stdcall*glRenderbufferStorage)(GLenum,GLenum,GLsizei,GLsizei);
extern void(__stdcall*glFramebufferRenderbuffer)(GLenum,GLenum,GLenum,
unsigned int);
extern void(__stdcall*glFramebufferTexture2D)(GLenum,GLenum,GLenum,
unsigned int,int);
extern void(__stdcall*glCheckFramebufferStatus)(GLenum);
extern boolean(__stdcall*glIsFramebuffer)(unsigned int);
extern void(__stdcall*glGetFramebufferAttachmentParameteriv)(GLenum,GLenum,
GLenum,int*);
extern boolean(__stdcall*glIsRenderbuffer)(unsigned int);
extern void(__stdcall*glGetRenderbufferParameteriv)(GLenum,GLenum,int*);
#endif
#line 2610 "weaver-window.cweb"
/*:128*//*169:*/
#line 3744 "weaver-window.cweb"

extern int W_BACKSPACE,W_TAB,W_ENTER,W_UP,W_DOWN,W_LEFT,W_RIGHT,W_0,W_1,
W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_MINUS,W_PLUS,W_F1,W_F2,
W_F3,W_F4,W_F5,W_F6,W_F7,W_F8,W_F9,W_F10,W_F11,W_F12,
W_LEFT_SHIFT,W_RIGHT_SHIFT,W_LEFT_ALT,W_RIGHT_ALT,W_LEFT_CTRL,
W_RIGHT_CTRL,W_SPACE,W_A,W_B,W_C,W_D,W_E,W_F,W_G,W_H,W_I,
W_J,W_K,W_L,W_M,W_N,W_O,W_P,W_Q,W_R,W_S,W_T,W_U,W_V,W_W,
W_X,W_Y,W_Z,W_INSERT,W_HOME,W_PAGE_UP,W_DELETE,W_END,
W_PAGE_DOWN,W_ESC,W_ANY;
/*:169*/
#line 231 "weaver-window.cweb"

#ifdef __cplusplus
}
#endif
#line 235 "weaver-window.cweb"
#endif
#line 236 "weaver-window.cweb"
/*:1*/
