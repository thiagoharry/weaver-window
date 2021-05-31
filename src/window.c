<<<<<<< HEAD
/*61:*/
#line 1275 "weaver-window_en.tex"
=======
/*58:*/
#line 1250 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#include "window.h"
/*2:*/
#line 137 "weaver-window_en.tex"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
/*:2*//*6:*/
#line 212 "weaver-window_en.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
<<<<<<< HEAD
/*:6*//*11:*/
#line 341 "weaver-window_en.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xatom.h> 
#endif
/*:11*//*14:*/
#line 414 "weaver-window_en.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xutil.h> 
#endif
/*:14*//*35:*/
#line 786 "weaver-window_en.tex"
=======
/*:6*//*18:*/
#line 484 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <EGL/egl.h> 
#include <GLES2/gl2.h> 
#include <EGL/eglext.h> 
#endif
/*:18*//*28:*/
#line 669 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
#include <GLES2/gl2.h> 
#include <SDL/SDL.h> 
#include <emscripten.h> 
#endif
/*:28*//*33:*/
#line 766 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
#include <Windows.h> 
#endif
<<<<<<< HEAD
/*:35*/
#line 1277 "weaver-window_en.tex"

/*53:*/
#line 1123 "weaver-window_en.tex"
=======
/*:33*//*39:*/
#line 872 "weaver-window.tex"

#if defined(_WIN32)
#include <string.h> 
#endif
/*:39*//*45:*/
#line 979 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
GLuint(*glCreateShader)(GLenum shaderType);
#endif
<<<<<<< HEAD
/*:53*/
#line 1278 "weaver-window_en.tex"
=======
/*:45*/
#line 1252 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

/*8:*/
#line 276 "weaver-window_en.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
static int screen;
static Window window;
#endif
<<<<<<< HEAD
/*:8*//*22:*/
#line 535 "weaver-window_en.tex"
=======
/*:8*//*20:*/
#line 515 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLDisplay*egl_display;
#endif
<<<<<<< HEAD
/*:22*//*24:*/
#line 582 "weaver-window_en.tex"
=======
/*:20*//*22:*/
#line 561 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
EGLConfig egl_config;
#endif
<<<<<<< HEAD
/*:24*//*26:*/
#line 611 "weaver-window_en.tex"
=======
/*:22*//*24:*/
#line 590 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLSurface egl_window;
#endif
<<<<<<< HEAD
/*:26*//*28:*/
#line 649 "weaver-window_en.tex"
=======
/*:24*//*26:*/
#line 627 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLContext egl_context;
#endif
<<<<<<< HEAD
/*:28*//*34:*/
#line 774 "weaver-window_en.tex"
=======
/*:26*//*32:*/
#line 753 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
<<<<<<< HEAD
/*:34*//*37:*/
#line 809 "weaver-window_en.tex"
=======
/*:32*//*35:*/
#line 790 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
<<<<<<< HEAD
/*:37*//*42:*/
#line 899 "weaver-window_en.tex"
=======
/*:35*//*40:*/
#line 883 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
<<<<<<< HEAD
/*:42*//*44:*/
#line 953 "weaver-window_en.tex"
=======
/*:40*//*42:*/
#line 937 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
static HWND window;
#endif
<<<<<<< HEAD
/*:44*//*51:*/
#line 1089 "weaver-window_en.tex"
=======
/*:42*//*49:*/
#line 1078 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
static HGLRC wgl_context;
#endif
<<<<<<< HEAD
/*:51*//*56:*/
#line 1170 "weaver-window_en.tex"

static bool already_have_window= false;
/*:56*/
#line 1279 "weaver-window_en.tex"

/*38:*/
#line 824 "weaver-window_en.tex"
=======
/*:49*//*51:*/
#line 1112 "weaver-window.tex"

static bool already_have_window= false;
/*:51*/
#line 1253 "weaver-window.tex"

/*36:*/
#line 807 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
<<<<<<< HEAD
/*39:*/
#line 842 "weaver-window_en.tex"
=======
/*37:*/
#line 825 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
<<<<<<< HEAD
/*:39*/
#line 828 "weaver-window_en.tex"
=======
/*:37*/
#line 811 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
<<<<<<< HEAD
/*:38*//*55:*/
#line 1153 "weaver-window_en.tex"
=======
/*:36*//*50:*/
#line 1095 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

