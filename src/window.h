/*1:*/
#line 108 "weaver-window.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
/*18:*/
#line 485 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <EGL/egl.h> 
#include <GLES2/gl2.h> 
#include <EGL/eglext.h> 
#endif
/*:18*//*28:*/
#line 670 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#include <GLES2/gl2.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:28*//*45:*/
#line 980 "weaver-window.tex"

#if defined(_WIN32)
#include <windows.h> 
#include <GL/gl.h> 
#endif
/*:45*/
#line 115 "weaver-window.tex"

/*15:*/
#line 438 "weaver-window.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:15*//*27:*/
#line 639 "weaver-window.tex"

#if !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#endif
#if !defined(W_WINDOW_OPENGL_MINOR_VERSION)
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
/*:27*//*54:*/
#line 1192 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_SHADER          0x8B31
#define GL_FRAGMENT_SHADER        0x8B30
#endif
/*:54*//*55:*/
#line 1203 "weaver-window.tex"

#if defined(_WIN32)
typedef GLchar char;
#endif
/*:55*//*59:*/
#line 1299 "weaver-window.tex"

#if defined(_WIN32)
#define GL_SHADER_TYPE          0x8B4F
#define GL_DELETE_STATUS        0x8B80
#define GL_COMPILE_STATUS       0x8B81
#define GL_INFO_LOG_LENGTH      0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif
/*:59*//*60:*/
#line 1315 "weaver-window.tex"

#if defined(_WIN32)
#define GL_LOW_FLOAT    0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT   0x8DF2
#define GL_LOW_INT      0x8DF3
#define GL_MEDIUM_INT   0x8DF4
#define GL_HIGH_INT     0x8DF5
#endif
/*:60*//*61:*/
#line 1333 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED        0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE           0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE         0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE           0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED     0x886A
#define GL_CURRENT_VERTEX_ATTRIB              0x8626
#endif
/*:61*//*62:*/
#line 1350 "weaver-window.tex"

#if defined(_WIN32)
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif
/*:62*//*69:*/
#line 1459 "weaver-window.tex"

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
/*:69*//*73:*/
#line 1521 "weaver-window.tex"

#if defined(_WIN32)
#define GL_FLOAT      0x1406
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#endif
/*:73*//*77:*/
#line 1666 "weaver-window.tex"

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
/*:77*//*81:*/
#line 1782 "weaver-window.tex"

#if defined(_WIN32)




#define GL_FIXED          0x140C
#endif
/*:81*/
#line 116 "weaver-window.tex"

/*3:*/
#line 167 "weaver-window.tex"

bool _Wcreate_window(void);
/*:3*//*4:*/
#line 185 "weaver-window.tex"

bool _Wdestroy_window(void);
/*:4*//*5:*/
#line 196 "weaver-window.tex"

bool _Wrender_window(void);
/*:5*//*51:*/
#line 1136 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(*glCreateShader)(GLenum shaderType);
extern void(*glShaderSource)(GLuint,GLsizei,const GLchar**,const GLint*);
extern void(*glCompileShader)(GLuint);
extern void(*glReleaseShaderCompiler)(void);
extern void(*glDeleteShader)(GLuint);
#endif
/*:51*//*56:*/
#line 1217 "weaver-window.tex"

