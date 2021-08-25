/*196:*/
#line 4456 "weaver-window.tex"

#include "window.h"
/*2:*/
#line 150 "weaver-window.tex"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
/*:2*//*13:*/
#line 320 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#include <X11/Xlib.h> 
#endif
/*:13*//*39:*/
#line 893 "weaver-window.tex"

#if defined(_WIN32)
#include <string.h> 
#endif
/*:39*//*70:*/
#line 1546 "weaver-window.tex"

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
/*:70*//*129:*/
#line 2837 "weaver-window.tex"

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
/*:129*/
#line 4458 "weaver-window.tex"

/*63:*/
#line 1381 "weaver-window.tex"

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
/*:63*/
#line 4459 "weaver-window.tex"

/*65:*/
#line 1427 "weaver-window.tex"

#if defined(_WIN32)
BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,UINT,
int*,UINT*);
HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
/*:65*//*72:*/
#line 1587 "weaver-window.tex"

#if defined(_WIN32)
GLuint(__stdcall*glCreateShader)(GLenum shaderType);
void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
void(__stdcall*glCompileShader)(GLuint);
void(__stdcall*glReleaseShaderCompiler)(void);
void(__stdcall*glDeleteShader)(GLuint);
#endif
/*:72*//*77:*/
#line 1677 "weaver-window.tex"

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
/*:77*//*85:*/
#line 1830 "weaver-window.tex"

#if defined(_WIN32)
GLuint(__stdcall*glCreateProgram)(void);
void(__stdcall*glAttachShader)(GLuint,GLuint);
void(__stdcall*glDetachShader)(GLuint,GLuint);
void(__stdcall*glLinkProgram)(GLuint);
void(__stdcall*glUseProgram)(GLuint);
void(__stdcall*glDeleteProgram)(GLuint);
#endif
/*:85*//*88:*/
#line 1882 "weaver-window.tex"

#if defined(_WIN32)
GLboolean(__stdcall*glIsProgram)(GLuint);
void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glValidadeProgram)(GLuint);
#endif
/*:88*//*92:*/
#line 1947 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
/*:92*//*96:*/
#line 2029 "weaver-window.tex"

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
/*:96*//*100:*/
#line 2177 "weaver-window.tex"

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
/*:100*//*104:*/
#line 2270 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glGenBuffers)(GLsizei,GLuint*);
void(__stdcall*glDeleteBuffers)(GLsizei,const GLuint*);
void(__stdcall*glBindBuffer)(GLenum,GLuint);
void(__stdcall*glBufferData)(GLenum,GLsizeiptr,const void*,GLenum);
void(__stdcall*glBufferSubData)(GLenum,GLintptr,GLsizeiptr,const void*);
void(__stdcall*glIsBuffer)(GLuint);
void(__stdcall*glGetBufferParameteriv)(GLenum,GLenum,GLint*);
#endif
/*:104*//*111:*/
#line 2376 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glDepthRangef)(GLclampf,GLclampf);
#endif
/*:111*//*115:*/
#line 2424 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glActiveTexture)(GLenum);
void(__stdcall*glCompressedTexImage2D)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*);
void(__stdcall*glCompressedTexSubImage2D)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,
void*);
void(__stdcall*glGenerateMipmap)(GLenum);
#endif
/*:115*//*119:*/
#line 2543 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glSampleCoverage)(GLclampf,bool);
void(__stdcall*glStencilFuncSeparate)(GLenum,GLenum,int,unsigned int);
void(__stdcall*glStencilOpSeparate)(GLenum,GLenum,GLenum,GLenum);
void(__stdcall*glBlendEquation)(GLenum);
void(__stdcall*glBlendEquationSeparate)(GLenum,GLenum);
void(__stdcall*glBlendFuncSeparate)(GLenum,GLenum);
void(__stdcall*glBlendColor)(GLclampf,GLclampf,GLclampf,GLclampf);
#endif
/*:119*//*123:*/
#line 2645 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glStencilMaskSeparate)(GLenum,unsigned int);
void(__stdcall*glClearDepthf)(GLclampf);
#endif
/*:123*//*126:*/
#line 2695 "weaver-window.tex"

#if defined(_WIN32)
void(__stdcall*glBindFramebuffer)(GLenum,unsigned int);
void(__stdcall*glDeleteFramebuffers)(GLsizei,unsigned int*);
void(__stdcall*glGenFramebuffers)(GLsizei,unsigned int*);
void(__stdcall*glBindRenderbuffer)(GLenum,unsigned int);
void(__stdcall*glDeleteRenderbuffers)(GLsizei,const unsigned int*);
void(__stdcall*glGenRenderbuffers)(GLsizei,unsigned int*);
void(__stdcall*glRenderbufferStorage)(GLenum,GLenum,GLsizei,GLsizei);
void(__stdcall*glFramebufferRenderbuffer)(GLenum,GLenum,GLenum,
unsigned int);
void(__stdcall*glFramebufferTexture2D)(GLenum,GLenum,GLenum,
unsigned int,int);
void(__stdcall*glCheckFramebufferStatus)(GLenum);
boolean(__stdcall*glIsFramebuffer)(unsigned int);
void(__stdcall*glGetFramebufferAttachmentParameteriv)(GLenum,GLenum,
GLenum,int*);
boolean(__stdcall*glIsRenderbuffer)(unsigned int);
void(__stdcall*glGetRenderbufferParameteriv)(GLenum,GLenum,int*);
#endif
/*:126*//*144:*/
#line 3223 "weaver-window.tex"

struct __Wkeyboard _Wkeyboard;
/*:144*//*146:*/
#line 3271 "weaver-window.tex"

struct __Wmouse _Wmouse;
/*:146*//*158:*/
#line 3545 "weaver-window.tex"

