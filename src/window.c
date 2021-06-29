/*105:*/
#line 2315 "weaver-window.tex"

#include "window.h"
/*2:*/
#line 153 "weaver-window.tex"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
/*:2*//*7:*/
#line 250 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:7*//*37:*/
#line 856 "weaver-window.tex"

#if defined(_WIN32)
#include <Windows.h> 
#endif
/*:37*//*43:*/
#line 962 "weaver-window.tex"

#if defined(_WIN32)
#include <string.h> 
#endif
/*:43*//*63:*/
#line 1408 "weaver-window.tex"

#define WGL_TYPE_RGBA_ARB                      0x202B
#define WGL_PIXEL_TYPE_ARB                     0x2013
#define WGL_COLOR_BITS_ARB                     0x2014
#define WGL_DEPTH_BITS_ARB                     0x2022
#define WGL_STENCIL_BITS_ARB                   0x2023
#define WGL_ACCELERATION_ARB                   0x2003
#define WGL_DOUBLE_BUFFER_ARB                  0x2011
#define WGL_CONTEXT_FLAGS_ARB                  0x2094
#define WGL_DRAW_TO_WINDOW_ARB                 0x2001
#define WGL_SUPPORT_OPENGL_ARB                 0x2010
#define WGL_FULL_ACCELERATION_ARB              0x2027
#define WGL_CONTEXT_MAJOR_VERSION_ARB          0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB          0x2092
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x0002
/*:63*//*98:*/
#line 2168 "weaver-window.tex"

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
/*:98*/
#line 2317 "weaver-window.tex"

/*56:*/
#line 1243 "weaver-window.tex"

#if defined(_WIN32)
static void*load_function(const char*name){
void*ret= wglGetProcAddress(name);
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
/*:56*/
#line 2318 "weaver-window.tex"

/*58:*/
#line 1289 "weaver-window.tex"

#if defined(_WIN32)
BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,UINT,
int*,UINT*);
HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
/*:58*//*65:*/
#line 1449 "weaver-window.tex"

#if defined(_WIN32)
GLuint(__stdcall*glCreateShader)(GLenum shaderType);
void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
void(__stdcall*glCompileShader)(GLuint);
void(__stdcall*glReleaseShaderCompiler)(void);
void(__stdcall*glDeleteShader)(GLuint);
#endif
/*:65*//*70:*/
#line 1539 "weaver-window.tex"

#if defined(_WIN32)
GLboolean(__stdcall*glIsShader)(GLuint);
void(__stdcall*glGetShaderiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetAttachedShaders)(GLuint,GLsizei,GLsizei*,GLuint*);
void(__stdcall*glGetShaderInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glGetShaderSource)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glGetShaderPrecisionFormat)(GLenum,GLenum,GLint*,GLint*);
void(__stdcall*glGetVertexAttribfv)(GLuint,GLenum,GLfloat*);
void(__stdcall*glGetVertexAttribiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetVertexAttribPointerv)(GLuint,GLenum,void**);
void(__stdcall*glGetUniformfv)(GLuint,GLint,GLfloat*);
void(__stdcall*glGetUniformiv)(GLuint,GLint,GLint*);
#endif
/*:70*//*78:*/
#line 1692 "weaver-window.tex"

#if defined(_WIN32)
GLuint(__stdcall*glCreateProgram)(void);
void(__stdcall*glAttachShader)(GLuint,GLuint);
void(__stdcall*glDetachShader)(GLuint,GLuint);
void(__stdcall*glLinkProgram)(GLuint);
void(__stdcall*glUseProgram)(GLuint);
void(__stdcall*glDeleteProgram)(GLuint);
#endif
/*:78*//*81:*/
#line 1744 "weaver-window.tex"

#if defined(_WIN32)
GLboolean(__stdcall*glIsProgram)(GLuint);
void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glValidadeProgram)(GLuint);
#endif
/*:81*//*85:*/
#line 1809 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
/*:85*//*89:*/
#line 1891 "weaver-window.tex"

