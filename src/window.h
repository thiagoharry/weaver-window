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
/*:27*/
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
/*:5*//*50:*/
#line 1106 "weaver-window.tex"

#if defined(_WIN32)
extern GLuint(*glCreateShader)(GLenum shaderType);
#endif
/*:50*/
#line 117 "weaver-window.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
