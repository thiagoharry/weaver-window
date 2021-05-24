/*50:*/
#line 1101 "weaver-window.tex"

#include "window.h"
/*2:*/
#line 151 "weaver-window.tex"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
/*:2*//*5:*/
#line 219 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:5*//*10:*/
#line 350 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xatom.h> 
#endif
/*:10*//*13:*/
#line 422 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xutil.h> 
#endif
/*:13*//*19:*/
#line 515 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <EGL/egl.h> 
#include <GLES2/gl2.h> 
#include <EGL/eglext.h> 
#endif
/*:19*//*29:*/
#line 700 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#include <GLES2/gl2.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:29*//*34:*/
#line 798 "weaver-window.tex"

#if defined(_WIN32)
#include <Windows.h> 
#endif
/*:34*//*40:*/
#line 906 "weaver-window.tex"

#if defined(_WIN32)
#include <string.h> 
#endif
/*:40*/
#line 1103 "weaver-window.tex"

/*7:*/
#line 283 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
static int screen;
static Window window;
#endif
/*:7*//*21:*/
#line 546 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLDisplay*egl_display;
#endif
/*:21*//*23:*/
#line 592 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
EGLConfig egl_config;
#endif
/*:23*//*25:*/
#line 621 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLSurface egl_window;
#endif
/*:25*//*27:*/
#line 658 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLContext egl_context;
#endif
/*:27*//*33:*/
#line 785 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
/*:33*//*36:*/
#line 822 "weaver-window.tex"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
/*:36*//*41:*/
#line 917 "weaver-window.tex"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
/*:41*//*43:*/
#line 972 "weaver-window.tex"

#if defined(_WIN32)
static HWND window;
#endif
/*:43*//*46:*/
#line 1016 "weaver-window.tex"

static bool already_have_window= false;
/*:46*/
#line 1104 "weaver-window.tex"

/*37:*/
#line 839 "weaver-window.tex"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*38:*/
#line 857 "weaver-window.tex"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:38*/
#line 843 "weaver-window.tex"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
/*:37*//*45:*/
#line 999 "weaver-window.tex"

bool _Wcreate_window(void){
if(already_have_window==true)
return false;
/*6:*/
#line 251 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)

XInitThreads();

display= XOpenDisplay(NULL);
if(display==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to connect to X11 server.\n");
#endif
return false;
}

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
/*:6*//*8:*/
#line 308 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if defined(W_WINDOW_FORCE_FULLSCREEN)
{
XSetWindowAttributes attributes;
attributes.override_redirect= true;
XChangeWindowAttributes(display,window,CWOverrideRedirect,
&attributes);
}
#endif
#endif
/*:8*//*9:*/
#line 331 "weaver-window.tex"

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
/*:9*//*11:*/
#line 369 "weaver-window.tex"

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
/*:11*//*12:*/
#line 396 "weaver-window.tex"

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
/*:12*//*14:*/
#line 444 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:14*//*15:*/
#line 459 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:15*//*17:*/
#line 479 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
/*20:*/
#line 530 "weaver-window.tex"

egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
return false;
}
eglInitialize(egl_display,NULL,NULL);
/*:20*//*22:*/
#line 558 "weaver-window.tex"

{
bool ret;
int number_of_configs_returned;
int requested_attributes[]= {

EGL_SURFACE_TYPE,EGL_WINDOW_BIT|EGL_PBUFFER_BIT,

EGL_RED_SIZE,1,

EGL_GREEN_SIZE,1,

EGL_BLUE_SIZE,1,

EGL_ALPHA_SIZE,1,

EGL_DEPTH_SIZE,1,
EGL_NONE
};
ret= eglChooseConfig(egl_display,requested_attributes,
&egl_config,1,&number_of_configs_returned);
if(ret==EGL_FALSE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create valid EGL config.\n");
#endif
return false;
}
}
/*:22*//*24:*/
#line 606 "weaver-window.tex"

egl_window= eglCreateWindowSurface(egl_display,egl_config,window,
NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
return false;
}
/*:24*//*26:*/
#line 635 "weaver-window.tex"

