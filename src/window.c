/*98:*/
#line 2167 "weaver-window.tex"

#include "window.h"
/*2:*/
#line 152 "weaver-window.tex"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
/*:2*//*6:*/
#line 231 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:6*//*32:*/
#line 752 "weaver-window.tex"

#if defined(_WIN32)
#include <Windows.h> 
#endif
/*:32*//*38:*/
#line 858 "weaver-window.tex"

#if defined(_WIN32)
#include <string.h> 
#endif
/*:38*//*56:*/
#line 1281 "weaver-window.tex"

#define WGL_TYPE_RGBA_ARB                      0x202B
#define WGL_PIXEL_TYPE_ARB                     0x2013
#define WGL_COLOR_BITS_ARB                     0x2014
#define WGL_DEPTH_BITS_ARB                     0x2022
#define WGL_STENCIL_BITS_ARB                   0x2023
#define WGL_DOUBLE_BUFFER_ARB                  0x2011
#define WGL_CONTEXT_FLAGS_ARB                  0x2094
#define WGL_DRAW_TO_WINDOW_ARB                 0x2001
#define WGL_SUPPORT_OPENGL_ARB                 0x2010
#define WGL_CONTEXT_MAJOR_VERSION_ARB          0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB          0x2092
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x0002
/*:56*//*91:*/
#line 2020 "weaver-window.tex"

#if defined(_WIN32) && !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 4
#define W_WINDOW_OPENGL_MINOR_VERSION 1
#elif defined(__EMSCRIPTEN__) && !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 2
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#elif !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
/*:91*/
#line 2169 "weaver-window.tex"

/*49:*/
#line 1107 "weaver-window.tex"

#if defined(_WIN32)
static void*load_function(const char*name){
void*ret= wglGetProcAddress("glCreateShader");
if(ret==NULL||ret==(void*)-1||ret==(void*)0x1||
ret==(void*)0x2||ret==(void*)0x3){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Function '%s' not supported.\n",name);
#endif
return NULL;
}
return ret;
}
#endif
/*:49*/
#line 2170 "weaver-window.tex"

/*51:*/
#line 1152 "weaver-window.tex"

#if defined(_WIN32)
BOOL(*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,UINT,
int*,UINT*);
HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
/*:51*//*58:*/
#line 1319 "weaver-window.tex"

#if defined(_WIN32)
GLuint(*glCreateShader)(GLenum shaderType);
void(*glShaderSource)(GLuint,GLsizei,const GLchar**,const GLint*);
void(*glCompileShader)(GLuint);
void(*glReleaseShaderCompiler)(void);
void(*glDeleteShader)(GLuint);
#endif
/*:58*//*63:*/
#line 1405 "weaver-window.tex"