int W_BACKSPACE= W_KEYBOARD_SIZE,W_TAB= W_KEYBOARD_SIZE,
W_ENTER= W_KEYBOARD_SIZE,W_UP= W_KEYBOARD_SIZE,W_DOWN= W_KEYBOARD_SIZE,
W_LEFT= W_KEYBOARD_SIZE,W_RIGHT= W_KEYBOARD_SIZE,W_0= W_KEYBOARD_SIZE,
W_1= W_KEYBOARD_SIZE,W_2= W_KEYBOARD_SIZE,W_3= W_KEYBOARD_SIZE,
W_4= W_KEYBOARD_SIZE,W_5= W_KEYBOARD_SIZE,W_6= W_KEYBOARD_SIZE,
W_7= W_KEYBOARD_SIZE,W_8= W_KEYBOARD_SIZE,W_9= W_KEYBOARD_SIZE,
W_MINUS= W_KEYBOARD_SIZE,W_PLUS= W_KEYBOARD_SIZE,W_F1= W_KEYBOARD_SIZE,
W_F2= W_KEYBOARD_SIZE,W_F3= W_KEYBOARD_SIZE,W_F4= W_KEYBOARD_SIZE,
W_F5= W_KEYBOARD_SIZE,W_F6= W_KEYBOARD_SIZE,W_F7= W_KEYBOARD_SIZE,
W_F8= W_KEYBOARD_SIZE,W_F9= W_KEYBOARD_SIZE,W_F10= W_KEYBOARD_SIZE,
W_F11= W_KEYBOARD_SIZE,W_F12= W_KEYBOARD_SIZE,
W_LEFT_SHIFT= W_KEYBOARD_SIZE,W_RIGHT_SHIFT= W_KEYBOARD_SIZE,
W_LEFT_ALT= W_KEYBOARD_SIZE,W_RIGHT_ALT= W_KEYBOARD_SIZE,
W_LEFT_CTRL= W_KEYBOARD_SIZE,W_RIGHT_CTRL= W_KEYBOARD_SIZE,
W_SPACE= W_KEYBOARD_SIZE,W_A= W_KEYBOARD_SIZE,W_B= W_KEYBOARD_SIZE,
W_C= W_KEYBOARD_SIZE,W_D= W_KEYBOARD_SIZE,W_E= W_KEYBOARD_SIZE,
W_F= W_KEYBOARD_SIZE,W_G= W_KEYBOARD_SIZE,W_H= W_KEYBOARD_SIZE,
W_I= W_KEYBOARD_SIZE,W_J= W_KEYBOARD_SIZE,W_K= W_KEYBOARD_SIZE,
W_L= W_KEYBOARD_SIZE,W_M= W_KEYBOARD_SIZE,W_N= W_KEYBOARD_SIZE,
W_O= W_KEYBOARD_SIZE,W_P= W_KEYBOARD_SIZE,W_Q= W_KEYBOARD_SIZE,
W_R= W_KEYBOARD_SIZE,W_S= W_KEYBOARD_SIZE,W_T= W_KEYBOARD_SIZE,
W_U= W_KEYBOARD_SIZE,W_V= W_KEYBOARD_SIZE,W_W= W_KEYBOARD_SIZE,
X_X= W_KEYBOARD_SIZE,W_Y= W_KEYBOARD_SIZE,W_Z= W_KEYBOARD_SIZE,
W_INSERT= W_KEYBOARD_SIZE,W_HOME= W_KEYBOARD_SIZE,
W_PAGE_UP= W_KEYBOARD_SIZE,W_DELETE= W_KEYBOARD_SIZE,
W_END= W_KEYBOARD_SIZE,W_PAGE_DOWN= W_KEYBOARD_SIZE,
W_ESC= W_KEYBOARD_SIZE,W_ANY= 0;
/*:158*/
#line 4460 "weaver-window.tex"

/*12:*/
#line 293 "weaver-window.tex"

static int window_size_y= 0;
/*:12*//*15:*/
#line 370 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Display*display= NULL;
#endif
/*:15*//*19:*/
#line 481 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static Window window;
#endif
/*:19*//*33:*/
#line 786 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
/*:33*//*35:*/
#line 811 "weaver-window.tex"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
/*:35*//*40:*/
#line 904 "weaver-window.tex"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
/*:40*//*42:*/
#line 958 "weaver-window.tex"

#if defined(_WIN32)
static HWND window;
#endif
/*:42*//*46:*/
#line 1021 "weaver-window.tex"

static bool already_have_window= false;
/*:46*//*49:*/
#line 1072 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLDisplay*egl_display;
#endif
/*:49*//*51:*/
#line 1118 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
EGLConfig egl_config;
#endif
/*:51*//*53:*/
#line 1147 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLSurface egl_window;
#endif
/*:53*//*55:*/
#line 1184 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
static EGLContext egl_context;
#endif
/*:55*//*58:*/
#line 1233 "weaver-window.tex"

#if defined(_WIN32)
static HGLRC wgl_context;
static HDC device_context;
#endif
/*:58*//*151:*/
#line 3369 "weaver-window.tex"

static struct{
unsigned key;
long time;
}pressed_keys[32];
static unsigned released_keys[32];
/*:151*//*171:*/
#line 3937 "weaver-window.tex"

static struct{
unsigned button;
long time;
}pressed_buttons[4];
static unsigned released_buttons[4];
/*:171*//*172:*/
#line 3952 "weaver-window.tex"

static int last_mouse_dx= 0,last_mouse_dy= 0;
/*:172*//*173:*/
#line 3974 "weaver-window.tex"

static int mouse_initialization= 3;
/*:173*/
#line 4461 "weaver-window.tex"

/*14:*/
#line 337 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wget_screen_resolution(int*resolution_x,int*resolution_y){
bool keep_alive= true;


XInitThreads();

if(display==NULL){
display= XOpenDisplay(NULL);
keep_alive= false;
}