{
int context_attribs[]= {
EGL_CONTEXT_MAJOR_VERSION,W_WINDOW_OPENGL_MAJOR_VERSION,
EGL_CONTEXT_MINOR_VERSION,W_WINDOW_OPENGL_MINOR_VERSION,
EGL_NONE
};
egl_context= eglCreateContext(egl_display,egl_config,
EGL_NO_CONTEXT,context_attribs);
if(egl_context==EGL_NO_CONTEXT){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL context.\n");
#endif
return false;
}
eglMakeCurrent(egl_display,egl_window,egl_window,egl_context);
}
/*:26*/
#line 481 "weaver-window.tex"

#endif
/*:17*//*18:*/
#line 495 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:18*/
#line 1003 "weaver-window.tex"

/*30:*/
#line 713 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
screen_resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
screen_resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
#endif
/*:30*//*31:*/
#line 730 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
/*:31*//*32:*/
#line 747 "weaver-window.tex"

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

SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION,
W_WINDOW_OPENGL_MAJOR_VERSION);
SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION,
W_WINDOW_OPENGL_MINOR_VERSION);

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
/*:32*/
#line 1004 "weaver-window.tex"

/*35:*/
#line 809 "weaver-window.tex"

#if defined(_WIN32)
screen_resolution_x= GetSystemMetrics(SM_CXSCREEN);
screen_resolution_y= GetSystemMetrics(SM_CYSCREEN);
#endif
/*:35*//*39:*/
#line 877 "weaver-window.tex"

#if defined(_WIN32)
if(!already_created_a_class){
ATOM ret;
WNDCLASS window_class;
memset(&window_class,0,sizeof(WNDCLASS));
window_class.lpfnWndProc= WindowProc;
window_class.hInstance= GetModuleHandle(NULL);
window_class.lpszClassName= class_name;
ret= RegisterClass(&windows_class);
if(ret==0){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to register Window Class. SysError: %d\n",
GetLastError());
#endif
return false;
}
already_created_a_class= true;
}
#endif
/*:39*//*42:*/
#line 928 "weaver-window.tex"

#if defined(_WIN32)
{
int size_x,size_y;
DWORD fullscreen_flag= WS_POPUP;
RECT size;
size_x= screen_resolution_x;
size_y= screen_resolution_y;
SystemParametersInfoA(SPI_GETWORKAREA,0,&size,0);
#if !defined(W_WINDOW_FORCE_FULLSCREEN) && \
    defined(W_WINDOW_NO_FULLSCREEN)
size_x= size.left-size.right;
size_y= size.bottom-size.top;
fullscreen_flag= WS_OVERLAPPED;
#if defined(W_WINDOW_RESOLUTION_X) && W_WINDOW_RESOLUTION_X >  0
size_x= W_WINDOW_RESOLUTION_X;
#endif
#if defined(W_WINDOW_RESOLUTION_Y) && W_WINDOW_RESOLUTION_Y >  0
size_y= W_WINDOW_RESOLUTION_Y;
#endif
#endif
window= CreateWindowEx(0,class_name,
W_WINDOW_NAME,
fullscreen_flag|WS_VISIBLE,
size.left,size.top,size_x,size_y,
NULL,NULL,
GetModuleHandle(NULL),
NULL);
if(window==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed creating window. SysCode: %d\n",
GetLastError());
#endif
return false;
}
}
#endif
/*:42*//*44:*/
#line 983 "weaver-window.tex"

#if defined(_WIN32)
ShowWindow(window,SW_MAXIMIZE);
#endif
/*:44*/
#line 1005 "weaver-window.tex"

already_have_window= true;
return true;
}
/*:45*//*47:*/
#line 1031 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wdestroy_window(void){
if(already_have_window==false)
return false;
eglMakeCurrent(egl_display,EGL_NO_SURFACE,EGL_NO_SURFACE,
EGL_NO_CONTEXT);
eglDestroySurface(egl_display,egl_window);
eglDestroyContext(egl_display,egl_context);
eglTerminate(egl_display);
XDestroyWindow(display,window);
XCloseDisplay(display);
already_have_window= false;
return true;
}
#endif
/*:47*//*48:*/
#line 1058 "weaver-window.tex"

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
/*:48*//*49:*/
#line 1081 "weaver-window.tex"

#if defined(_WIN32)
bool _Wdestroy_window(void){
if(already_have_window==false)
return false;
DestroyWindow(window);
already_have_window= false;
return true;
}
#endif
/*:49*/
#line 1105 "weaver-window.tex"

/*:50*/