#if defined(_WIN32)
GLint(__stdcall*glGetUniformLocation)(GLuint,const GLchar*);
void(__stdcall*glGetActiveUniform)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
void(__stdcall*glUniform1f)(GLint,GLfloat);
void(__stdcall*glUniform2f)(GLint,GLfloat,GLfloat);
void(__stdcall*glUniform3f)(GLint,GLfloat,GLfloat,GLfloat);
void(__stdcall*glUniform4f)(GLint,GLfloat,GLfloat,GLfloat,GLfloat);
void(__stdcall*glUniform1i)(GLint,GLint);
void(__stdcall*glUniform2i)(GLint,GLint,GLint);
void(__stdcall*glUniform3i)(GLint,GLint,GLint,GLint);
void(__stdcall*glUniform4i)(GLint,GLint,GLint,GLint,GLint);
void(__stdcall*glUniform1fv)(GLint,GLsizei,const GLfloat*);
void(__stdcall*glUniform2fv)(GLint,GLsizei,const GLfloat*);
void(__stdcall*glUniform3fv)(GLint,GLsizei,const GLfloat*);
void(__stdcall*glUniform4fv)(GLint,GLsizei,const GLfloat*);
void(__stdcall*glUniform1iv)(GLint,GLsizei,const GLint*);
void(__stdcall*glUniform2iv)(GLint,GLsizei,const GLint*);
void(__stdcall*glUniform3iv)(GLint,GLsizei,const GLint*);
void(__stdcall*glUniform4iv)(GLint,GLsizei,const GLint*);
void(__stdcall*glUniformMatrix2fv)(GLint,GLsizei,GLboolean,const GLfloat*);
void(__stdcall*glUniformMatrix3fv)(GLint,GLsizei,GLboolean,const GLfloat*);
void(__stdcall*glUniformMatrix4fv)(GLint,GLsizei,GLboolean,const GLfloat*);
#endif
/*:89*//*93:*/
#line 2039 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glVertexAttrib1f)(GLuint,GLfloat);
void(__stdcall*glVertexAttrib2f)(GLuint,GLfloat,GLfloat);
void(__stdcall*glVertexAttrib3f)(GLuint,GLfloat,GLfloat,GLfloat);
void(__stdcall*glVertexAttrib4f)(GLuint,GLfloat,GLfloat,GLfloat,GLfloat);
void(__stdcall*glVertexAttrib1fv)(GLuint,GLfloat*);
void(__stdcall*glVertexAttrib2fv)(GLuint,GLfloat*);
void(__stdcall*glVertexAttrib3fv)(GLuint,GLfloat*);
void(__stdcall*glVertexAttrib4fv)(GLuint,GLfloat*);
void(__stdcall*glVertexAttribPointer)(GLuint,GLint,GLenum,GLboolean,
GLsizei,const void*);
void(__stdcall*glEnableVertexAttribArray)(GLuint);
void(__stdcall*glDisableVertexAttribArray)(GLuint);
#endif
/*:93*/
#line 2319 "weaver-window.tex"

/*9:*/
#line 291 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
#endif
/*:9*//*13:*/
#line 400 "weaver-window.tex"

static int screen_resolution_x,screen_resolution_y;
#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static int screen;
static Window window;
#endif
/*:13*//*25:*/
#line 620 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLDisplay*egl_display;
#endif
/*:25*//*27:*/
#line 666 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
EGLConfig egl_config;
#endif
/*:27*//*29:*/
#line 695 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLSurface egl_window;
#endif
/*:29*//*31:*/
#line 732 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLContext egl_context;
#endif
/*:31*//*36:*/
#line 843 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
/*:36*//*39:*/
#line 880 "weaver-window.tex"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
/*:39*//*44:*/
#line 973 "weaver-window.tex"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
/*:44*//*46:*/
#line 1027 "weaver-window.tex"

#if defined(_WIN32)
static HWND window;
#endif
/*:46*//*51:*/
#line 1095 "weaver-window.tex"

#if defined(_WIN32)
static HGLRC wgl_context;
static HDC device_context;
#endif
/*:51*//*97:*/
#line 2138 "weaver-window.tex"

static bool already_have_window= false;
/*:97*/
#line 2320 "weaver-window.tex"

/*8:*/
#line 267 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wget_resolution(int*resolution_x,int*resolution_y){