int screen= DefaultScreen(display);

*resolution_x= DisplayWidth(display,screen);
*resolution_y= DisplayHeight(display,screen);


if(!keep_alive){
XCloseDisplay(display);
display= NULL;
}

return true;
}
#endif
/*:14*//*16:*/
#line 385 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wget_screen_resolution(int*resolution_x,int*resolution_y){
*resolution_x= EM_ASM_INT({
return window.screen.width*window.devicePixelRatio;
});
*resolution_y= EM_ASM_INT({
return window.screen.height*window.devicePixelRatio;
});
return true;
}
#endif
/*:16*//*17:*/
#line 407 "weaver-window.tex"

#if defined(_WIN32)
bool _Wget_screen_resolution(int*resolution_x,int*resolution_y){
*resolution_x= GetSystemMetrics(SM_CXSCREEN);
*resolution_y= GetSystemMetrics(SM_CYSCREEN);
return true;
}
#endif
/*:17*//*36:*/
#line 828 "weaver-window.tex"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*37:*/
#line 846 "weaver-window.tex"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:37*/
#line 832 "weaver-window.tex"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
/*:36*//*45:*/
#line 1003 "weaver-window.tex"

bool _Wcreate_window(void){
if(already_have_window==true)
return false;
/*18:*/
#line 448 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
int screen_resolution_x,screen_resolution_y;

XInitThreads();

display= XOpenDisplay(NULL);
if(display==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to connect to X11 server.\n");
#endif
return false;
}

_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);

window= XCreateSimpleWindow(display,
DefaultRootWindow(display),
0,0,
screen_resolution_x,
screen_resolution_y,
0,0,
0);

window_size_y= screen_resolution_y;
#endif
/*:18*//*20:*/
#line 499 "weaver-window.tex"

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
/*:20*//*21:*/
#line 525 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
#if defined(W_WINDOW_NO_FULLSCREEN)
{
int window_size_x;
#if W_WINDOW_SIZE_X >  0
window_size_x= W_WINDOW_SIZE_X;
#else
window_size_x= screen_resolution_x;
#endif
#if W_WINDOW_SIZE_Y >  0
window_size_y= W_WINDOW_SIZE_Y;
#else
window_size_y= screen_resolution_y;
#endif
XResizeWindow(display,window,window_size_x,window_size_y);
}
#endif
#endif
/*:21*//*22:*/
#line 551 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
{
XSizeHints hints;
hints.flags= PMinSize|PMaxSize;
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_SIZE_X >  0
hints.min_width= hints.max_width= W_WINDOW_SIZE_X;
#else
hints.min_width= hints.max_width= screen_resolution_x;
#endif
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_SIZE_Y >  0
hints.min_height= hints.max_height= W_WINDOW_SIZE_Y;
#else
hints.min_height= hints.max_height= screen_resolution_y;
#endif
XSetWMNormalHints(display,window,&hints);
}
#endif
/*:22*//*24:*/
#line 597 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:24*//*25:*/
#line 612 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:25*//*27:*/
#line 632 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
/*48:*/
#line 1056 "weaver-window.tex"

egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
return false;
}
eglInitialize(egl_display,NULL,NULL);
/*:48*//*50:*/
#line 1084 "weaver-window.tex"

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
/*:50*//*52:*/
#line 1132 "weaver-window.tex"

egl_window= eglCreateWindowSurface(egl_display,egl_config,window,
NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
return false;
}
/*:52*//*54:*/
#line 1161 "weaver-window.tex"

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
/*:54*/
#line 634 "weaver-window.tex"

#endif
/*:27*//*28:*/
#line 648 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
#endif
/*:28*/
#line 1007 "weaver-window.tex"

/*30:*/
#line 693 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
/*:30*//*31:*/
#line 706 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
/*:31*//*32:*/
#line 723 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
{
int window_size_x= screen_resolution_x;
int fullscreen_flag= SDL_WINDOW_FULLSCREEN;
double pixel_ratio= EM_ASM_DOUBLE({
return window.devicePixelRatio;
});
window_size_y= screen_resolution_y;
#if defined(W_WINDOW_NO_FULLSCREEN)
fullscreen_flag= 0;
#if defined(W_WINDOW_SIZE_X) && W_Window_Size_X >  0
window_size_x= W_Window_Size_X;
#endif
#if defined(W_WINDOW_SIZE_Y) && W_Window_Size_Y >  0
window_size_y= W_Window_Size_Y;
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
window= SDL_SetVideoMode(window_size_x/pixel_ratio,
window_size_y/pixel_ratio,0,SDL_OPENGL);
if(fullscreen_flag){
EM_ASM(
var el= document.getElementById("canvas");
el.style.position= "absolute";
el.style.top= "0px";
el.style.left= "0px";
el.style.width= window.screen.width+"px";
el.style.height= window.screen.height+"px";
el.width= (window.screen.width*window.devicePixelRatio);
el.height= (window.screen.height*window.devicePixelRatio);
el.requestFullscreen();
);
}
if(window==NULL)
return false;
glViewport(0,0,window_size_x,window_size_y);
}
#endif
/*:32*/
#line 1008 "weaver-window.tex"

/*34:*/
#line 798 "weaver-window.tex"

#if defined(_WIN32)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
/*:34*//*38:*/
#line 863 "weaver-window.tex"

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
/*:38*//*41:*/
#line 915 "weaver-window.tex"

