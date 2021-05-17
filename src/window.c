/*15:*/
#line 404 "weaver-window.tex"

#include "window.h"
/*4:*/
#line 198 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:4*//*7:*/
#line 276 "weaver-window.tex"

#include <stdio.h> 
#include <stdlib.h> 
/*:7*/
#line 406 "weaver-window.tex"

/*6:*/
#line 262 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display;
static int screen;
static Window window;
#endif
/*:6*/
#line 407 "weaver-window.tex"

/*13:*/
#line 373 "weaver-window.tex"

void _Wcreate_window(void){
/*5:*/
#line 230 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)

display= XOpenDisplay(NULL);
if(display==NULL){
fprintf(stderr,"ERROR: Could not connect to a X Server.\n");
exit(1);
}

screen= DefaultScreen(display);

screen_resolution_x= DisplayWidth(display,screen);
screen_resolution_y= DisplayHeight(display,screen);

window= XCreateSimpleWindow(display,
DefaultRootWindow(display),
0,0,
(W_WINDOW_DEFAULT_RESOLUTION_X<=0)?
(screen_resolution_x):
(W_WINDOW_DEFAULT_RESOLUTION_X),
(W_WINDOW_DEFAULT_RESOLUTION_Y<=0)?
(screen_resolution_y):
(W_WINDOW_DEFAULT_RESOLUTION_Y),
0,0,
0);
#endif
/*:5*//*9:*/
#line 316 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:9*//*10:*/
#line 331 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:10*//*12:*/
#line 354 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:12*/
#line 375 "weaver-window.tex"

}
/*:13*//*14:*/
#line 387 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
void _Wdestroy_window(void){
XDestroyWindow(display,window);
XCloseDisplay(display);
}
#endif
/*:14*/
#line 408 "weaver-window.tex"

/*:15*/