XInitThreads();

if(display==NULL)
display= XOpenDisplay(NULL);

int screen= DefaultScreen(display);

*resolution_x= DisplayWidth(display,screen);
*resolution_y= DisplayHeight(display,screen);

return true;
}
#endif
/*:8*//*10:*/
#line 306 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wget_resolution(int*resolution_x,int*resolution_y){
*resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
*resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
return true;
}
#endif
/*:10*//*11:*/
#line 328 "weaver-window.tex"

#if defined(_WIN32)
bool _Wget_resolution(int*resolution_x,int*resolution_y){
*resolution_x= GetSystemMetrics(SM_CXSCREEN);
*resolution_y= GetSystemMetrics(SM_CYSCREEN);
return true;
}
#endif
/*:11*//*40:*/
#line 897 "weaver-window.tex"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*41:*/
#line 915 "weaver-window.tex"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:41*/
#line 901 "weaver-window.tex"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
/*:40*//*96:*/
#line 2121 "weaver-window.tex"

bool _Wcreate_window(void){
if(already_have_window==true)
return false;
/*12:*/
#line 368 "weaver-window.tex"

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
/*:12*//*14:*/
#line 420 "weaver-window.tex"

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
/*:14*//*15:*/
#line 446 "weaver-window.tex"

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
/*:15*//*16:*/
#line 472 "weaver-window.tex"

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
/*:16*//*18:*/
#line 518 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:18*//*19:*/
#line 533 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:19*//*21:*/
#line 553 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
/*24:*/
#line 604 "weaver-window.tex"

egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
return false;
}
eglInitialize(egl_display,NULL,NULL);
/*:24*//*26:*/
#line 632 "weaver-window.tex"

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
/*:26*//*28:*/
#line 680 "weaver-window.tex"

egl_window= eglCreateWindowSurface(egl_display,egl_config,window,
NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
return false;
}
/*:28*//*30:*/
#line 709 "weaver-window.tex"

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
/*:30*/
#line 555 "weaver-window.tex"

#endif
/*:21*//*22:*/
#line 569 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:22*/
#line 2125 "weaver-window.tex"

/*33:*/
#line 772 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
screen_resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
screen_resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
#endif
/*:33*//*34:*/
#line 789 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
/*:34*//*35:*/
#line 806 "weaver-window.tex"

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
/*:35*/
#line 2126 "weaver-window.tex"

/*38:*/
#line 867 "weaver-window.tex"

#if defined(_WIN32)
screen_resolution_x= GetSystemMetrics(SM_CXSCREEN);
screen_resolution_y= GetSystemMetrics(SM_CYSCREEN);
#endif
/*:38*//*42:*/
#line 932 "weaver-window.tex"

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
/*:42*//*45:*/
#line 984 "weaver-window.tex"

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
/*:45*//*47:*/
#line 1038 "weaver-window.tex"

#if defined(_WIN32)
/*50:*/
#line 1086 "weaver-window.tex"

device_context= GetDC(window);
/*:50*//*52:*/
#line 1130 "weaver-window.tex"

{
/*53:*/
#line 1145 "weaver-window.tex"

HWND dummy_window;
{
WNDCLASS dummy_window_class;
memset(&dummy_window_class,0,sizeof(WNDCLASS));
dummy_window_class.lpfnWndProc= WindowProc;
dummy_window_class.hInstance= GetModuleHandle(NULL);
dummy_window_class.lpszClassName= "DummyWindow";



RegisterClass(&dummy_window_class);
SetLastError(0);
dummy_window= CreateWindowEx(0,dummy_window_class.lpszClassName,"Dummy",
0,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,
CW_USEDEFAULT,0,0,
dummy_window_class.hInstance,0);
if(dummy_window==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed creating window. SysCode: %d\n",
GetLastError());
#endif
return false;
}
}
/*:53*/
#line 1132 "weaver-window.tex"

/*54:*/
#line 1178 "weaver-window.tex"