#if defined(_WIN32)
{
RECT size;
int window_size_x= screen_resolution_x;
window_size_y= screen_resolution_y;
SystemParametersInfoA(SPI_GETWORKAREA,0,&size,0);
DWORD fullscreen_flag= WS_POPUP;
#if defined(W_WINDOW_NO_FULLSCREEN)
fullscreen_flag= WS_OVERLAPPED;
window_size_x= size.left-size.right;
window_size_y= size.bottom-size.top;
#if defined(W_WINDOW_SIZE_X) && W_WINDOW_SIZE_X >  0
window_size_x= W_WINDOW_SIZE_X;
#endif
#if defined(W_WINDOW_SIZE_Y) && W_WINDOW_SIZE_Y >  0
window_size_y= W_WINDOW_SIZE_Y;
#endif
#endif
window= CreateWindowEx(0,class_name,
W_WINDOW_NAME,
fullscreen_flag|WS_VISIBLE,
size.left,size.top,window_size_x,
window_size_y,
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
/*:41*//*43:*/
#line 969 "weaver-window.tex"

#if defined(_WIN32)
/*57:*/
#line 1224 "weaver-window.tex"

device_context= GetDC(window);
/*:57*//*59:*/
#line 1268 "weaver-window.tex"

{
/*60:*/
#line 1283 "weaver-window.tex"

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
/*:60*/
#line 1270 "weaver-window.tex"

/*61:*/
#line 1316 "weaver-window.tex"

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

/*:61*//*62:*/
#line 1354 "weaver-window.tex"


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
/*:62*/
#line 1271 "weaver-window.tex"

/*66:*/
#line 1441 "weaver-window.tex"

wglChoosePixelFormatARB= (BOOL(__stdcall*)(HDC,const int*,const FLOAT*,
UINT,int*,UINT*))
load_function("wglChoosePixelFormatARB");
if(wglChoosePixelFormatARB==NULL)return false;
wglCreateContextAttribsARB= (HGLRC(*)(HDC,HGLRC,const int*))
load_function("wglCreateContextAttribsARB");
if(wglCreateContextAttribsARB==NULL)return false;
/*:66*/
#line 1272 "weaver-window.tex"

/*67:*/
#line 1456 "weaver-window.tex"

wglMakeCurrent(dummy_device_context,0);
wglDeleteContext(dummy_context);
ReleaseDC(dummy_window,dummy_device_context);
DestroyWindow(dummy_window);
/*:67*/
#line 1273 "weaver-window.tex"

}
/*:59*//*68:*/
#line 1468 "weaver-window.tex"

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
/*:68*//*69:*/
#line 1517 "weaver-window.tex"

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
/*:69*//*73:*/
#line 1604 "weaver-window.tex"

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
/*:73*//*78:*/
#line 1698 "weaver-window.tex"

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
/*:78*//*86:*/
#line 1845 "weaver-window.tex"

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
/*:86*//*89:*/
#line 1895 "weaver-window.tex"

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
/*:89*//*93:*/
#line 1960 "weaver-window.tex"

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
/*:93*//*97:*/
#line 2060 "weaver-window.tex"

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
/*:97*//*101:*/
#line 2198 "weaver-window.tex"

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
/*:101*//*105:*/
#line 2286 "weaver-window.tex"

glGenBuffers= (void(__stdcall*)(GLsizei,GLuint*))
load_function("glGenBuffers");
if(glGenBuffers==NULL)return false;
glDeleteBuffers= (void(__stdcall*)(GLsizei,const GLuint*))
load_function("glDeleteBuffers");
if(glDeleteBuffers==NULL)return false;
glBindBuffer= (void(__stdcall*)(GLenum,GLuint))load_function("glBindBuffer");
if(glBindBuffer==NULL)return false;
glBufferData= (void(__stdcall*)(GLenum,GLsizeiptr,const void*,GLenum))
load_function("glBufferData");
if(glBufferData==NULL)return false;
glBufferSubData= (void(__stdcall*)(GLenum,GLintptr,GLsizeiptr,const void*))
load_function("glBufferSubData");
if(glBufferSubData==NULL)return false;
glIsBuffer= (void(__stdcall*)(GLuint))load_function("glIsBuffer");
if(glIsBuffer==NULL)return false;
glGetBufferParameteriv= (void(__stdcall*)(GLenum,GLenum,GLint*))
load_function("glGetBufferParameteriv");
if(glGetBufferParameteriv==NULL)return false;
/*:105*//*112:*/
#line 2386 "weaver-window.tex"

glDepthRangef= (void(__stdcall*)(GLclampf,GLclampf))
load_function("glDepthRangef");
if(glDepthRangef==NULL)return false;
/*:112*//*116:*/
#line 2440 "weaver-window.tex"

glActiveTexture= (void(__stdcall*)(GLenum))load_function("glActiveTexture");
if(glActiveTexture==NULL)return false;
glCompressedTexImage2D= (void(__stdcall*)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*))
load_function("glCompressedTexImage2D");
if(glCompressedTexImage2D==NULL)return false;
glCompressedTexSubImage2D= (void(__stdcall*)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,void*))
load_function("glCompressedTexSubImage2D");
if(glCompressedTexSubImage2D==NULL)return false;
glGenerateMipmap= (void(__stdcall*)(GLenum))load_function("glGenerateMipmap");
if(glGenerateMipmap==NULL)return false;
/*:116*//*120:*/
#line 2559 "weaver-window.tex"

glSampleCoverage= (void(__stdcall*)(GLclampf,bool))
load_function("glSampleCoverage");
if(glSampleCoverage==NULL)return false;
glStencilFuncSeparate= (void(__stdcall*)(GLenum,GLenum,int,unsigned int))
load_function("glStencilFuncSeparate");
if(glStencilFuncSeparate==NULL)return false;
glStencilOpSeparate= (void(__stdcall*)(GLenum,GLenum,GLenum,GLenum))
load_function("glStencilOpSeparate");
if(glStencilOpSeparate==NULL)return false;
glBlendEquation= (void(__stdcall*)(GLenum))load_function("glBlendEquation");
if(glBlendEquation==NULL)return false;
glBlendEquationSeparate= (void(__stdcall*)(GLenum,GLenum))
load_function("glBlendEquationSeparate");
if(glBlendEquationSeparate==NULL)return false;
glBlendFuncSeparate= (void(__stdcall*)(GLenum,GLenum))
load_function("glBlendFuncSeparate");
if(glBlendFuncSeparate==NULL)return false;
glBlendColor= (void(__stdcall*)(GLclampf,GLclampf,GLclampf,GLclampf))
load_function("glBlendColor");
if(glBlendColor==NULL)return false;
/*:120*//*124:*/
#line 2656 "weaver-window.tex"