bool _Wcreate_window(void){
if(already_have_window==true)
return false;
/*7:*/
#line 244 "weaver-window_en.tex"

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
/*:7*//*9:*/
<<<<<<< HEAD
#line 301 "weaver-window_en.tex"
=======
#line 315 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if !defined(W_WINDOW_NO_FULLSCREEN)
{
XSetWindowAttributes attributes;
attributes.override_redirect= true;
XChangeWindowAttributes(display,window,CWOverrideRedirect,
&attributes);
}
#endif
#endif
/*:9*//*10:*/
<<<<<<< HEAD
#line 323 "weaver-window_en.tex"

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
/*:10*//*12:*/
#line 361 "weaver-window_en.tex"
=======
#line 341 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if defined(W_WINDOW_NO_FULLSCREEN)
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
<<<<<<< HEAD
/*:12*//*13:*/
#line 388 "weaver-window_en.tex"
=======
/*:10*//*11:*/
#line 367 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
{
XSizeHints hints;
hints.flags= PMinSize|PMaxSize;
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_RESOLUTION_X >  0
hints.min_width= hints.max_width= W_WINDOW_RESOLUTION_X;
#else
hints.min_width= hints.max_width= screen_resolution_x;
#endif
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_RESOLUTION_Y >  0
hints.min_height= hints.max_height= W_WINDOW_RESOLUTION_Y;
#else
hints.min_height= hints.max_height= screen_resolution_y;
#endif
XSetWMNormalHints(display,window,&hints);
}
#endif
<<<<<<< HEAD
/*:13*//*15:*/
#line 435 "weaver-window_en.tex"
=======
/*:11*//*13:*/
#line 413 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
<<<<<<< HEAD
/*:15*//*16:*/
#line 449 "weaver-window_en.tex"
=======
/*:13*//*14:*/
#line 428 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
<<<<<<< HEAD
/*:16*//*18:*/
#line 469 "weaver-window_en.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
/*21:*/
#line 517 "weaver-window_en.tex"
=======
/*:14*//*16:*/
#line 448 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
/*19:*/
#line 499 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
return false;
}
eglInitialize(egl_display,NULL,NULL);
<<<<<<< HEAD
#endif
/*:21*//*23:*/
#line 547 "weaver-window_en.tex"
=======
/*:19*//*21:*/
#line 527 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

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
<<<<<<< HEAD
/*:23*//*25:*/
#line 596 "weaver-window_en.tex"
=======
/*:21*//*23:*/
#line 575 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

egl_window= eglCreateWindowSurface(egl_display,egl_config,
window,NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
return false;
}
<<<<<<< HEAD
/*:25*//*27:*/
#line 625 "weaver-window_en.tex"
=======
/*:23*//*25:*/
#line 604 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

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
<<<<<<< HEAD
/*:27*/
#line 471 "weaver-window_en.tex"

#endif
/*:18*//*19:*/
#line 484 "weaver-window_en.tex"
=======
/*:25*/
#line 450 "weaver-window.tex"

#endif
/*:16*//*17:*/
#line 464 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
<<<<<<< HEAD
/*:19*/
#line 1157 "weaver-window_en.tex"

/*31:*/
#line 703 "weaver-window_en.tex"
=======
/*:17*/
#line 1099 "weaver-window.tex"