HGLRC dummy_context;
HDC dummy_device_context= GetDC(dummy_window);
{
PIXELFORMATDESCRIPTOR pixel_format;
int chosen_pixel_format;
memset(&pixel_format,0,sizeof(WNDCLASS));
pixel_format.nSize= sizeof(PIXELFORMATDESCRIPTOR);
pixel_format.nVersion= 1;
pixel_format.dwFlags= PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|
PFD_DOUBLEBUFFER|PFD_DRAW_TO_BITMAP;
pixel_format.iPixelType= PFD_TYPE_RGBA;
pixel_format.cColorBits= 24;
pixel_format.cDepthBits= 32;
pixel_format.iLayerType= PFD_MAIN_PLANE;
chosen_pixel_format= ChoosePixelFormat(dummy_device_context,&pixel_format);
if(chosen_pixel_format==0){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to choose a pixel format. SysError: %d\n",
GetLastError());
#endif
return false;
}
if(!SetPixelFormat(dummy_device_context,chosen_pixel_format,&pixel_format)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to set a pixel format. SysError: %d\n",
GetLastError());
#endif
return false;
}

/*:54*//*55:*/
#line 1216 "weaver-window.tex"


dummy_context= wglCreateContext(dummy_device_context);
if(dummy_context==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed creating dummy OpenGL context. SysError: %d\n",
GetLastError());
#endif
return false;
}
if(!wglMakeCurrent(dummy_device_context,dummy_context)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed setting dummy OpenGL context. SysError: %d\n",
GetLastError());
#endif
return false;
}
}
/*:55*/
#line 1133 "weaver-window.tex"

/*59:*/
#line 1303 "weaver-window.tex"

wglChoosePixelFormatARB= (BOOL(__stdcall*)(HDC,const int*,const FLOAT*,
UINT,int*,UINT*))
load_function("wglChoosePixelFormatARB");
if(wglChoosePixelFormatARB==NULL)return false;
wglCreateContextAttribsARB= (HGLRC(*)(HDC,HGLRC,const int*))
load_function("wglCreateContextAttribsARB");
if(wglCreateContextAttribsARB==NULL)return false;
/*:59*/
#line 1134 "weaver-window.tex"

/*60:*/
#line 1318 "weaver-window.tex"

wglMakeCurrent(dummy_device_context,0);
wglDeleteContext(dummy_context);
ReleaseDC(dummy_window,dummy_device_context);
DestroyWindow(dummy_window);
/*:60*/
#line 1135 "weaver-window.tex"

}
/*:52*//*61:*/
#line 1330 "weaver-window.tex"

{
PIXELFORMATDESCRIPTOR pixel_format_descriptor;
const int pixel_format_attributes[]= {
WGL_DRAW_TO_WINDOW_ARB,GL_TRUE,
WGL_SUPPORT_OPENGL_ARB,GL_TRUE,
WGL_DOUBLE_BUFFER_ARB,GL_TRUE,
WGL_ACCELERATION_ARB,WGL_FULL_ACCELERATION_ARB,
WGL_PIXEL_TYPE_ARB,WGL_TYPE_RGBA_ARB,
WGL_COLOR_BITS_ARB,32,
WGL_DEPTH_BITS_ARB,24,
WGL_STENCIL_BITS_ARB,8,
0};
int pixel_format_index= 0;
UINT number_of_formats= 0;
if(!wglChoosePixelFormatARB(device_context,pixel_format_attributes,NULL,1,
&pixel_format_index,
(UINT*)(&number_of_formats))){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'wglChoosePixelFormatARB' failed.\n");
#endif
return false;
}
if(number_of_formats==0){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,
"ERROR: no pixel format returned by 'wglChoosePixelFormatARB'.\n");
#endif
return false;
}
DescribePixelFormat(device_context,pixel_format_index,
sizeof(pixel_format_descriptor),&pixel_format_descriptor);
if(!SetPixelFormat(device_context,pixel_format_index,
&pixel_format_descriptor)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'SetPixelFormat' failed.\n");
#endif
return false;
}
}
/*:61*//*62:*/
#line 1379 "weaver-window.tex"