glStencilMaskSeparate= (void(__stdcall*)(GLenum,unsigned int))
load_function("glStencilMaskSeparate");
if(glStencilMaskSeparate==NULL)return false;
glClearDepthf= (void(__stdcall*)(GLclampf))load_function("glClearDepthf");
if(glClearDepthf==NULL)return false;
/*:124*//*127:*/
#line 2721 "weaver-window.tex"

glBindFramebuffer= (void(__stdcall*)(GLenum,unsigned int))
load_function("glBindFramebuffer");
if(glBindFramebuffer==NULL)return false;
glDeleteFramebuffers= (void(__stdcall*)(GLsizei,unsigned int*))
load_function("glDeleteFramebuffers");
if(glDeleteFramebuffers==NULL)return false;
glGenFramebuffers= (void(__stdcall*)(GLsizei,unsigned int*))
load_function("glGenFramebuffers");
if(glGenFramebuffers==NULL)return false;
glBindRenderbuffer= (void(__stdcall*)(GLenum,unsigned int))
load_function("glBindRenderbuffer");
if(glBindRenderbuffer==NULL)return false;
glDeleteRenderbuffers= (void(__stdcall*)(GLsizei,const unsigned int*))
load_function("glDeleteRenderbuffers");
if(glDeleteRenderbuffers==NULL)return false;
glGenRenderbuffers= (void(__stdcall*)(GLsizei,unsigned int*))
load_function("glGenRenderbuffers");
if(glGenRenderbuffers==NULL)return false;
glRenderbufferStorage= (void(__stdcall*)(GLenum,GLenum,GLsizei,GLsizei))
load_function("glRenderbufferStorage");
if(glRenderbufferStorage==NULL)return false;
glFramebufferRenderbuffer= (void(__stdcall*)(GLenum,GLenum,GLenum,
unsigned int))
load_function("glFramebufferRenderbuffer");
if(glFramebufferRenderbuffer==NULL)return false;
glFramebufferTexture2D= (void(__stdcall*)(GLenum,GLenum,GLenum,
unsigned int,int))
load_function("glFramebufferTexture2D");
if(glFramebufferTexture2D==NULL)return false;
glCheckFramebufferStatus= (void(__stdcall*)(GLenum))
load_function("glCheckFramebufferStatus");
if(glCheckFramebufferStatus==NULL)return false;
glIsFramebuffer= (boolean(__stdcall*)(unsigned int))
load_function("glIsFramebuffer");
if(glIsFramebuffer==NULL)return false;
glGetFramebufferAttachmentParameteriv= (void(__stdcall*)(GLenum,GLenum,
GLenum,int*))
load_function("glGetFramebufferAttachmentParameteriv");
if(glGetFramebufferAttachmentParameteriv==NULL)return false;
glIsRenderbuffer= (boolean(__stdcall*)(unsigned int))
load_function("glIsRenderbuffer");
if(glIsRenderbuffer==NULL)return false;
glGetRenderbufferParameteriv= (void(__stdcall*)(GLenum,GLenum,int*))
load_function("glGetRenderbufferParameteriv");
if(glGetRenderbufferParameteriv==NULL)return false;
/*:127*/
#line 971 "weaver-window.tex"

#endif
/*:43*//*44:*/
#line 981 "weaver-window.tex"

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
/*:44*/
#line 1009 "weaver-window.tex"

_Wflush_window_input();
already_have_window= true;
return true;
}
/*:45*//*130:*/
#line 2867 "weaver-window.tex"

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
display= NULL;
already_have_window= false;
return true;
}
#endif
/*:130*//*131:*/
#line 2895 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wdestroy_window(void){
if(already_have_window==false)
return false;
SDL_FreeSurface(window);
EM_ASM(
var el= document.getElementById("canvas");
el.style.display= "none";
document.exitFullscreen();
);
already_have_window= false;
return true;
}
#endif
/*:131*//*132:*/
#line 2919 "weaver-window.tex"

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
/*:132*//*133:*/
#line 2951 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
return eglSwapBuffers(egl_display,egl_window);
}
#endif
/*:133*//*134:*/
#line 2977 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
/*:134*//*135:*/
#line 2994 "weaver-window.tex"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
/*:135*//*136:*/
#line 3017 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wget_window_size(int*width,int*height){
Window root_window;
int x,y;
unsigned int border,depth;
if(!already_have_window||display==NULL){
*width= 0;
*height= 0;
return false;
}
XGetGeometry(display,window,&root_window,&x,&y,
(unsigned int*)width,(unsigned int*)height,&border,&depth);
window_size_y= *height;
return true;
}
#endif
/*:136*//*137:*/
#line 3046 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wget_window_size(int*width,int*height){
if(!already_have_window){
*width= 0;
*height= 0;
return false;
}
*width= EM_ASM_INT({
return document.getElementById("canvas").clientWidth*
window.devicePixelRatio;
});
*height= EM_ASM_INT({
return document.getElementById("canvas").clientHeight*
window.devicePixelRatio;
});
window_size_y= *height;
if(*width> 0&&*height> 0)
return true;
else{
*width= 0;
*height= 0;
return false;
}
}
#endif
/*:137*//*138:*/
#line 3082 "weaver-window.tex"