/*29:*/
#line 682 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(__EMSCRIPTEN__)
screen_resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
screen_resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
#endif
<<<<<<< HEAD
/*:31*//*32:*/
#line 719 "weaver-window_en.tex"
=======
/*:29*//*30:*/
#line 699 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
<<<<<<< HEAD
/*:32*//*33:*/
#line 736 "weaver-window_en.tex"
=======
/*:30*//*31:*/
#line 716 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(__EMSCRIPTEN__)
{
int size_x,size_y,fullscreen_flag= SDL_WINDOW_FULLSCREEN;
size_x= screen_resolution_x;
size_y= screen_resolution_y;
#if defined(W_WINDOW_NO_FULLSCREEN)
fullscreen_flag= 0;
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
<<<<<<< HEAD
/*:33*/
#line 1158 "weaver-window_en.tex"

/*36:*/
#line 796 "weaver-window_en.tex"
=======
/*:31*/
#line 1100 "weaver-window.tex"

/*34:*/
#line 777 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
screen_resolution_x= GetSystemMetrics(SM_CXSCREEN);
screen_resolution_y= GetSystemMetrics(SM_CYSCREEN);
#endif
<<<<<<< HEAD
/*:36*//*40:*/
#line 858 "weaver-window_en.tex"
=======
/*:34*//*38:*/
#line 842 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
if(!already_created_a_class){
ATOM ret;
WNDCLASS window_class;
memset(&window_class,0,sizeof(WNDCLASS));
window_class.lpfnWndProc= WindowProc;
window_class.hInstance= GetModuleHandle(NULL);
window_class.lpszClassName= class_name;
window_class.hbrBackground= CreateSolidBrush(RGB(0,0,0));
ret= RegisterClass(&window_class);
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
<<<<<<< HEAD
/*:40*//*43:*/
#line 910 "weaver-window_en.tex"
=======
/*:38*//*41:*/
#line 894 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
{
int size_x,size_y;
DWORD fullscreen_flag= WS_POPUP;
RECT size;
size_x= screen_resolution_x;
size_y= screen_resolution_y;
SystemParametersInfoA(SPI_GETWORKAREA,0,&size,0);
#if defined(W_WINDOW_NO_FULLSCREEN)
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
<<<<<<< HEAD
/*:43*//*46:*/
#line 974 "weaver-window_en.tex"
=======
/*:41*//*43:*/
#line 948 "weaver-window.tex"

#if defined(_WIN32)
/*46:*/
#line 992 "weaver-window.tex"

PIXELFORMATDESCRIPTOR pixel_format;
memset(&pixel_format,0,sizeof(WNDCLASS));
pixel_format.nSize= sizeof(PIXELFORMATDESCRIPTOR);
pixel_format.nVersion= 1;
pixel_format.dwFlags= PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|
PFD_DOUBLEBUFFER|PFD_DRAW_TO_BITMAP;
pixel_format.iPixelType= PFD_TYPE_RGBA;
pixel_format.cColorBits= 24;
pixel_format.cDepthBits= 32;
pixel_format.iLayerType= PFD_MAIN_PLANE;
/*:46*//*47:*/
#line 1022 "weaver-window.tex"

HDC device_context= GetDC(window);
{
int real_pixel_format;
if(device_context==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to get device context. SysError: %d\n",
GetLastError());
#endif
return false;
}
real_pixel_format= ChoosePixelFormat(device_context,&pixel_format);
if(real_pixel_format==0){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to choose a pixel format. SysError: %d\n",
GetLastError());
#endif
return false;
}
if(!SetPixelFormat(device_context,real_pixel_format,&pixel_format)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to set the pixel format. SysError: %d\n",
GetLastError());
#endif
return false;
}
}
/*:47*//*48:*/
#line 1056 "weaver-window.tex"

wgl_context= wglCreateContext(device_context);
if(wgl_context==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to set the pixel format. SysError: %d\n",
GetLastError());
#endif
return false;
}
if(!wglMakeCurrent(device_context,wgl_context)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to set the pixel format. SysError: %d\n",
GetLastError());
#endif
return false;
}
/*:48*/
#line 950 "weaver-window.tex"

#endif
/*:43*//*44:*/
#line 960 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
<<<<<<< HEAD
/*:46*/
#line 1159 "weaver-window_en.tex"
=======
/*:44*/
#line 1101 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

already_have_window= true;
return true;
}
<<<<<<< HEAD
/*:55*//*57:*/
#line 1185 "weaver-window_en.tex"
=======
/*:50*//*52:*/
#line 1127 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

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
<<<<<<< HEAD
/*:57*//*58:*/
#line 1211 "weaver-window_en.tex"
=======
/*:52*//*53:*/
#line 1154 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

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
<<<<<<< HEAD
/*:58*//*59:*/
#line 1234 "weaver-window_en.tex"
=======
/*:53*//*54:*/
#line 1177 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if defined(_WIN32)
bool _Wdestroy_window(void){
if(already_have_window==false)
return false;
wglMakeCurrent(NULL,NULL);
wglDeleteContext(wgl_context);
DestroyWindow(window);
already_have_window= false;
return true;
}
#endif
<<<<<<< HEAD
/*:59*//*60:*/
#line 1258 "weaver-window_en.tex"
=======
/*:54*//*55:*/
#line 1201 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
return eglSwapBuffers(egl_display,egl_window);
}
#endif
<<<<<<< HEAD
/*:60*/
#line 1280 "weaver-window_en.tex"
=======
/*:55*//*56:*/
#line 1218 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
/*:56*//*57:*/
#line 1235 "weaver-window.tex"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
/*:57*/
#line 1254 "weaver-window.tex"
>>>>>>> fd63c612abdd72c177220c6f5782385a931bd768

/*:61*/
