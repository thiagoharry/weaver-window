/*1:*/
#line 94 "weaver-window_en.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
<<<<<<< HEAD
/*20:*/
#line 503 "weaver-window_en.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <EGL/egl.h> 
#include <GLES2/gl2.h> 
#include <EGL/eglext.h> 
#endif
/*:20*//*30:*/
#line 689 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
#include <GLES2/gl2.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:30*//*47:*/
#line 992 "weaver-window_en.tex"

#if defined(_WIN32)
#include <GL/gl.h> 
#endif
/*:47*/
#line 101 "weaver-window_en.tex"

/*17:*/
#line 458 "weaver-window_en.tex"
=======
/*15:*/
#line 437 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
<<<<<<< HEAD
/*:17*//*29:*/
#line 660 "weaver-window_en.tex"
=======
/*:15*//*27:*/
#line 638 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#endif
#if !defined(W_WINDOW_OPENGL_MINOR_VERSION)
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
<<<<<<< HEAD
/*:29*/
#line 102 "weaver-window_en.tex"
=======
/*:27*/
#line 115 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

/*3:*/
#line 152 "weaver-window_en.tex"

bool _Wcreate_window(void);
/*:3*//*4:*/
#line 169 "weaver-window_en.tex"

bool _Wdestroy_window(void);
/*:4*//*5:*/
#line 180 "weaver-window_en.tex"

bool _Wrender_window(void);
/*:5*//*52:*/
#line 1113 "weaver-window_en.tex"

#if defined(_WIN32)
extern GLuint(*glCreateShader)(GLenum shaderType);
#endif
/*:52*/
#line 103 "weaver-window_en.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