{
const int opengl_attributes[]= {
WGL_CONTEXT_MAJOR_VERSION_ARB,W_WINDOW_OPENGL_MAJOR_VERSION,
WGL_CONTEXT_MINOR_VERSION_ARB,W_WINDOW_OPENGL_MINOR_VERSION,
WGL_CONTEXT_FLAGS_ARB,WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB,
0};
wgl_context= wglCreateContextAttribsARB(device_context,0,opengl_attributes);
if(wgl_context==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'wglCreateContextAttribsARB' failed.\n");
#endif
return false;
}
if(!wglMakeCurrent(device_context,wgl_context)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'wglMakeCurrent' failed.\n");
#endif
return false;
}
}
/*:62*//*66:*/
#line 1466 "weaver-window.tex"

glCreateShader= (GLuint(__stdcall*)(GLenum))load_function("glCreateShader");
if(glCreateShader==NULL)
return false;
glShaderSource= (void(__stdcall*)(GLuint,GLsizei,const GLchar*const*,
const GLint*))
load_function("glShaderSource");
if(glShaderSource==NULL)
return false;
glCompileShader= (void(__stdcall*)(GLuint))load_function("glCompileShader");
if(glCompileShader==NULL)
return false;
glReleaseShaderCompiler= (void(__stdcall*)(void))
load_function("glReleaseShaderCompiler");
if(glReleaseShaderCompiler==NULL)
return false;
glDeleteShader= (void(__stdcall*)(GLuint))load_function("glDeleteShader");
if(glDeleteShader==NULL)
return false;
/*:66*//*71:*/
#line 1560 "weaver-window.tex"

glIsShader= (GLboolean(__stdcall*)(GLuint))load_function("glIsShader");
if(glIsShader==NULL)return false;
glGetShaderiv= (void(__stdcall*)(GLuint,GLenum,GLint*))
load_function("glGetShaderiv");
if(glGetShaderiv==NULL)return false;
glGetAttachedShaders= (void(__stdcall*)(GLuint,GLsizei,GLsizei*,GLuint*))
load_function("glGetAttachedShaders");
if(glGetAttachedShaders==NULL)return false;
glGetShaderInfoLog= (void(__stdcall*)(GLuint,GLsizei,GLsizei*,GLchar*))
load_function("glGetShaderInfoLog");
if(glGetShaderInfoLog==NULL)return false;
glGetShaderSource= (void(__stdcall*)(GLuint,GLsizei,GLsizei*,GLchar*))
load_function("glGetShaderSource");
if(glGetShaderSource==NULL)return false;
glGetShaderPrecisionFormat= (void(__stdcall*)(GLenum,GLenum,GLint*,
GLint*))
load_function("glGetShaderPrecisionFormat");
if(glGetShaderPrecisionFormat==NULL)return false;
glGetVertexAttribfv= (void(__stdcall*)(GLuint,GLenum,GLfloat*))
load_function("glGetVertexAttribfv");
if(glGetVertexAttribfv==NULL)return false;
glGetVertexAttribiv= (void(__stdcall*)(GLuint,GLenum,GLint*))
load_function("glGetVertexAttribiv");
if(glGetVertexAttribiv==NULL)return false;
glGetVertexAttribPointerv= (void(__stdcall*)(GLuint,GLenum,void**))
load_function("glGetVertexAttribPointerv");
if(glGetVertexAttribPointerv==NULL)return false;
glGetUniformfv= (void(__stdcall*)(GLuint,GLint,GLfloat*))
load_function("glGetUniformfv");
if(glGetUniformfv==NULL)return false;
glGetUniformiv= (void(__stdcall*)(GLuint,GLint,GLint*))
load_function("glGetUniformiv");
if(glGetUniformiv==NULL)return false;
/*:71*//*79:*/
#line 1707 "weaver-window.tex"

glCreateProgram= (GLuint(__stdcall*)(void))load_function("glCreateProgram");
if(glCreateProgram==NULL)return false;
glAttachShader= (void(__stdcall*)(GLuint,GLuint))
load_function("glAttachShader");
if(glAttachShader==NULL)return false;
glDetachShader= (void(__stdcall*)(GLuint,GLuint))
load_function("glDetachShader");
if(glDetachShader==NULL)return false;
glLinkProgram= (void(__stdcall*)(GLuint))load_function("glLinkProgram");
if(glLinkProgram==NULL)return false;
glUseProgram= (void(__stdcall*)(GLuint))load_function("glUseProgram");
if(glUseProgram==NULL)return false;
glDeleteProgram= (void(__stdcall*)(GLuint))load_function("glDeleteProgram");
if(glDeleteProgram==NULL)return false;
/*:79*//*82:*/
#line 1757 "weaver-window.tex"

