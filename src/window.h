/*1:*/
#line 108 "weaver-window.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
#include <stdio.h> 
/*15:*/
#line 447 "weaver-window.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:15*//*22:*/
#line 567 "weaver-window.tex"

#if !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#endif
#if !defined(W_WINDOW_OPENGL_MINOR_VERSION)
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
/*:22*/
#line 116 "weaver-window.tex"

/*2:*/
#line 150 "weaver-window.tex"

bool _Wcreate_window(void);
/*:2*//*3:*/
#line 168 "weaver-window.tex"

bool _Wdestroy_window(void);
/*:3*/
#line 117 "weaver-window.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
