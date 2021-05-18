/*19:*/
#line 521 "weaver-window.tex"

#include "window.h"
/*4:*/
#line 202 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:4*//*9:*/
#line 328 "weaver-window.tex"

#include <X11/Xatom.h> 
/*:9*//*12:*/
#line 398 "weaver-window.tex"

#include <X11/Xutil.h> 
/*:12*/
#line 523 "weaver-window.tex"

/*6:*/
#line 262 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
static int screen;
static Window window;
#endif
/*:6*/
#line 524 "weaver-window.tex"

/*17:*/
#line 480 "weaver-window.tex"

bool _Wcreate_window(void){
if(display!=NULL)
return false;
/*5:*/
#line 234 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)

XInitThreads();

display= XOpenDisplay(NULL);
if(display==NULL)
return false;

screen= DefaultScreen(display);

screen_resolution_x= DisplayWidth(display,screen);
screen_resolution_y= DisplayHeight(display,screen);

window= XCreateSimpleWindow(display,
DefaultRootWindow(display),
0,0,
screen_resolution_x,
screen_resolution_y,
0,0,
0);
#endif
/*:5*//*7:*/
#line 287 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if defined(W_WINDOW_FORCE_FULLSCREEN)
{
XSetWindowAttributes attributes;
attributes.override_redirect= true;
XChangeWindowAttributes(display,window,CWOverrideRedirect,&attributes);
}
#endif
#endif
/*:7*//*8:*/
#line 309 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if !defined(W_WINDOW_NO_FULLSCREEN)
{
Atom atoms[2]= {XInternAtom(display,"_NET_WM_STATE_FULLSCREEN",
False),None};
XChangeProperty(display,window,XInternAtom(display,"_NET_WM_STATE",
False),
XA_ATOM,32,PropModeReplace,(unsigned char*)atoms,1);
}
#endif
#endif
/*:8*//*10:*/
#line 345 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if defined(W_WINDOW_NO_FULLSCREEN) && !defined(W_WINDOW_FORCE_FULLSCREEN)
{
int size_x,size_y;
#if W_WINDOW_RESOLUTION_X >  0
size_x= W_WINDOW_RESOLUTION_X;
#else
size_x= screen_resolution_x;
#endif
#if W_WINDOW_RESOLUTION_Y >  0
size_y= W_WINDOW_RESOLUTION_Y;
#else
size_y= screen_resolution_y;
#endif
XResizeWindow(display,window,size_x,size_y);
}
#endif
#endif
/*:10*//*11:*/
#line 372 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
{
XSizeHints hints;
hints.flags= PMinSize|PMaxSize;
#if defined(W_WINDOW_NO_FULLSCREEN) && \
    !defined(W_WINDOW_FORCE_FULLSCREEN) && W_WINDOW_RESOLUTION_X >  0
hints.min_width= hints.max_width= W_WINDOW_RESOLUTION_X;
#else
hints.min_width= hints.max_width= screen_resolution_x;
#endif
#if defined(W_WINDOW_NO_FULLSCREEN) && \
    !defined(W_WINDOW_FORCE_FULLSCREEN) && W_WINDOW_RESOLUTION_Y >  0
hints.min_height= hints.max_height= W_WINDOW_RESOLUTION_Y;
#else
hints.min_height= hints.max_height= screen_resolution_y;
#endif
XSetWMNormalHints(display,window,&hints);
}
#endif
/*:11*//*13:*/
#line 418 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:13*//*14:*/
#line 433 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:14*//*16:*/
#line 458 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:16*/
#line 484 "weaver-window.tex"

return true;
}
/*:17*//*18:*/
#line 500 "weaver-window.tex"

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
/*:18*/
#line 525 "weaver-window.tex"

/*:19*/
