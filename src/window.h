/*1:*/
#line 94 "weaver-window_en.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
/*16:*/
#line 446 "weaver-window_en.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:16*//*28:*/
#line 648 "weaver-window_en.tex"

#if !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#endif
#if !defined(W_WINDOW_OPENGL_MINOR_VERSION)
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
/*:28*/
#line 101 "weaver-window_en.tex"

/*3:*/
#line 151 "weaver-window_en.tex"

bool _Wcreate_window(void);
/*:3*//*4:*/
#line 168 "weaver-window_en.tex"

bool _Wdestroy_window(void);
/*:4*/
#line 102 "weaver-window_en.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
