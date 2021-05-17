/*14:*/
#line 411 "weaver-window.tex"

#include "window.h"
/*4:*/
#line 202 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:4*/
#line 413 "weaver-window.tex"

/*6:*/
#line 264 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
static int screen;
static Window window;
#endif
/*:6*/
#line 414 "weaver-window.tex"

/*12:*/
#line 370 "weaver-window.tex"

bool _Wcreate_window(void){
if(display!=NULL)
return false;
/*5:*/
#line 234 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)

display= XOpenDisplay(NULL);
if(display==NULL)
return false;

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
/*:5*//*8:*/
#line 308 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:8*//*9:*/
#line 323 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:9*//*11:*/
#line 348 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:11*/
#line 374 "weaver-window.tex"

return true;
}
/*:12*//*13:*/
#line 390 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wdestroy_window(void){
if(display==NULL)
return false;
XDestroyWindow(display,window);
XCloseDisplay(display);
display= NULL;
return true;
}
#endif
/*:13*/
#line 415 "weaver-window.tex"

/*:14*/
