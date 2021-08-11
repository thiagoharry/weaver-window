/*1:*/
#line 109 "weaver-window.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
/*27:*/
#line 667 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#include <GLES2/gl2.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:27*//*45:*/
#line 1013 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <EGL/egl.h> 
#include <GLES2/gl2.h> 
#include <EGL/eglext.h> 
#endif
/*:45*//*54:*/
#line 1180 "weaver-window.tex"

#if defined(_WIN32)
#pragma comment(lib, "Opengl32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Gdi32.lib")
#include <windows.h> 
#include <GL/gl.h> 
#endif
/*:54*/
#line 116 "weaver-window.tex"

/*24:*/
#line 607 "weaver-window.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:24*//*72:*/
#line 1601 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_SHADER          0x8B31
#define GL_FRAGMENT_SHADER        0x8B30
#endif
/*:72*//*73:*/
#line 1612 "weaver-window.tex"

#if defined(_WIN32)
typedef char GLchar;
#endif
/*:73*//*77:*/
#line 1711 "weaver-window.tex"

#if defined(_WIN32)
#define GL_SHADER_TYPE          0x8B4F
#define GL_DELETE_STATUS        0x8B80
#define GL_COMPILE_STATUS       0x8B81
#define GL_INFO_LOG_LENGTH      0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif
/*:77*//*78:*/
#line 1727 "weaver-window.tex"

#if defined(_WIN32)
#define GL_LOW_FLOAT    0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT   0x8DF2
#define GL_LOW_INT      0x8DF3
#define GL_MEDIUM_INT   0x8DF4
#define GL_HIGH_INT     0x8DF5
#endif
/*:78*//*79:*/
#line 1745 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED        0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE           0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE         0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE           0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED     0x886A
#define GL_CURRENT_VERTEX_ATTRIB              0x8626
#endif
/*:79*//*80:*/
#line 1762 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif
/*:80*//*81:*/
#line 1773 "weaver-window.tex"

#if defined(_WIN32)
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#endif
/*:81*//*88:*/
#line 1886 "weaver-window.tex"

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
/*:88*//*92:*/
#line 1949 "weaver-window.tex"

#if defined(_WIN32)
#define GL_FLOAT      0x1406
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#endif
/*:92*//*96:*/
#line 2103 "weaver-window.tex"

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
/*:96*//*100:*/
#line 2213 "weaver-window.tex"

#if defined(_WIN32)
#define GL_FIXED          0x140C
#endif
/*:100*//*104:*/
#line 2284 "weaver-window.tex"

#if defined(_WIN32)
#define GL_ARRAY_BUFFER         0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#endif
/*:104*//*105:*/
#line 2296 "weaver-window.tex"

#if defined(_WIN32)
#define GL_STATIC_DRAW  0x88E4
#define GL_STREAM_DRAW  0x88E0
#define GL_DYNAMIC_DRAW 0x88E8
#endif
/*:105*//*106:*/
#line 2309 "weaver-window.tex"

#if defined(_WIN32)
#define GL_BUFFER_SIZE  0x8764
#define GL_BUFFER_USAGE 0x8765
#endif
/*:106*//*107:*/
#line 2323 "weaver-window.tex"

#if defined(_WIN32)

#include <BaseTsd.h> 
typedef size_t GLsizeiptr;
typedef SSIZE_T GLintptr;
#endif
/*:107*//*111:*/
#line 2374 "weaver-window.tex"

#if defined(_WIN32)
typedef float GLclampf;
#endif
/*:111*//*115:*/
#line 2419 "weaver-window.tex"

#if defined(_WIN32)
#define GL_RGBA          0x1908
#define GL_UNSIGNED_BYTE 0x1401
#endif
/*:115*//*139:*/
#line 3068 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#define W_KEYBOARD_SIZE 256
#endif
/*:139*//*145:*/
#line 3239 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#define W_KEYBOARD_SIZE SDL_NUM_SCANCODES
#endif
/*:145*//*149:*/
#line 3352 "weaver-window.tex"

#if defined(_WIN32)
#define W_KEYBOARD_SIZE 256
#endif
/*:149*//*161:*/
#line 3666 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#define W_MOUSE_SIZE 6
#define W_MOUSE_LEFT   Button1
#define W_MOUSE_MIDDLE Button2
#define W_MOUSE_RIGHT  Button3
#define W_MOUSE_X1     Button4
#define W_MOUSE_X2     Button5
#endif
/*:161*//*166:*/
#line 3758 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#define W_MOUSE_SIZE 6
#define W_MOUSE_LEFT   SDL_BUTTON_LEFT
#define W_MOUSE_MIDDLE SDL_BUTTON_MIDDLE
#define W_MOUSE_RIGHT  SDL_BUTTON_RIGHT
#define W_MOUSE_X1     SDL_BUTTON_X1
#define W_MOUSE_X2     SDL_BUTTON_X2
#endif
/*:166*//*171:*/
#line 3833 "weaver-window.tex"

#if defined(_WIN32)
#define W_MOUSE_SIZE 6
#define W_MOUSE_LEFT   1
#define W_MOUSE_MIDDLE 2
#define W_MOUSE_RIGHT  3
#define W_MOUSE_X1     4
#define W_MOUSE_X2     5
#endif
/*:171*/
#line 117 "weaver-window.tex"

/*3:*/
#line 168 "weaver-window.tex"

bool _Wcreate_window(void);
/*:3*//*4:*/
#line 186 "weaver-window.tex"

bool _Wdestroy_window(void);
/*:4*//*5:*/
#line 197 "weaver-window.tex"

bool _Wrender_window(void);
/*:5*//*6:*/
#line 208 "weaver-window.tex"

