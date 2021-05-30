/*1:*/
#line 108 "weaver-window.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
/*15:*/
#line 437 "weaver-window.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:15*//*27:*/
#line 638 "weaver-window.tex"

#if !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#endif
#if !defined(W_WINDOW_OPENGL_MINOR_VERSION)
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
/*:27*/
#line 115 "weaver-window.tex"

/*3:*/
#line 166 "weaver-window.tex"

bool _Wcreate_window(void);
/*:3*//*4:*/
#line 184 "weaver-window.tex"

bool _Wdestroy_window(void);
/*:4*//*5:*/
#line 195 "weaver-window.tex"

bool _Wrender_window(void);
/*:5*/
#line 116 "weaver-window.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