glIsProgram= (GLboolean(__stdcall*)(GLuint))load_function("glIsProgram");
if(glIsProgram==NULL)return false;
glGetProgramiv= (void(__stdcall*)(GLuint,GLenum,GLint*))
load_function("glGetProgramiv");
if(glGetProgramiv==NULL)return false;
glGetProgramInfoLog= (void(__stdcall*)(GLuint,GLsizei,GLsizei*,GLchar*))
load_function("glGetProgramInfoLog");
if(glGetProgramInfoLog==NULL)return false;
glValidadeProgram= (void(__stdcall*)(GLuint))
load_function("glValidateProgram");
if(glValidadeProgram==NULL)return false;
/*:82*//*86:*/
#line 1822 "weaver-window.tex"

glGetActiveAttrib= (void(__stdcall*)(GLuint,GLuint,GLsizei,GLsizei*,
GLint*,GLenum*,GLchar*))
load_function("glGetActiveAttrib");
if(glGetActiveAttrib==NULL)return false;
glGetAttribLocation= (GLint(__stdcall*)(GLuint,const GLchar*))
load_function("glGetAttribLocation");
if(glGetAttribLocation==NULL)return false;
glBindAttribLocation= (void(__stdcall*)(GLuint,GLuint,const GLchar*))
load_function("glBindAttribLocation");
if(glBindAttribLocation==NULL)return false;
/*:86*//*90:*/
#line 1922 "weaver-window.tex"

