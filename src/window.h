/*1:*/
#line 94 "weaver-window_en.tex"

#ifndef WEAVER_WINDOW
#define WEAVER_WINDOW
#ifdef __cplusplus
extern"C"{
#endif
#include <stdbool.h>  
/*7:*/
#line 258 "weaver-window_en.tex"

#if !defined(W_WINDOW_DEFAULT_RESOLUTION_X)
#define W_WINDOW_DEFAULT_RESOLUTION_X 0
#endif
#if !defined(W_WINDOW_DEFAULT_RESOLUTION_Y)
#define W_WINDOW_DEFAULT_RESOLUTION_Y 0
#endif
/*:7*//*10:*/
#line 309 "weaver-window_en.tex"

#if !defined(W_WINDOW_NAME)
#define W_WINDOW_NAME ""
#endif
/*:10*/
#line 101 "weaver-window_en.tex"

/*2:*/
#line 135 "weaver-window_en.tex"

bool _Wcreate_window(void);
/*:2*//*3:*/
#line 152 "weaver-window_en.tex"

bool _Wdestroy_window(void);
/*:3*/
#line 102 "weaver-window_en.tex"

#ifdef __cplusplus
}
#endif
#endif
/*:1*/