#if defined(_WIN32)
boolean(*glIsShader)(GLuint);
void(*glGetShaderiv)(GLuint,GLenum,GLint*);
void(*glGetAttachedShaders)(GLuint,GLsizei,GLsizei*,GLuint*);
void(*glGetShaderInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(*glGetShaderSource)(GLuint,GLsizei,GLsizei*,GLchar*);
void(*glGetShaderPrecisionFormat)(GLenum,GLenum,GLint*,GLint*);
void(*glGetVertexAttribfv)(GLuint,GLenum,GLfloat*);
void(*glGetVertexAttribiv)(GLuint,GLenum,GLint*);
void(*glGetVertexAttribPointerv)(GLuint,GLenum,void**);
void(*glGetUniformfv)(GLuint,GLint,GLfloat*);
void(*glGetUniformiv)(GLuint,GLint,GLint*);
#endif
/*:63*//*71:*/
#line 1557 "weaver-window.tex"

#if defined(_WIN32)
GLuint(*glCreateProgram)(void);
void(*glAttachShader)(GLuint,GLuint);
void(*glDetachShader)(GLuint,GLuint);
void(*glLinkProgram)(GLuint);
void(*glUseProgram)(GLuint);
void(*glDeleteProgram)(GLuint);
#endif
/*:71*//*74:*/
#line 1606 "weaver-window.tex"

#if defined(_WIN32)
GLboolean(*glIsProgram)(GLuint);
void(*glGetProgramiv)(GLuint,GLenum,GLint*);
void(*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(*glValidadeProgram)(GLuint);
#endif
/*:74*//*78:*/
#line 1670 "weaver-window.tex"

#if defined(_WIN32)
void(*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
GLint(*glGetAttribLocation)(GLuint,const GLchar*);
void(*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
/*:78*//*82:*/
#line 1748 "weaver-window.tex"

#if defined(_WIN32)
GLint(*glGetUniformLocation)(GLuint,const GLchar*);
void(*glGetActiveUniform)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
void(*glUniform1f)(GLint,GLfloat);
void(*glUniform2f)(GLint,GLfloat,GLfloat);
void(*glUniform3f)(GLint,GLfloat,GLfloat,GLfloat);
void(*glUniform4f)(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
void(*glUniform1i)(GLint,GLint);
void(*glUniform2i)(GLint,GLint,GLint);
void(*glUniform3i)(GLint,GLint,GLint,GLint);
void(*glUniform4i)(GLint,GLint,GLint,GLint,GLint);
void(*glUniform1fv)(GLint,GLsizei,const GLfloat*);
void(*glUniform2fv)(GLint,GLsizei,const GLfloat*);
void(*glUniform3fv)(GLint,GLsizei,const GLfloat*);
void(*glUniform4fv)(GLint,GLsizei,const GLfloat*);
void(*glUniform1iv)(GLint,GLsizei,const GLint*);
void(*glUniform2iv)(GLint,GLsizei,const GLint*);
void(*glUniform3iv)(GLint,GLsizei,const GLint*);
void(*glUniform4iv)(GLint,GLsizei,const GLint*);
void(*glUniformMatrix2fv)(GLint,GLsizei,GLboolean,const GLfloat*);
void(*glUniformMatrix3fv)(GLint,GLsizei,GLboolean,const GLfloat*);
void(*glUniformMatrix4fv)(GLint,GLsizei,GLboolean,const GLfloat*);
#endif
/*:82*//*86:*/
#line 1889 "weaver-window.tex"

#if defined(_WIN32)
void(*glVertexAttrib1f)(GLuint,GLfloat);
void(*glVertexAttrib2f)(GLuint,GLfloat,GLfloat);
void(*glVertexAttrib3f)(GLuint,GLfloat,GLfloat,GLfloat);
void(*glVertexAttrib4f)(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
void(*glVertexAttrib1fv)(GLuint,GLfloat*);
void(*glVertexAttrib2fv)(GLuint,GLfloat*);
void(*glVertexAttrib3fv)(GLuint,GLfloat*);
void(*glVertexAttrib4fv)(GLuint,GLfloat*);
void(*glVertexAttribPointer)(GLuint,GLint,GLenum,GLboolean,
GLsizei,const void*);
void(*glEnableVertexAttribArray)(GLuint);
void(*glDisableVertexAttribArray)(GLuint);
#endif
/*:86*/
#line 2171 "weaver-window.tex"

/*8:*/
#line 295 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
static int screen;
static Window window;
#endif
/*:8*//*20:*/
#line 516 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLDisplay*egl_display;
#endif
/*:20*//*22:*/
#line 562 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
EGLConfig egl_config;
#endif
/*:22*//*24:*/
#line 591 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLSurface egl_window;
#endif
/*:24*//*26:*/
#line 628 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLContext egl_context;
#endif
/*:26*//*31:*/
#line 739 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
/*:31*//*34:*/
#line 776 "weaver-window.tex"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
/*:34*//*39:*/
#line 869 "weaver-window.tex"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
/*:39*//*41:*/
#line 923 "weaver-window.tex"

#if defined(_WIN32)
static HWND window;
#endif
/*:41*//*48:*/
#line 1089 "weaver-window.tex"

#if defined(_WIN32)
static HGLRC wgl_context;
static HDC device_context;
#endif
/*:48*//*90:*/
#line 1990 "weaver-window.tex"

static bool already_have_window= false;
/*:90*/
#line 2172 "weaver-window.tex"

/*35:*/
#line 793 "weaver-window.tex"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*36:*/
#line 811 "weaver-window.tex"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:36*/
#line 797 "weaver-window.tex"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
/*:35*//*89:*/
#line 1973 "weaver-window.tex"

bool _Wcreate_window(void){
if(already_have_window==true)
return false;
/*7:*/
#line 263 "weaver-window.tex"

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
#line 316 "weaver-window.tex"

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
#line 342 "weaver-window.tex"

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
/*:10*//*11:*/
#line 368 "weaver-window.tex"

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
/*:11*//*13:*/
#line 414 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:13*//*14:*/
#line 429 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:14*//*16:*/
#line 449 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
/*19:*/
#line 500 "weaver-window.tex"

egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
return false;
}
eglInitialize(egl_display,NULL,NULL);
/*:19*//*21:*/
#line 528 "weaver-window.tex"

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
/*:21*//*23:*/
#line 576 "weaver-window.tex"

egl_window= eglCreateWindowSurface(egl_display,egl_config,window,
NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
return false;
}
/*:23*//*25:*/
#line 605 "weaver-window.tex"

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
/*:25*/
#line 451 "weaver-window.tex"

#endif
/*:16*//*17:*/
#line 465 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:17*/
#line 1977 "weaver-window.tex"

/*28:*/
#line 668 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
screen_resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
screen_resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
#endif
/*:28*//*29:*/
#line 685 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
/*:29*//*30:*/
#line 702 "weaver-window.tex"

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
/*:30*/
#line 1978 "weaver-window.tex"

/*33:*/
#line 763 "weaver-window.tex"

#if defined(_WIN32)
screen_resolution_x= GetSystemMetrics(SM_CXSCREEN);
screen_resolution_y= GetSystemMetrics(SM_CYSCREEN);
#endif
/*:33*//*37:*/
#line 828 "weaver-window.tex"

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
/*:37*//*40:*/
#line 880 "weaver-window.tex"

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
/*:40*//*42:*/
#line 934 "weaver-window.tex"

#if defined(_WIN32)
/*45:*/
#line 1002 "weaver-window.tex"

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
/*:45*//*46:*/
#line 1032 "weaver-window.tex"

device_context= GetDC(window);
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
/*:46*//*47:*/
#line 1066 "weaver-window.tex"

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
/*:47*//*52:*/
#line 1166 "weaver-window.tex"

wglChoosePixelFormatARB= (BOOL(*)(HDC,const int*,const FLOAT*,UINT,int*,
UINT*))load_function("wglChoosePixelFormatARB");
if(wglChoosePixelFormatARB==NULL)return false;
wglCreateContextAttribsARB= (HGLRC(*)(HDC,HGLRC,const int*))
load_function("wglCreateContextAttribsARB");
if(wglCreateContextAttribsARB==NULL)return false;
/*:52*//*53:*/
#line 1180 "weaver-window.tex"

wglMakeCurrent(NULL,NULL);
wglDeleteContext(wgl_context);
ReleaseDC(window,device_context);
DestroyWindow(window);
/*:53*//*54:*/
#line 1196 "weaver-window.tex"

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
device_context= GetDC(window);
}
/*:54*//*55:*/
#line 1231 "weaver-window.tex"

{
int ret;
const int real_pixel_format[]= {
WGL_DRAW_TO_WINDOW_ARB,GL_TRUE,
WGL_SUPPORT_OPENGL_ARB,GL_TRUE,
WGL_DOUBLE_BUFFER_ARB,GL_TRUE,
WGL_PIXEL_TYPE_ARB,WGL_TYPE_RGBA_ARB,
WGL_COLOR_BITS_ARB,32,
WGL_DEPTH_BITS_ARB,24,
WGL_STENCIL_BITS_ARB,8,
0};
const int attributes[]= {
WGL_CONTEXT_MAJOR_VERSION_ARB,W_WINDOW_OPENGL_MAJOR_VERSION,
WGL_CONTEXT_MINOR_VERSION_ARB,W_WINDOW_OPENGL_MINOR_VERSION,
WGL_CONTEXT_FLAGS_ARB,WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB,
0};
int pixel_format_index= 0;
UINT number_of_formats= 0;
ret= wglChoosePixelFormatARB(device_context,real_pixel_format,NULL,1,
&pixel_format_index,
(UINT*)(&number_of_formats));
if(ret==FALSE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'wglChoosePixelFormatARB' failed.\n");
#endif
return false;
}
ret= SetPixelFormat(device_context,pixel_format_index,&pixel_format);
if(ret==FALSE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'SetPixelFormat' failed.\n");
#endif
return false;
}
wgl_context= wglCreateContextAttribsARB(device_context,0,attributes);
if(wgl_context==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'wglCreateContextAttribsARB' failed.\n");
#endif
return false;
}
wglMakeCurrent(device_context,wgl_context);
}
/*:55*//*59:*/
#line 1335 "weaver-window.tex"

glCreateShader= (GLuint(*)(GLenum))load_function("glCreateShader");
if(glCreateShader==NULL)
return false;
glShaderSource= (void(*)(GLuint,GLsizei,const GLchar**,const GLint*))
load_function("glCreateShader");
if(glShaderSource==NULL)
return false;
glCompileShader= (void(*)(GLuint))load_function("glCompileShader");
if(glCompileShader==NULL)
return false;
glReleaseShaderCompiler= (void(*)(void))
load_function("glReleaseShaderCompiler");
if(glReleaseShaderCompiler==NULL)
return false;
glDeleteShader= (void(*)(GLuint))load_function("glDeleteShader");
if(glDeleteShader==NULL)
return false;
/*:59*//*64:*/
#line 1426 "weaver-window.tex"

glIsShader= (boolean(*)(GLuint))load_function("glIsShader");
if(glIsShader==NULL)return false;
glGetShaderiv= (void(*)(GLuint,GLenum,GLint*))
load_function("glGetShaderiv");
if(glGetShaderiv==NULL)return false;
glGetAttachedShaders= (void(*)(GLuint,GLsizei,GLsizei*,GLuint*))
load_function("glGetAttachedShaders");
if(glGetAttachedShaders==NULL)return false;
glGetShaderInfoLog= (void(*)(GLuint,GLsizei,GLsizei*,GLchar*))
load_function("glGetShaderInfoLog");
if(glGetShaderInfoLog==NULL)return false;
glGetShaderSource= (void(*)(GLuint,GLsizei,GLsizei*,GLchar*))
load_function("glGetShaderSource");
if(glGetShaderSource==NULL)return false;
glGetShaderPrecisionFormat= (void(*)(GLenum,GLenum,GLint*,GLint*))
load_function("glGetShaderPrecisionFormat");
if(glGetShaderPrecisionFormat==NULL)return false;
glGetVertexAttribfv= (void(*)(GLuint,GLenum,GLfloat*))
load_function("glGetVertexAttribfv");
if(glGetVertexAttribfv==NULL)return false;
glGetVertexAttribiv= (void(*)(GLuint,GLenum,GLint*))
load_function("glGetVertexAttribiv");
if(glGetVertexAttribiv==NULL)return false;
glGetVertexAttribPointerv= (void(*)(GLuint,GLenum,void**))
load_function("glGetVertexAttribPointerv");
if(glGetVertexAttribPointerv==NULL)return false;
glGetUniformfv= (void(*)(GLuint,GLint,GLfloat*))
load_function("glGetUniformfv");
if(glGetUniformfv==NULL)return false;
glGetUniformiv= (void(*)(GLuint,GLint,GLint*))
load_function("glGetUniformiv");
if(glGetUniformiv==NULL)return false;
/*:64*//*72:*/
#line 1572 "weaver-window.tex"

glCreateProgram= (GLuint(*)(void))load_function("glCreateProgram");
if(glCreateProgram==NULL)return false;
glAttachShader= (void(*)(GLuint,GLuint))load_function("glAttachShader");
if(glAttachShader==NULL)return false;
glDetachShader= (void(*)(GLuint,GLuint))load_function("glDetachShader");
if(glDetachShader==NULL)return false;
glLinkProgram= (void(*)(GLuint))load_function("glLinkProgram");
if(glLinkProgram==NULL)return false;
glUseProgram= (void(*)(GLuint))load_function("glUseProgram");
if(glUseProgram==NULL)return false;
glDeleteProgram= (void(*)(GLuint))load_function("glDeleteProgram");
if(glDeleteProgram==NULL)return false;
/*:72*//*75:*/
#line 1619 "weaver-window.tex"

glIsProgram= (GLboolean(*)(GLuint))load_function("glIsProgram");
if(glIsProgram==NULL)return false;
glGetProgramiv= (void(*)(GLuint,GLenum,GLint*))
load_function("glGetProgramiv");
if(glGetProgramiv==NULL)return false;
glGetProgramInfoLog= (void(*)(GLuint,GLsizei,GLsizei*,GLchar*))
load_function("glGetProgramInfoLog");
if(glGetProgramInfoLog==NULL)return false;
glValidadeProgram= (void(*)(GLuint))load_function("glValidateProgram");
if(glValidadeProgram==NULL)return false;
/*:75*//*79:*/
#line 1683 "weaver-window.tex"

glGetActiveAttrib= (void(*)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*))load_function("glGetActiveAttrib");
if(glGetActiveAttrib==NULL)return false;
glGetAttribLocation= (GLint(*)(GLuint,const GLchar*))
load_function("glGetAttribLocation");
if(glGetAttribLocation==NULL)return false;
glBindAttribLocation= (void(*)(GLuint,GLuint,const GLchar*))
load_function("glBindAttribLocation");
if(glBindAttribLocation==NULL)return false;
/*:79*//*83:*/
#line 1779 "weaver-window.tex"

glGetUniformLocation= (GLint(*)(GLuint,const GLchar*))
load_function("glGetUniformLocation");
if(glGetUniformLocation==NULL)return false;
glGetActiveUniform= (void(*)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*))load_function("glGetActiveUniform");
if(glGetActiveUniform==NULL)return false;
glUniform1f= (void(*)(GLint,GLfloat))load_function("glUniform1f");
if(glUniform1f==NULL)return false;
glUniform2f= (void(*)(GLint,GLfloat,GLfloat))load_function("glUniform2f");
if(glUniform2f==NULL)return false;
glUniform3f= (void(*)(GLint,GLfloat,GLfloat,GLfloat))
load_function("glUniform3f");
if(glUniform3f==NULL)return false;
glUniform4f= (void(*)(GLint,GLfloat,GLfloat,GLfloat,GLfloat))
load_function("glUniform4f");
if(glUniform4f==NULL)return false;
glUniform1i= (void(*)(GLint,GLint))load_function("glUniform1i");
if(glUniform1i==NULL)return false;
glUniform2i= (void(*)(GLint,GLint,GLint))load_function("glUniform2i");
if(glUniform2i==NULL)return false;
glUniform3i= (void(*)(GLint,GLint,GLint,GLint))load_function("glUniform3i");
if(glUniform3i==NULL)return false;
glUniform4i= (void(*)(GLint,GLint,GLint,GLint,GLint))
load_function("glUniform4i");
if(glUniform4i==NULL)return false;
glUniform1fv= (void(*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform1fv");
if(glUniform1fv==NULL)return false;
glUniform2fv= (void(*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform2fv");
if(glUniform2fv==NULL)return false;
glUniform3fv= (void(*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform3fv");
if(glUniform3fv==NULL)return false;
glUniform4fv= (void(*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform4fv");
if(glUniform4fv==NULL)return false;
glUniform1iv= (void(*)(GLint,GLsizei,const GLint*))
load_function("glUniform1iv");
if(glUniform1iv==NULL)return false;
glUniform2iv= (void(*)(GLint,GLsizei,const GLint*))
load_function("glUniform2iv");
if(glUniform2iv==NULL)return false;
glUniform3iv= (void(*)(GLint,GLsizei,const GLint*))
load_function("glUniform3iv");
if(glUniform3iv==NULL)return false;
glUniform4iv= (void(*)(GLint,GLsizei,const GLint*))
load_function("glUniform4iv");
if(glUniform4iv==NULL)return false;
glUniformMatrix2fv= (void(*)(GLint,GLsizei,GLboolean,const GLfloat*))
load_function("glUniformMatrix2fv");
if(glUniformMatrix2fv==NULL)return false;
glUniformMatrix3fv= (void(*)(GLint,GLsizei,GLboolean,const GLfloat*))
load_function("glUniformMatrix3fv");
if(glUniformMatrix3fv==NULL)return false;
glUniformMatrix4fv= (void(*)(GLint,GLsizei,GLboolean,const GLfloat*))
load_function("glUniformMatrix4fv");
if(glUniformMatrix4fv==NULL)return false;
/*:83*//*87:*/
#line 1910 "weaver-window.tex"

glVertexAttrib1f= (void(*)(GLuint,GLfloat))load_function("glVertexAttrib1f");
if(glVertexAttrib1f==NULL)return false;
glVertexAttrib2f= (void(*)(GLuint,GLfloat,GLfloat))
load_function("glVertexAttrib2f");
if(glVertexAttrib2f==NULL)return false;
glVertexAttrib3f= (void(*)(GLuint,GLfloat,GLfloat,GLfloat))
load_function("glVertexAttrib3f");
if(glVertexAttrib3f==NULL)return false;
glVertexAttrib4f= (void(*)(GLuint,GLfloat,GLfloat,GLfloat,GLfloat))
load_function("glVertexAttrib4f");
if(glVertexAttrib4f==NULL)return false;
glVertexAttrib1fv= (void(*)(GLuint,GLfloat*))
load_function("glVertexAttrib1fv");
if(glVertexAttrib1fv==NULL)return false;
glVertexAttrib2fv= (void(*)(GLuint,GLfloat*))
load_function("glVertexAttrib2fv");
if(glVertexAttrib2fv==NULL)return false;
glVertexAttrib3fv= (void(*)(GLuint,GLfloat*))
load_function("glVertexAttrib3fv");
if(glVertexAttrib3fv==NULL)return false;
glVertexAttrib4fv= (void(*)(GLuint,GLfloat*))
load_function("glVertexAttrib4fv");
if(glVertexAttrib4fv==NULL)return false;
glVertexAttribPointer= (void(*)(GLuint,GLint,GLenum,GLboolean,
GLsizei,const void*))
load_function("glVertexAttribPointer");
if(glVertexAttribPointer==NULL)return false;
glEnableVertexAttribArray= (void(*)(GLuint))
load_function("glEnableVertexAttribArray");
if(glEnableVertexAttribArray==NULL)return false;
glDisableVertexAttribArray= (void(*)(GLuint))
load_function("glDisableVertexAttribArray");
if(glDisableVertexAttribArray==NULL)return false;
/*:87*/
#line 936 "weaver-window.tex"

#endif
/*:42*//*43:*/
#line 946 "weaver-window.tex"

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
/*:43*/
#line 1979 "weaver-window.tex"

already_have_window= true;
return true;
}
/*:89*//*92:*/
#line 2044 "weaver-window.tex"

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
/*:92*//*93:*/
#line 2071 "weaver-window.tex"

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
/*:93*//*94:*/
#line 2094 "weaver-window.tex"

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
/*:94*//*95:*/
#line 2118 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
return eglSwapBuffers(egl_display,egl_window);
}
#endif
/*:95*//*96:*/
#line 2135 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
/*:96*//*97:*/
#line 2152 "weaver-window.tex"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
/*:97*/
#line 2173 "weaver-window.tex"

/*:98*/
