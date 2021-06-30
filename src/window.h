/*1:*/
#line 109 "weaver-window.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
/*23:*/
#line 613 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#include <GLES2/gl2.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:23*//*41:*/
#line 948 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <EGL/egl.h> 
#include <GLES2/gl2.h> 
#include <EGL/eglext.h> 
#endif
/*:41*//*50:*/
#line 1112 "weaver-window.tex"

#if defined(_WIN32)
#pragma comment(lib, "Opengl32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Gdi32.lib")
#include <windows.h> 
#include <GL/gl.h> 
#endif
/*:50*/
#line 116 "weaver-window.tex"

/*20:*/
#line 553 "weaver-window.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:20*//*68:*/
#line 1533 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_SHADER          0x8B31
#define GL_FRAGMENT_SHADER        0x8B30
#endif
/*:68*//*69:*/
#line 1544 "weaver-window.tex"

#if defined(_WIN32)
typedef char GLchar;
#endif
/*:69*//*73:*/
#line 1643 "weaver-window.tex"

#if defined(_WIN32)
#define GL_SHADER_TYPE          0x8B4F
#define GL_DELETE_STATUS        0x8B80
#define GL_COMPILE_STATUS       0x8B81
#define GL_INFO_LOG_LENGTH      0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif
/*:73*//*74:*/
#line 1659 "weaver-window.tex"

#if defined(_WIN32)
#define GL_LOW_FLOAT    0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT   0x8DF2
#define GL_LOW_INT      0x8DF3
#define GL_MEDIUM_INT   0x8DF4
#define GL_HIGH_INT     0x8DF5
#endif
/*:74*//*75:*/
#line 1677 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED        0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE           0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE         0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE           0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED     0x886A
#define GL_CURRENT_VERTEX_ATTRIB              0x8626
#endif
/*:75*//*76:*/
#line 1694 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif
/*:76*//*77:*/
#line 1705 "weaver-window.tex"

#if defined(_WIN32)
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#endif
/*:77*//*84:*/
#line 1818 "weaver-window.tex"

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
/*:84*//*88:*/
#line 1881 "weaver-window.tex"

#if defined(_WIN32)
#define GL_FLOAT      0x1406
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#endif
/*:88*//*92:*/
#line 2035 "weaver-window.tex"

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
/*:92*//*96:*/
#line 2145 "weaver-window.tex"

#if defined(_WIN32)
#define GL_FIXED          0x140C
#endif
/*:96*/
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
/*:6*//*58:*/
#line 1318 "weaver-window.tex"

#if defined(_WIN32)
extern BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,
UINT,int*,UINT*);
extern HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
/*:58*//*65:*/
#line 1474 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(__stdcall*glCreateShader)(GLenum shaderType);
extern void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
extern void(__stdcall*glCompileShader)(GLuint);
extern void(__stdcall*glReleaseShaderCompiler)(void);
extern void(__stdcall*glDeleteShader)(GLuint);
#endif
/*:65*//*70:*/
#line 1558 "weaver-window.tex"

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
/*:70*//*78:*/
#line 1718 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(__stdcall*glCreateProgram)(void);
extern void(__stdcall*glAttachShader)(GLuint,GLuint);
extern void(__stdcall*glDetachShader)(GLuint,GLuint);
extern void(__stdcall*glLinkProgram)(GLuint);
extern void(__stdcall*glUseProgram)(GLuint);
extern void(__stdcall*glDeleteProgram)(GLuint);
#endif
/*:78*//*81:*/
#line 1771 "weaver-window.tex"

#if defined(_WIN32)
extern GLboolean(__stdcall*glIsProgram)(GLuint);
extern void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
extern void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,
GLchar*);
extern void(__stdcall*glValidadeProgram)(GLuint);
#endif
/*:81*//*85:*/
#line 1837 "weaver-window.tex"

#if defined(_WIN32)
extern void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,
GLint*,GLenum*,GLchar*);
extern GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
extern void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
/*:85*//*89:*/
#line 1898 "weaver-window.tex"

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
/*:89*//*93:*/
#line 2058 "weaver-window.tex"

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
/*:93*/
#line 118 "weaver-window.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
