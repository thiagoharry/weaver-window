/*26:*/
#line 667 "weaver-window.tex"

#include "window.h"
/*4:*/
#line 202 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:4*//*9:*/
#line 328 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xatom.h> 
#endif
/*:9*//*12:*/
#line 400 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xutil.h> 
#endif
/*:12*//*17:*/
#line 495 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:17*/
#line 669 "weaver-window.tex"

/*6:*/
#line 262 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
static int screen;
static Window window;
#endif
/*:6*//*21:*/
#line 573 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
/*:21*//*23:*/
#line 606 "weaver-window.tex"

static bool already_have_window= false;
/*:23*/
#line 670 "weaver-window.tex"

/*22:*/
#line 590 "weaver-window.tex"

bool _Wcreate_window(void){
if(already_have_window==true)
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
#line 347 "weaver-window.tex"

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
#line 374 "weaver-window.tex"

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
#line 422 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:13*//*14:*/
#line 437 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:14*//*16:*/
#line 462 "weaver-window.tex"

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
#line 594 "weaver-window.tex"

/*18:*/
#line 507 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
screen_resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
screen_resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
#endif
/*:18*//*19:*/
#line 524 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
/*:19*//*20:*/
#line 541 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
{
int size_x,size_y,fullscreen_flag= 0;
size_x= screen_resolution_x;
size_y= screen_resolution_y;
#if defined(W_WINDOW_NO_FULLSCREEN) && \
    !defined(W_WINDOW_FORCE_FULLSCREEN)
fullscreen_flag= SDL_WINDOW_FULLSCREEN;
#if defined(W_WINDOW_RESOLUTION_X) && W_WINDOW_RESOLUtION_X >  0
size_x= W_WINDOW_RESOLUtION_X;
#endif
#if defined(W_WINDOW_RESOLUTION_Y) && W_WINDOW_RESOLUtION_Y >  0
size_y= W_WINDOW_RESOLUtION_Y;
#endif
#endif
EM_ASM(
var el= document.getElementById("canvas");
el.style.display= "initial";
);
window= SDL_SetVideoMode(size_x,size_y,0,
SDL_OPENGL|fullscreen_flag);
if(window==NULL)
return false;
}
#endif
/*:20*/
#line 595 "weaver-window.tex"

already_have_window= true;
return true;
}
/*:22*//*24:*/
#line 621 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wdestroy_window(void){
if(already_have_window==false)
return false;
XDestroyWindow(display,window);
XCloseDisplay(display);
already_have_window= false;
return true;
}
#endif
/*:24*//*25:*/
#line 643 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wdestroy_window(void){
if(already_have_window==false)
return false;
SDL_FreeSurface(window);
EM_ASM(
var el= document.getElementById("canvas");
el.style.display= "none";
);
already_have_window= false;
return true;
}
#endif
/*:25*/
#line 671 "weaver-window.tex"

/*:26*/