#if defined(_WIN32)
bool _Wget_window_size(int*width,int*height){
BOOL ret;
RECT rectangle;
ret= GetWindowRect(window,&rectangle);
if(ret){
*width= rectangle.right-rectangle.left;
*height= rectangle.bottom-rectangle.top;
window_size_y= *height;
return true;
}
else{
*width= 0;
*height= 0;
return false;
}
}
#endif
/*:138*//*139:*/
#line 3119 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
bool _Wis_fullscreen(void){
XWindowAttributes attributes;
if(!already_have_window||display==NULL)
return false;
XGetWindowAttributes(display,window,&attributes);
return(attributes.override_redirect==true);
}
#endif
/*:139*//*140:*/
#line 3140 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
bool _Wis_fullscreen(void){
int full= EM_ASM_INT({
if(document.fullscreenElement=== null){
return 0;
}else{
return 1;
}
});
return full;
}
#endif
/*:140*//*141:*/
#line 3163 "weaver-window.tex"

#if defined(_WIN32)
bool _Wis_fullscreen(void){
DWORD window_style= GetWindowLongA(window,GWL_STYLE);
return(window_style&WS_POPUP);
}
#endif
/*:141*//*142:*/
#line 3181 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
void _Wtoggle_fullscreen(void){
XSetWindowAttributes attributes;
if(!_Wis_fullscreen())
attributes.override_redirect= true;
else
attributes.override_redirect= false;
XChangeWindowAttributes(display,window,CWOverrideRedirect,
&attributes);
}
#endif
/*:142*//*147:*/
#line 3292 "weaver-window.tex"

void _Wget_window_input(unsigned long current_time){
if(already_have_window==false)
return;
/*170:*/
#line 3915 "weaver-window.tex"

{
int i;
for(i= 0;i<32;i++){
if(released_keys[i]==0)
break;
_Wkeyboard.key[released_keys[i]]= 0;
released_keys[i]= 0;
}
}
/*:170*//*193:*/
#line 4386 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(released_buttons[i]==0)
break;
_Wmouse.button[released_buttons[i]]= 0;
released_buttons[i]= 0;
}
}
/*:193*/
#line 3296 "weaver-window.tex"

/*148:*/
#line 3309 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
XEvent event;
while(XPending(display)){
XNextEvent(display,&event);
/*154:*/
#line 3425 "weaver-window.tex"

if(event.type==KeyPress){
unsigned key= event.xkey.keycode;
/*167:*/
#line 3817 "weaver-window.tex"

{
int i;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key)
break;
if(pressed_keys[i].key==0){
pressed_keys[i].key= key;
pressed_keys[i].time= current_time;

_Wkeyboard.key[key]= 1;
break;
}
}
if(i==32)continue;
}
/*:167*/
#line 3428 "weaver-window.tex"

}
/*:154*//*155:*/
#line 3438 "weaver-window.tex"

if(event.type==KeyRelease){
unsigned key= event.xkey.keycode;
/*168:*/
#line 3845 "weaver-window.tex"

{
int i;
long stored_time= -1;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key){
int j;
stored_time= pressed_keys[i].time;
for(j= i;j<31;j++){
pressed_keys[j].key= pressed_keys[j+1].key;
pressed_keys[j].time= pressed_keys[j+1].time;
if(pressed_keys[j].key==0)
break;
}
pressed_keys[31].key= 0;
break;
}
}
for(i= 0;i<32;i++){
if(released_keys[i]==0)
released_keys[i]= key;
}
if(i==32)
_Wkeyboard.key[key]= 0;
else{

_Wkeyboard.key[key]= -(long)(current_time-stored_time);
if(_Wkeyboard.key[key]==0)
_Wkeyboard.key[key]= -1;
}
}
/*:168*/
#line 3441 "weaver-window.tex"

}
/*:155*//*176:*/
#line 4030 "weaver-window.tex"

if(event.type==ButtonPress){
unsigned button= event.xbutton.button;
/*190:*/
#line 4300 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

_Wmouse.button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:190*/
#line 4033 "weaver-window.tex"

}
/*:176*//*177:*/
#line 4044 "weaver-window.tex"

if(event.type==ButtonRelease){
unsigned button= event.xbutton.button;
/*191:*/
#line 4325 "weaver-window.tex"

{
int i;
long stored_time= -1;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button){
int j;
stored_time= pressed_buttons[i].time;
for(j= i;j<3;j++){
pressed_buttons[j].button= pressed_buttons[j+1].button;
pressed_buttons[j].time= pressed_buttons[j+1].time;
if(pressed_buttons[j].button==0)
break;
}
pressed_buttons[3].button= 0;
break;
}
}
for(i= 0;i<4;i++){
if(released_buttons[i]==0)
released_buttons[i]= button;
}
if(i==4)
_Wmouse.button[button]= 0;
else{

_Wmouse.button[button]= -(long)(current_time-stored_time);
if(_Wmouse.button[button]==0)
_Wmouse.button[button]= -1;
}
}
/*:191*/
#line 4047 "weaver-window.tex"

}
/*:177*//*178:*/
#line 4056 "weaver-window.tex"

if(event.type==MotionNotify){
int x,y;
x= event.xmotion.x;
y= (window_size_y-1)-event.xmotion.y;
/*194:*/
#line 4406 "weaver-window.tex"

{
if(mouse_initialization<3){
_Wmouse.dx= (x-_Wmouse.x);
_Wmouse.dy= (y-_Wmouse.y);
}
_Wmouse.x= x;
_Wmouse.y= y;
if(mouse_initialization<2){
_Wmouse.ddx= (_Wmouse.dx-last_mouse_dx);
_Wmouse.ddy= (_Wmouse.dy-last_mouse_dy);
}
last_mouse_dx= _Wmouse.dx;
last_mouse_dy= _Wmouse.dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:194*/
#line 4061 "weaver-window.tex"

}
/*:178*/
#line 3314 "weaver-window.tex"

}
#endif
/*:148*//*149:*/
#line 3324 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
SDL_Event event;
while(SDL_PollEvent(&event)){
/*160:*/
#line 3603 "weaver-window.tex"

if(event.type==SDL_KEYDOWN){
unsigned key= event.key.keysym.scancode;
/*167:*/
#line 3817 "weaver-window.tex"

{
int i;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key)
break;
if(pressed_keys[i].key==0){
pressed_keys[i].key= key;
pressed_keys[i].time= current_time;

_Wkeyboard.key[key]= 1;
break;
}
}
if(i==32)continue;
}
/*:167*/
#line 3606 "weaver-window.tex"

}
/*:160*//*161:*/
#line 3615 "weaver-window.tex"