bool _Wget_screen_resolution(int*resolution_x,int*resolution_y);
/*:6*//*7:*/
#line 219 "weaver-window.tex"

bool _Wget_window_size(int*width,int*height);
/*:7*//*8:*/
#line 231 "weaver-window.tex"

void _Wget_window_input(unsigned long current_time);
/*:8*//*9:*/
#line 242 "weaver-window.tex"

void _Wflush_window_input(void);
/*:9*//*62:*/
#line 1386 "weaver-window.tex"

#if defined(_WIN32)
extern BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,
UINT,int*,UINT*);
extern HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
/*:62*//*69:*/
#line 1542 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(__stdcall*glCreateShader)(GLenum shaderType);
extern void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
extern void(__stdcall*glCompileShader)(GLuint);
extern void(__stdcall*glReleaseShaderCompiler)(void);
extern void(__stdcall*glDeleteShader)(GLuint);
#endif
/*:69*//*74:*/
#line 1626 "weaver-window.tex"

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
/*:74*//*82:*/
#line 1786 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(__stdcall*glCreateProgram)(void);
extern void(__stdcall*glAttachShader)(GLuint,GLuint);
extern void(__stdcall*glDetachShader)(GLuint,GLuint);
extern void(__stdcall*glLinkProgram)(GLuint);
extern void(__stdcall*glUseProgram)(GLuint);
extern void(__stdcall*glDeleteProgram)(GLuint);
#endif
/*:82*//*85:*/
#line 1839 "weaver-window.tex"

#if defined(_WIN32)
extern GLboolean(__stdcall*glIsProgram)(GLuint);
extern void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
extern void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,
GLchar*);
extern void(__stdcall*glValidadeProgram)(GLuint);
#endif
/*:85*//*89:*/
#line 1905 "weaver-window.tex"

#if defined(_WIN32)
extern void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,
GLint*,GLenum*,GLchar*);
extern GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
extern void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
/*:89*//*93:*/
#line 1966 "weaver-window.tex"

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
/*:93*//*97:*/
#line 2126 "weaver-window.tex"

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
/*:97*//*101:*/
#line 2224 "weaver-window.tex"

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
/*:101*//*108:*/
#line 2337 "weaver-window.tex"

#if defined(_WIN32)
extern void(__stdcall*glDepthRangef)(GLclampf,GLclampf);
extern void(__stdcall*glViewport)(int,int,GLsizei,GLsizei);
#endif
/*:108*//*112:*/
#line 2385 "weaver-window.tex"

#if defined(_WIN32)
extern void(__stdcall*glReadPexels)(int,int,GLsizei,GLsizei,GLenum,GLenum,
void*);
#endif
/*:112*//*116:*/
#line 2430 "weaver-window.tex"

#if defined(_WIN32)
extern void(__stdcall*glActiveTexture)(GLenum);
extern void(__stdcall*glTexImage2D)(GLenum,int,int,GLsizei,GLsizei,int,
GLenum,GLenum,void*);
extern void(__stdcall*glCopyTexImage2D)(GLenum,int,GLenum,int,int,GLsizei,
GLsizei,int);
extern void(__stdcall*glTexSubImage2D)(GLenum,int,int,int,GLsizei,GLsizei,
GLenum,GLenumn,void*);
extern void(__stdcall*glCompressedTexImage2D)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*);
extern void(__stdcall*glCompressedTexSubImage2D)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,
void*);
extern void(__stdcall*glTexParameteri)(GLenum,GLenum,int);
extern void(__stdcall*glTexParameterf)(GLenum,GLenum,float);
extern void(__stdcall*glTexParameteriv)(GLenum,GLenum,const int*);
extern void(__stdcall*glTexParameterfv)(GLenum,GLenum,const float*);
extern void(__stdcall*glGenerateMipmap)(GLenum);
extern void(__stdcall*glBindTexture)(GLenum,unsigned int);
extern void(__stdcall*glDeleteTextures)(GLsizei,unsigned int*);
extern void(__stdcall*glGenTextures)(GLsizei,unsigned int*);
extern void(__stdcall*glGetTexParameteriv)(GLenum,GLenum,int*);
extern void(__stdcall*glGetTexParameterfv)(GLenum,GLenum,float*);
extern bool(__stdcall*glIsTexture)(unsigned int);
#endif
/*:116*//*129:*/
#line 2866 "weaver-window.tex"

extern struct __Wkeyboard{
long key[W_KEYBOARD_SIZE+1];
}_Wkeyboard;
/*:129*//*131:*/
#line 2913 "weaver-window.tex"

extern struct __Wmouse{
long button[W_MOUSE_SIZE];
int x,y,dx,dy,ddx,ddy;
}_Wmouse;
/*:131*//*143:*/
#line 3180 "weaver-window.tex"

extern int W_BACKSPACE,W_TAB,W_ENTER,W_UP,W_DOWN,W_LEFT,W_RIGHT,W_0,W_1,
W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_MINUS,W_PLUS,W_F1,W_F2,
W_F3,W_F4,W_F5,W_F6,W_F7,W_F8,W_F9,W_F10,W_F11,W_F12,
W_LEFT_SHIFT,W_RIGHT_SHIFT,W_LEFT_ALT,W_RIGHT_ALT,W_LEFT_CTRL,
W_RIGHT_CTRL,W_SPACE,W_A,W_B,W_C,W_D,W_E,W_F,W_G,W_H,W_I,
W_J,W_K,W_L,W_M,W_N,W_O,W_P,W_Q,W_R,W_S,W_T,W_U,W_V,W_W,
X_X,W_Y,W_Z,W_INSERT,W_HOME,W_PAGE_UP,W_DELETE,W_END,
W_PAGE_DOWN,W_ESC,W_ANY;
/*:143*/
#line 118 "weaver-window.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