glGetUniformLocation= (GLint(__stdcall*)(GLuint,const GLchar*))
load_function("glGetUniformLocation");
if(glGetUniformLocation==NULL)return false;
glGetActiveUniform= (void(__stdcall*)(GLuint,GLuint,GLsizei,GLsizei*,
GLint*,GLenum*,GLchar*))
load_function("glGetActiveUniform");
if(glGetActiveUniform==NULL)return false;
glUniform1f= (void(__stdcall*)(GLint,GLfloat))load_function("glUniform1f");
if(glUniform1f==NULL)return false;
glUniform2f= (void(__stdcall*)(GLint,GLfloat,GLfloat))
load_function("glUniform2f");
if(glUniform2f==NULL)return false;
glUniform3f= (void(__stdcall*)(GLint,GLfloat,GLfloat,GLfloat))
load_function("glUniform3f");
if(glUniform3f==NULL)return false;
glUniform4f= (void(__stdcall*)(GLint,GLfloat,GLfloat,GLfloat,GLfloat))
load_function("glUniform4f");
if(glUniform4f==NULL)return false;
glUniform1i= (void(__stdcall*)(GLint,GLint))load_function("glUniform1i");
if(glUniform1i==NULL)return false;
glUniform2i= (void(__stdcall*)(GLint,GLint,GLint))load_function("glUniform2i");
if(glUniform2i==NULL)return false;
glUniform3i= (void(__stdcall*)(GLint,GLint,GLint,GLint))
load_function("glUniform3i");
if(glUniform3i==NULL)return false;
glUniform4i= (void(__stdcall*)(GLint,GLint,GLint,GLint,GLint))
load_function("glUniform4i");
if(glUniform4i==NULL)return false;
glUniform1fv= (void(__stdcall*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform1fv");
if(glUniform1fv==NULL)return false;
glUniform2fv= (void(__stdcall*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform2fv");
if(glUniform2fv==NULL)return false;
glUniform3fv= (void(__stdcall*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform3fv");
if(glUniform3fv==NULL)return false;
glUniform4fv= (void(__stdcall*)(GLint,GLsizei,const GLfloat*))
load_function("glUniform4fv");
if(glUniform4fv==NULL)return false;
glUniform1iv= (void(__stdcall*)(GLint,GLsizei,const GLint*))
load_function("glUniform1iv");
if(glUniform1iv==NULL)return false;
glUniform2iv= (void(__stdcall*)(GLint,GLsizei,const GLint*))
load_function("glUniform2iv");
if(glUniform2iv==NULL)return false;
glUniform3iv= (void(__stdcall*)(GLint,GLsizei,const GLint*))
load_function("glUniform3iv");
if(glUniform3iv==NULL)return false;
glUniform4iv= (void(__stdcall*)(GLint,GLsizei,const GLint*))
load_function("glUniform4iv");
if(glUniform4iv==NULL)return false;
glUniformMatrix2fv= (void(__stdcall*)(GLint,GLsizei,GLboolean,
const GLfloat*))
load_function("glUniformMatrix2fv");
if(glUniformMatrix2fv==NULL)return false;
glUniformMatrix3fv= (void(__stdcall*)(GLint,GLsizei,GLboolean,
const GLfloat*))
load_function("glUniformMatrix3fv");
if(glUniformMatrix3fv==NULL)return false;
glUniformMatrix4fv= (void(__stdcall*)(GLint,GLsizei,GLboolean,
const GLfloat*))
load_function("glUniformMatrix4fv");
if(glUniformMatrix4fv==NULL)return false;
/*:90*//*94:*/
#line 2060 "weaver-window.tex"

glVertexAttrib1f= (void(__stdcall*)(GLuint,GLfloat))
load_function("glVertexAttrib1f");
if(glVertexAttrib1f==NULL)return false;
glVertexAttrib2f= (void(__stdcall*)(GLuint,GLfloat,GLfloat))
load_function("glVertexAttrib2f");
if(glVertexAttrib2f==NULL)return false;
glVertexAttrib3f= (void(__stdcall*)(GLuint,GLfloat,GLfloat,GLfloat))
load_function("glVertexAttrib3f");
if(glVertexAttrib3f==NULL)return false;
glVertexAttrib4f= (void(__stdcall*)(GLuint,GLfloat,GLfloat,GLfloat,
GLfloat))
load_function("glVertexAttrib4f");
if(glVertexAttrib4f==NULL)return false;
glVertexAttrib1fv= (void(__stdcall*)(GLuint,GLfloat*))
load_function("glVertexAttrib1fv");
if(glVertexAttrib1fv==NULL)return false;
glVertexAttrib2fv= (void(__stdcall*)(GLuint,GLfloat*))
load_function("glVertexAttrib2fv");
if(glVertexAttrib2fv==NULL)return false;
glVertexAttrib3fv= (void(__stdcall*)(GLuint,GLfloat*))
load_function("glVertexAttrib3fv");
if(glVertexAttrib3fv==NULL)return false;
glVertexAttrib4fv= (void(__stdcall*)(GLuint,GLfloat*))
load_function("glVertexAttrib4fv");
if(glVertexAttrib4fv==NULL)return false;
glVertexAttribPointer= (void(__stdcall*)(GLuint,GLint,GLenum,GLboolean,
GLsizei,const void*))
load_function("glVertexAttribPointer");
if(glVertexAttribPointer==NULL)return false;
glEnableVertexAttribArray= (void(__stdcall*)(GLuint))
load_function("glEnableVertexAttribArray");
if(glEnableVertexAttribArray==NULL)return false;
glDisableVertexAttribArray= (void(__stdcall*)(GLuint))
load_function("glDisableVertexAttribArray");
if(glDisableVertexAttribArray==NULL)return false;
/*:94*/
#line 1040 "weaver-window.tex"

#endif
/*:47*//*48:*/
#line 1050 "weaver-window.tex"

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
/*:48*/
#line 2127 "weaver-window.tex"

already_have_window= true;
return true;
}
/*:96*//*99:*/
#line 2192 "weaver-window.tex"

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
/*:99*//*100:*/
#line 2219 "weaver-window.tex"

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
/*:100*//*101:*/
#line 2242 "weaver-window.tex"

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
/*:101*//*102:*/
#line 2266 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
return eglSwapBuffers(egl_display,egl_window);
}
#endif
/*:102*//*103:*/
#line 2283 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
/*:103*//*104:*/
#line 2300 "weaver-window.tex"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
/*:104*/
#line 2321 "weaver-window.tex"

/*:105*/