if(event.type==SDL_KEYUP){
unsigned key= event.key.keysym.scancode;
/*168:*/
#line 3845 "weaver-window.tex"

{
int i;
long stored_time= -1;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key){
int j;
stored_time= pressed_keys[i].time;
for(j= i;j<31;j++){
pressed_keys[j].key= pressed_keys[j+1].key;
pressed_keys[j].time= pressed_keys[j+1].time;
if(pressed_keys[j].key==0)
break;
}
pressed_keys[31].key= 0;
break;
}
}
for(i= 0;i<32;i++){
if(released_keys[i]==0)
released_keys[i]= key;
}
if(i==32)
_Wkeyboard.key[key]= 0;
else{

_Wkeyboard.key[key]= -(long)(current_time-stored_time);
if(_Wkeyboard.key[key]==0)
_Wkeyboard.key[key]= -1;
}
}
/*:168*/
#line 3618 "weaver-window.tex"

}
/*:161*//*181:*/
#line 4119 "weaver-window.tex"

if(event.type==SDL_MOUSEBUTTONDOWN){
unsigned button= event.button.button;
/*190:*/
#line 4300 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

_Wmouse.button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:190*/
#line 4122 "weaver-window.tex"

}
/*:181*//*182:*/
#line 4130 "weaver-window.tex"

if(event.type==SDL_MOUSEBUTTONUP){
unsigned button= event.button.button;
/*191:*/
#line 4325 "weaver-window.tex"

{
int i;
long stored_time= -1;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button){
int j;
stored_time= pressed_buttons[i].time;
for(j= i;j<3;j++){
pressed_buttons[j].button= pressed_buttons[j+1].button;
pressed_buttons[j].time= pressed_buttons[j+1].time;
if(pressed_buttons[j].button==0)
break;
}
pressed_buttons[3].button= 0;
break;
}
}
for(i= 0;i<4;i++){
if(released_buttons[i]==0)
released_buttons[i]= button;
}
if(i==4)
_Wmouse.button[button]= 0;
else{

_Wmouse.button[button]= -(long)(current_time-stored_time);
if(_Wmouse.button[button]==0)
_Wmouse.button[button]= -1;
}
}
/*:191*/
#line 4133 "weaver-window.tex"

}
/*:182*//*183:*/
#line 4141 "weaver-window.tex"

if(event.type==SDL_MOUSEMOTION){
int x,y;
x= event.motion.x;
y= (window_size_y-1)-event.motion.y;
/*194:*/
#line 4406 "weaver-window.tex"

{
if(mouse_initialization<3){
_Wmouse.dx= (x-_Wmouse.x);
_Wmouse.dy= (y-_Wmouse.y);
}
_Wmouse.x= x;
_Wmouse.y= y;
if(mouse_initialization<2){
_Wmouse.ddx= (_Wmouse.dx-last_mouse_dx);
_Wmouse.ddy= (_Wmouse.dy-last_mouse_dy);
}
last_mouse_dx= _Wmouse.dx;
last_mouse_dy= _Wmouse.dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:194*/
#line 4146 "weaver-window.tex"

}
/*:183*/
#line 3328 "weaver-window.tex"

}
#endif
/*:149*//*150:*/
#line 3338 "weaver-window.tex"

#if defined(_WIN32)
MSG event;
while(PeekMessage(&event,window,WM_KEYFIRST,WM_KEYLAST,PM_REMOVE)){
/*164:*/
#line 3712 "weaver-window.tex"

if(event.message==WM_KEYDOWN){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*167:*/
#line 3817 "weaver-window.tex"

{
int i;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key)
break;
if(pressed_keys[i].key==0){
pressed_keys[i].key= key;
pressed_keys[i].time= current_time;

_Wkeyboard.key[key]= 1;
break;
}
}
if(i==32)continue;
}
/*:167*/
#line 3715 "weaver-window.tex"

}
/*:164*//*165:*/
#line 3726 "weaver-window.tex"

if(event.message==WM_KEYUP){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*168:*/
#line 3845 "weaver-window.tex"

{
int i;
long stored_time= -1;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key){
int j;
stored_time= pressed_keys[i].time;
for(j= i;j<31;j++){
pressed_keys[j].key= pressed_keys[j+1].key;
pressed_keys[j].time= pressed_keys[j+1].time;
if(pressed_keys[j].key==0)
break;
}
pressed_keys[31].key= 0;
break;
}
}
for(i= 0;i<32;i++){
if(released_keys[i]==0)
released_keys[i]= key;
}
if(i==32)
_Wkeyboard.key[key]= 0;
else{

_Wkeyboard.key[key]= -(long)(current_time-stored_time);
if(_Wkeyboard.key[key]==0)
_Wkeyboard.key[key]= -1;
}
}
/*:168*/
#line 3729 "weaver-window.tex"

}
/*:165*/
#line 3342 "weaver-window.tex"

}
while(PeekMessage(&event,window,WM_MOUSEFIRST,WM_MOUSELAST,PM_REMOVE)){
/*186:*/
#line 4197 "weaver-window.tex"

if(event.message==WM_LBUTTONDOWN){
unsigned button= W_MOUSE_LEFT;
/*190:*/
#line 4300 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

_Wmouse.button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:190*/
#line 4200 "weaver-window.tex"

}
else if(event.message==WM_MBUTTONDOWN){
unsigned button= W_MOUSE_MIDDLE;
/*190:*/
#line 4300 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

_Wmouse.button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:190*/
#line 4204 "weaver-window.tex"

}
else if(event.message==WM_RBUTTONDOWN){
unsigned button= W_MOUSE_RIGHT;
/*190:*/
#line 4300 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

_Wmouse.button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:190*/
#line 4208 "weaver-window.tex"

}
else if(event.message==WM_XBUTTONDOWN){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*190:*/
#line 4300 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

_Wmouse.button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:190*/
#line 4215 "weaver-window.tex"

}
/*:186*/
#line 3345 "weaver-window.tex"

}
#endif
/*:150*/
#line 3297 "weaver-window.tex"