#if defined(_WIN32)
extern boolean(*glIsShader)(GLuint);
extern void(*glGetShaderiv)(GLuint,GLenum,GLint*);
extern void(*glGetAttachedShaders)(GLuint,GLsizei,GLsizei*,GLuint*);
extern void(*glGetShaderInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
extern void(*glGetShaderSource)(GLuint,GLsizei,GLsizei*,GLchar*);
extern void(*glGetShaderPrecisionFormat)(GLenum,GLenum,GLint*,GLint*);
extern void(*glGetVertexAttribfv)(GLuint,GLenum,GLfloat*);
extern void(*glGetVertexAttribiv)(GLuint,GLenum,GLint*);
extern void(*glGetVertexAttribPointerv)(GLuint,GLenum,void**);
extern void(*glGetUniformfv)(GLuint,GLint,GLfloat*);
extern void(*glGetUniformiv)(GLuint,GLint,GLint*);
#endif
/*:56*//*63:*/
#line 1363 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(*glCreateProgram)(void);
extern void(*glAttachShader)(GLuint,GLuint);
extern void(*glDetachShader)(GLuint,GLuint);
extern void(*glLinkProgram)(GLuint);
extern void(*glUseProgram)(GLuint);
extern void(*glDeleteProgram)(GLuint);
#endif
/*:63*//*66:*/
#line 1414 "weaver-window.tex"

#if defined(_WIN32)
extern GLboolean(*glIsProgram)(GLuint);
extern void glGetProgramiv(GLuint,GLenum,GLint*);
extern void glGetProgramInfoLog(GLuint,GLsizei,GLsizei*,GLchar*);
extern void(*glValidadeProgram)(GLuint);
#endif
/*:66*//*70:*/
#line 1478 "weaver-window.tex"

#if defined(_WIN32)
extern void(*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*;)
extern GLint(*glGetAttribLocation)(GLuint,const GLchar*);
extern void(*glBindAttribLocation)(GLuint,GLuint,cont GLchar*);
#endif
/*:70*//*74:*/
#line 1538 "weaver-window.tex"

#if defined(_WIN32)
extern GLint(*glGetUniformLocation)(GLuint,const GLchar*);
extern void(*glGetActiveUniform)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
extern void(*glUniform1f)(GLint,GLfloat);
extern void(*glUniform2f)(GLint,GLfloat,GLfloat);
extern void(*glUniform3f)(GLint,GLfloat,GLfloat,GLfloat);
extern void(*glUniform4f)(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
extern void(*glUniform1i)(GLint,GLint);
extern void(*glUniform2i)(GLint,GLint,GLint);
extern void(*glUniform3i)(GLint,GLint,GLint,GLint);
extern void(*glUniform4i)(GLint,GLint,GLint,GLint,GLint);
extern void(*glUniform1fv)(GLint,GLsizei,const GLfloat*);
extern void(*glUniform2fv)(GLint,GLsizei,const GLfloat*);
extern void(*glUniform3fv)(GLint,GLsizei,const GLfloat*);
extern void(*glUniform4fv)(GLint,GLsizei,const GLfloat*);
extern void(*glUniform1iv)(GLint,GLsizei,const GLint*);
extern void(*glUniform2iv)(GLint,GLsizei,const GLint*);
extern void(*glUniform3iv)(GLint,GLsizei,const GLint*);
extern void(*glUniform4iv)(GLint,GLsizei,const GLint*);
extern void(*glUniformMatrix2fv)(GLint,GLsizei,GLboolean,const GLfloat*);
extern void(*glUniformMatrix3fv)(GLint,GLsizei,GLboolean,const GLfloat*);
extern void(*glUniformMatrix4fv)(GLint,GLsizei,GLboolean,const GLfloat*);
#endif
/*:74*//*78:*/
#line 1689 "weaver-window.tex"

#if defined(_WIN32)
extern void(*glVertexAttrib1f)(GLuint,GLfloat);
extern void(*glVertexAttrib2f)(GLuint,GLfloat,GLfloat);
extern void(*glVertexAttrib3f)(GLuint,GLfloat,GLfloat,GLfloat);
extern void(*glVertexAttrib4f)(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
extern void(*glVertexAttrib1fv)(GLuint,GLfloat*);
extern void(*glVertexAttrib2fv)(GLuint,GLfloat*);
extern void(*glVertexAttrib3fv)(GLuint,GLfloat*);
extern void(*glVertexAttrib4fv)(GLuint,GLfloat*);
extern void(*glVertexAttribPointer)(GLuint,GLint,GLenum,GLboolean,
GLsizei,const void*);
extern void(*glEnableVertexAttribArray)(GLuint);
extern void(*glDisableVertexAttribArray)(GLuint);
extern void(*glDrawArrays)(GLenum,GLint,GLsizei);
extern void(*glDrawElements)(GLenum,GLsizei,GLenum,const void*);
#endif
/*:78*/
#line 117 "weaver-window.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