/*169:*/
#line 3887 "weaver-window.tex"

{
int i;

_Wkeyboard.key[W_ANY]= (pressed_keys[0].key!=0);
for(i= 0;i<32;i++){
if(pressed_keys[i].key==0)
break;
if(current_time> pressed_keys[i].key)
_Wkeyboard.key[pressed_keys[i].key]= (current_time-pressed_keys[i].key);
}
}
/*:169*//*192:*/
#line 4365 "weaver-window.tex"

{
int i;

_Wmouse.button[W_ANY]= (pressed_buttons[0].button!=0);
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==0)
break;
if(current_time> pressed_buttons[i].time)
_Wmouse.button[pressed_buttons[i].button]= 
(current_time-pressed_buttons[i].button);
}
}
/*:192*/
#line 3298 "weaver-window.tex"

}
/*:147*//*195:*/
#line 4437 "weaver-window.tex"

void _Wflush_window_input(void){

_Wget_window_input(~0x0);

/*152:*/
#line 3389 "weaver-window.tex"

{
int i;
for(i= 0;i<32;i++){
pressed_keys[i].key= 0;
released_keys[i]= 0;
}
for(i= 0;i<W_KEYBOARD_SIZE+1;i++)
_Wkeyboard.key[i]= 0;
}
/*:152*/
#line 4442 "weaver-window.tex"


/*174:*/
#line 3984 "weaver-window.tex"

{
int i;
for(i= 0;i<4;i++){
pressed_buttons[i].button= 0;
released_buttons[i]= 0;
}
for(i= 0;i<W_MOUSE_SIZE;i++)
_Wmouse.button[i]= 0;
_Wmouse.x= _Wmouse.y= _Wmouse.dx= _Wmouse.dy= _Wmouse.ddx= _Wmouse.ddy= 0;
last_mouse_dx= last_mouse_dy= 0;
mouse_initialization= 3;
/*179:*/
#line 4079 "weaver-window.tex"

#if !defined(_WIN32) && !defined(__EMSCRIPTEN__)
{
int x,y;
Window root_return,child_return;
int root_x_return,root_y_return;
unsigned mask_return;
XQueryPointer(display,window,&root_return,&child_return,
&root_x_return,&root_y_return,&x,&y,&mask_return);

y= (window_size_y-1)-y;
/*194:*/
#line 4406 "weaver-window.tex"

{
if(mouse_initialization<3){
_Wmouse.dx= (x-_Wmouse.x);
_Wmouse.dy= (y-_Wmouse.y);
}
_Wmouse.x= x;
_Wmouse.y= y;
if(mouse_initialization<2){
_Wmouse.ddx= (_Wmouse.dx-last_mouse_dx);
_Wmouse.ddy= (_Wmouse.dy-last_mouse_dy);
}
last_mouse_dx= _Wmouse.dx;
last_mouse_dy= _Wmouse.dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:194*/
#line 4090 "weaver-window.tex"

}
#endif
/*:179*//*184:*/
#line 4155 "weaver-window.tex"

#if defined(__EMSCRIPTEN__)
{
int x,y;
SDL_GetMouseState(&x,&y);

y= (window_size_y-1)-y;
/*194:*/
#line 4406 "weaver-window.tex"

{
if(mouse_initialization<3){
_Wmouse.dx= (x-_Wmouse.x);
_Wmouse.dy= (y-_Wmouse.y);
}
_Wmouse.x= x;
_Wmouse.y= y;
if(mouse_initialization<2){
_Wmouse.ddx= (_Wmouse.dx-last_mouse_dx);
_Wmouse.ddy= (_Wmouse.dy-last_mouse_dy);
}
last_mouse_dx= _Wmouse.dx;
last_mouse_dy= _Wmouse.dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:194*/
#line 4162 "weaver-window.tex"

}
#endif
/*:184*//*189:*/
#line 4269 "weaver-window.tex"

#if defined(_WIN32)
{
int x,y;
POINT point;

GetCursorPos(&point);

ScreenToClient(window,&point);

x= point.x;
y= (window_size_y-1)-point.y;
/*194:*/
#line 4406 "weaver-window.tex"

{
if(mouse_initialization<3){
_Wmouse.dx= (x-_Wmouse.x);
_Wmouse.dy= (y-_Wmouse.y);
}
_Wmouse.x= x;
_Wmouse.y= y;
if(mouse_initialization<2){
_Wmouse.ddx= (_Wmouse.dx-last_mouse_dx);
_Wmouse.ddy= (_Wmouse.dy-last_mouse_dy);
}
last_mouse_dx= _Wmouse.dx;
last_mouse_dy= _Wmouse.dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:194*/
#line 4281 "weaver-window.tex"

}
#endif
/*:189*/
#line 3996 "weaver-window.tex"

}
/*:174*/
#line 4444 "weaver-window.tex"

}
/*:195*/
#line 4462 "weaver-window.tex"

/*:196*/
