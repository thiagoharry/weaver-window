/*209:*/
#line 4906 "weaver-window_en.tex"

#include "window.h"
/*2:*/
#line 256 "weaver-window_en.tex"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
/*:2*//*15:*/
#line 446 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
#include <X11/Xlib.h> 
#include <X11/Xutil.h> 
#endif
/*:15*//*25:*/
#line 704 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
#include <X11/Xutil.h> 
#endif
/*:25*//*73:*/
#line 1690 "weaver-window_en.tex"

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
/*:73*//*132:*/
#line 2974 "weaver-window_en.tex"

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
/*:132*//*150:*/
#line 3445 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
#include <sys/time.h> 
#endif
/*:150*//*168:*/
#line 3965 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
#include <X11/XKBlib.h> 
#endif
/*:168*/
#line 4908 "weaver-window_en.tex"

/*66:*/
#line 1525 "weaver-window_en.tex"

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
/*:66*/
#line 4909 "weaver-window_en.tex"

/*68:*/
#line 1572 "weaver-window_en.tex"

#if defined(_WIN32)
BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,UINT,
int*,UINT*);
HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
/*:68*//*75:*/
#line 1731 "weaver-window_en.tex"

#if defined(_WIN32)
GLuint(__stdcall*glCreateShader)(GLenum shaderType);
void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
void(__stdcall*glCompileShader)(GLuint);
void(__stdcall*glReleaseShaderCompiler)(void);
void(__stdcall*glDeleteShader)(GLuint);
#endif
/*:75*//*80:*/
#line 1822 "weaver-window_en.tex"

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
/*:80*//*88:*/
#line 1974 "weaver-window_en.tex"

#if defined(_WIN32)
GLuint(__stdcall*glCreateProgram)(void);
void(__stdcall*glAttachShader)(GLuint,GLuint);
void(__stdcall*glDetachShader)(GLuint,GLuint);
void(__stdcall*glLinkProgram)(GLuint);
void(__stdcall*glUseProgram)(GLuint);
void(__stdcall*glDeleteProgram)(GLuint);
#endif
/*:88*//*91:*/
#line 2026 "weaver-window_en.tex"

#if defined(_WIN32)
GLboolean(__stdcall*glIsProgram)(GLuint);
void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glValidadeProgram)(GLuint);
#endif
/*:91*//*95:*/
#line 2091 "weaver-window_en.tex"

#if defined(_WIN32)
void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*;)
GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
/*:95*//*99:*/
#line 2173 "weaver-window_en.tex"

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
/*:99*//*103:*/
#line 2321 "weaver-window_en.tex"

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
/*:103*//*107:*/
#line 2413 "weaver-window_en.tex"

#if defined(_WIN32)
void(__stdcall*glGenBuffers)(GLsizei,GLuint*);
void(__stdcall*glDeleteBuffers)(GLsizei,const GLuint*);
void(__stdcall*glBindBuffer)(GLenum,GLuint);
void(__stdcall*glBufferData)(GLenum,GLsizeiptr,const void*,GLenum);
void(__stdcall*glBufferSubData)(GLenum,GLintptr,GLsizeiptr,const void*);
void(__stdcall*glIsBuffer)(GLuint);
void(__stdcall*glGetBufferParameteriv)(GLenum,GLenum,GLint*);
#endif
/*:107*//*114:*/
#line 2519 "weaver-window_en.tex"

#if defined(_WIN32)
void(__stdcall*glDepthRangef)(GLclampf,GLclampf);
#endif
/*:114*//*118:*/
#line 2567 "weaver-window_en.tex"

#if defined(_WIN32)
void(__stdcall*glActiveTexture)(GLenum);
void(__stdcall*glCompressedTexImage2D)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*);
void(__stdcall*glCompressedTexSubImage2D)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,
void*);
void(__stdcall*glGenerateMipmap)(GLenum);
#endif
/*:118*//*122:*/
#line 2686 "weaver-window_en.tex"

#if defined(_WIN32)
void(__stdcall*glSampleCoverage)(GLclampf,bool);
void(__stdcall*glStencilFuncSeparate)(GLenum,GLenum,int,unsigned int);
void(__stdcall*glStencilOpSeparate)(GLenum,GLenum,GLenum,GLenum);
void(__stdcall*glBlendEquation)(GLenum);
void(__stdcall*glBlendEquationSeparate)(GLenum,GLenum);
void(__stdcall*glBlendFuncSeparate)(GLenum,GLenum);
void(__stdcall*glBlendColor)(GLclampf,GLclampf,GLclampf,GLclampf);
#endif
/*:122*//*126:*/
#line 2788 "weaver-window_en.tex"

#if defined(_WIN32)
void(__stdcall*glStencilMaskSeparate)(GLenum,unsigned int);
void(__stdcall*glClearDepthf)(GLclampf);
#endif
/*:126*//*129:*/
#line 2838 "weaver-window_en.tex"

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
boolean(__stdcall*glIsFrabuffer)(unsigned int);
void(__stdcall*glGetFramebufferAttachmentParameteriv)(GLenum,GLenum,
GLenum,int*);
boolean(__stdcall*glIsRenderbuffer)(unsigned int);
void(__stdcall*glGetRenderbufferParameteriv)(GLenum,GLenum,int*);
#endif
/*:129*//*170:*/
#line 3995 "weaver-window_en.tex"

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
W_LEFT_SUPER= W_KEYBOARD_SIZE,W_RIGHT_SUPER= W_KEYBOARD_SIZE,
W_SPACE= W_KEYBOARD_SIZE,W_A= W_KEYBOARD_SIZE,W_B= W_KEYBOARD_SIZE,
W_C= W_KEYBOARD_SIZE,W_D= W_KEYBOARD_SIZE,W_E= W_KEYBOARD_SIZE,
W_F= W_KEYBOARD_SIZE,W_G= W_KEYBOARD_SIZE,W_H= W_KEYBOARD_SIZE,
W_I= W_KEYBOARD_SIZE,W_J= W_KEYBOARD_SIZE,W_K= W_KEYBOARD_SIZE,
W_L= W_KEYBOARD_SIZE,W_M= W_KEYBOARD_SIZE,W_N= W_KEYBOARD_SIZE,
W_O= W_KEYBOARD_SIZE,W_P= W_KEYBOARD_SIZE,W_Q= W_KEYBOARD_SIZE,
W_R= W_KEYBOARD_SIZE,W_S= W_KEYBOARD_SIZE,W_T= W_KEYBOARD_SIZE,
W_U= W_KEYBOARD_SIZE,W_V= W_KEYBOARD_SIZE,W_W= W_KEYBOARD_SIZE,
W_X= W_KEYBOARD_SIZE,W_Y= W_KEYBOARD_SIZE,W_Z= W_KEYBOARD_SIZE,
W_INSERT= W_KEYBOARD_SIZE,W_HOME= W_KEYBOARD_SIZE,
W_PAGE_UP= W_KEYBOARD_SIZE,W_DELETE= W_KEYBOARD_SIZE,
W_END= W_KEYBOARD_SIZE,W_PAGE_DOWN= W_KEYBOARD_SIZE,
W_ESC= W_KEYBOARD_SIZE,W_ANY= 0;
/*:170*/
#line 4910 "weaver-window_en.tex"

/*14:*/
#line 420 "weaver-window_en.tex"

static int window_size_y= 0,window_size_x= 0;
/*:14*//*17:*/
#line 496 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
static Display*display= NULL;
#endif
/*:17*//*21:*/
#line 608 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
static Window window;
#endif
/*:21*//*35:*/
#line 914 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
static bool fullscreen_mode= false;
#endif
/*:35*//*36:*/
#line 933 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
/*:36*//*38:*/
#line 958 "weaver-window_en.tex"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
/*:38*//*43:*/
#line 1049 "weaver-window_en.tex"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
/*:43*//*45:*/
#line 1102 "weaver-window_en.tex"

#if defined(_WIN32)
static HWND window;
#endif
/*:45*//*49:*/
#line 1163 "weaver-window_en.tex"

static bool already_have_window= false;
/*:49*//*52:*/
#line 1214 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
static EGLDisplay*egl_display;
#endif
/*:52*//*54:*/
#line 1261 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
EGLConfig egl_config;
#endif
/*:54*//*56:*/
#line 1290 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
static EGLSurface egl_window;
#endif
/*:56*//*58:*/
#line 1329 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
static EGLContext egl_context;
#endif
/*:58*//*61:*/
#line 1377 "weaver-window_en.tex"

#if defined(_WIN32)
static HGLRC wgl_context;
static HDC device_context;
#endif
/*:61*//*145:*/
#line 3312 "weaver-window_en.tex"

#if defined(W_WINDOW_SIZE_X) && defined(W_WINDOW_SIZE_Y)
static unsigned last_window_size_x= W_WINDOW_SIZE_X;
static unsigned last_window_size_y= W_WINDOW_SIZE_Y;
#else
static unsigned last_window_size_x= 0;
static unsigned last_window_size_y= 0;
#endif
/*:145*//*146:*/
#line 3331 "weaver-window_en.tex"

static void(*resizing_function)(int,int,int,int)= NULL;
/*:146*//*162:*/
#line 3810 "weaver-window_en.tex"

static struct{
unsigned key;
unsigned long long time;
}pressed_keys[32];
unsigned released_keys[32];
/*:162*//*183:*/
#line 4377 "weaver-window_en.tex"

static struct{
unsigned button;
unsigned long long time;
}pressed_buttons[4];
static unsigned released_buttons[4];
/*:183*//*184:*/
#line 4392 "weaver-window_en.tex"

static int last_mouse_dx= 0,last_mouse_dy= 0;
/*:184*//*185:*/
#line 4414 "weaver-window_en.tex"

static int mouse_initialization= 3;
/*:185*/
#line 4911 "weaver-window_en.tex"

/*16:*/
#line 463 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
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
/*:16*//*18:*/
#line 511 "weaver-window_en.tex"

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
/*:18*//*39:*/
#line 973 "weaver-window_en.tex"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*40:*/
#line 991 "weaver-window_en.tex"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:40*/
#line 977 "weaver-window_en.tex"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
/*:39*//*48:*/
#line 1144 "weaver-window_en.tex"

bool _Wcreate_window(struct _Wkeyboard*keyboard,struct _Wmouse*mouse){
if(already_have_window==true)
return false;
/*20:*/
#line 574 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
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

window_size_x= screen_resolution_x;
window_size_y= screen_resolution_y;
#endif
/*:20*//*22:*/
#line 626 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
#if !defined(W_WINDOW_NO_FULLSCREEN)
{
XSetWindowAttributes attributes;
attributes.override_redirect= true;
XMoveWindow(display,window,0,0);
XChangeWindowAttributes(display,window,CWOverrideRedirect,
&attributes);
}
#endif
#endif
/*:22*//*23:*/
#line 654 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
#if defined(W_WINDOW_NO_FULLSCREEN)
{
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
/*:23*//*24:*/
#line 680 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
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
/*:24*//*26:*/
#line 725 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
/*:26*//*27:*/
#line 739 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
XStoreName(display,window,W_WINDOW_NAME);
#endif
/*:27*//*29:*/
#line 759 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
/*51:*/
#line 1196 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
return false;
}
eglInitialize(egl_display,NULL,NULL);
#endif
/*:51*//*53:*/
#line 1226 "weaver-window_en.tex"

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
/*:53*//*55:*/
#line 1275 "weaver-window_en.tex"

egl_window= eglCreateWindowSurface(egl_display,egl_config,
window,NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
return false;
}
/*:55*//*57:*/
#line 1305 "weaver-window_en.tex"

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
/*:57*/
#line 761 "weaver-window_en.tex"

#endif
/*:29*//*30:*/
#line 774 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
XSetInputFocus(display,window,RevertToParent,CurrentTime);
#endif
/*:30*/
#line 1148 "weaver-window_en.tex"

/*32:*/
#line 819 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
/*:32*//*33:*/
#line 831 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
/*:33*//*34:*/
#line 848 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
{
fullscreen_mode= true;
double pixel_ratio= EM_ASM_DOUBLE({
return window.devicePixelRatio;
});
window_size_x= EM_ASM_INT({
return window.innerWidth*window.devicePixelRatio;
});
window_size_y= EM_ASM_INT({
return window.innerHeight*window.devicePixelRatio;;
});
#if defined(W_WINDOW_NO_FULLSCREEN)
fullscreen_mode= false;
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
if(fullscreen_mode){
EM_ASM(
var el= document.getElementById("canvas");
el.style.position= "absolute";
el.style.top= "0px";
el.style.left= "0px";
el.style.width= window.innerWidth+"px";
el.style.height= window.innerHeight+"px";
el.width= (window.innerWidth*window.devicePixelRatio);
el.height= (window.innerHeight*window.devicePixelRatio);
);
}
if(window==NULL)
return false;
glViewport(0,0,window_size_x,window_size_y);
}
#endif
/*:34*/
#line 1149 "weaver-window_en.tex"

/*37:*/
#line 945 "weaver-window_en.tex"

#if defined(_WIN32)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
/*:37*//*41:*/
#line 1007 "weaver-window_en.tex"

#if defined(_WIN32)
if(!already_created_a_class){
ATOM ret;
WNDCLASS window_class;
memset(&window_class,0,sizeof(WNDCLASS));
window_class.lpfnWndProc= WindowProc;
window_class.hInstance= GetModuleHandle(NULL);
window_class.lpszClassName= class_name;
window_class.hbrBackground= CreateSolidBrush(RGB(0,0,0));
window_class.hCursor= LoadCursor(NULL,IDC_ARROW);
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
/*:41*//*44:*/
#line 1060 "weaver-window_en.tex"

#if defined(_WIN32)
{
RECT size;
window_size_x= screen_resolution_x;
window_size_y= screen_resolution_y;
SystemParametersInfoA(SPI_GETWORKAREA,0,&size,0);
DWORD fullscreen_flag= WS_POPUP;
#if defined(W_WINDOW_NO_FULLSCREEN)
fullscreen_flag= WS_OVERLAPPED|WS_CAPTION;
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
/*:44*//*47:*/
#line 1123 "weaver-window_en.tex"

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
/*:47*/
#line 1150 "weaver-window_en.tex"

/*167:*/
#line 3897 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
{
int i;

XkbSetDetectableAutoRepeat(display,true,NULL);
for(i= 8;i<256;i++){
unsigned long value= XkbKeycodeToKeysym(display,i,0,0);
switch(value){
case 0:break;
case XK_Escape:W_ESC= i;break;
case XK_BackSpace:W_BACKSPACE= i;break;
case XK_Tab:W_TAB= i;break;
case XK_Return:W_ENTER= i;break;
case XK_Up:W_UP= i;break;case XK_Down:W_DOWN= i;break;
case XK_Left:W_LEFT= i;break;case XK_Right:W_RIGHT= i;break;
case XK_0:W_0= i;break;case XK_1:W_1= i;break;
case XK_2:W_2= i;break;case XK_3:W_3= i;break;
case XK_4:W_4= i;break;case XK_5:W_5= i;break;
case XK_6:W_6= i;break;case XK_7:W_7= i;break;
case XK_8:W_8= i;break;case XK_9:W_9= i;break;
case XK_minus:W_MINUS= i;break;case XK_plus:W_PLUS= i;break;
case XK_F1:W_F1= i;break;case XK_F2:W_F2= i;break;
case XK_F3:W_F3= i;break;case XK_F4:W_F4= i;break;
case XK_F5:W_F5= i;break;case XK_F6:W_F6= i;break;
case XK_F7:W_F7= i;break;case XK_F8:W_F8= i;break;
case XK_F9:W_F9= i;break;case XK_F10:W_F10= i;break;
case XK_F11:W_F11= i;break;case XK_F12:W_F12= i;break;
case XK_Shift_L:W_LEFT_SHIFT= i;break;
case XK_Shift_R:W_RIGHT_SHIFT= i;break;
case XK_Control_L:W_LEFT_CTRL= i;break;
case XK_Control_R:W_RIGHT_CTRL= i;break;
case XK_Alt_L:W_LEFT_ALT= i;break;
case XK_Alt_R:W_RIGHT_ALT= i;break;
case XK_Super_L:W_LEFT_SUPER= i;break;
case XK_Super_R:W_RIGHT_SUPER= i;break;
case XK_space:W_SPACE= i;break;
case XK_A:W_A= i;break;case XK_b:W_B= i;break;
case XK_c:W_C= i;break;case XK_d:W_D= i;break;
case XK_e:W_E= i;break;case XK_f:W_F= i;break;
case XK_g:W_G= i;break;case XK_h:W_H= i;break;
case XK_i:W_I= i;break;case XK_j:W_J= i;break;
case XK_k:W_K= i;break;case XK_l:W_L= i;break;
case XK_m:W_M= i;break;case XK_n:W_N= i;break;
case XK_o:W_O= i;break;case XK_p:W_P= i;break;
case XK_q:W_Q= i;break;case XK_r:W_R= i;break;
case XK_s:W_S= i;break;case XK_t:W_T= i;break;
case XK_u:W_U= i;break;case XK_v:W_V= i;break;
case XK_w:W_W= i;break;case XK_x:W_X= i;break;
case XK_y:W_Y= i;break;case XK_z:W_Z= i;break;
case XK_Insert:W_INSERT= i;break;
case XK_Home:W_HOME= i;break;
case XK_Page_Up:W_PAGE_UP= i;break;
case XK_Delete:W_DELETE= i;break;
case XK_End:W_END= i;break;
case XK_Page_Down:W_PAGE_DOWN= i;break;
default:break;
}
}
}
#endif
/*:167*//*174:*/
#line 4078 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
{
int i;
for(i= 0;i<W_KEYBOARD_SIZE;i++){

unsigned long value= SDL_SCANCODE_TO_KEYCODE(i);
switch(value){
case 0:break;
case SDLK_ESCAPE:W_ESC= i;break;
case SDLK_BACKSPACE:W_BACKSPACE= i;break;
case SDLK_TAB:W_TAB= i;break;
case SDLK_RETURN:W_ENTER= i;break;
case SDLK_UP:W_UP= i;break;case SDLK_DOWN:W_DOWN= i;break;
case SDLK_LEFT:W_LEFT= i;break;case SDLK_RIGHT:W_RIGHT= i;break;
case SDLK_0:W_0= i;break;case SDLK_1:W_1= i;break;
case SDLK_2:W_2= i;break;case SDLK_3:W_3= i;break;
case SDLK_4:W_4= i;break;case SDLK_5:W_5= i;break;
case SDLK_6:W_6= i;break;case SDLK_7:W_7= i;break;
case SDLK_8:W_8= i;break;case SDLK_9:W_9= i;break;
case SDLK_MINUS:W_MINUS= i;break;case SDLK_PLUS:W_PLUS= i;break;
case SDLK_F1:W_F1= i;break;case SDLK_F2:W_F2= i;break;
case SDLK_F3:W_F3= i;break;case SDLK_F4:W_F4= i;break;
case SDLK_F5:W_F5= i;break;case SDLK_F6:W_F6= i;break;
case SDLK_F7:W_F7= i;break;case SDLK_F8:W_F8= i;break;
case SDLK_F9:W_F9= i;break;case SDLK_F10:W_F10= i;break;
case SDLK_F11:W_F11= i;break;case SDLK_F12:W_F12= i;break;
case SDLK_LSHIFT:W_LEFT_SHIFT= i;break;
case SDLK_RSHIFT:W_RIGHT_SHIFT= i;break;
case SDLK_LCTRL:W_LEFT_CTRL= i;break;
case SDLK_RCTRL:W_RIGHT_CTRL= i;break;
case SDLK_LALT:W_LEFT_ALT= i;break;
case SDLK_RALT:W_RIGHT_ALT= i;break;
case SDLK_SPACE:W_SPACE= i;break;
case SDLK_a:W_A= i;break;case SDLK_b:W_B= i;break;
case SDLK_c:W_C= i;break;case SDLK_d:W_D= i;break;
case SDLK_e:W_E= i;break;case SDLK_f:W_F= i;break;
case SDLK_g:W_G= i;break;case SDLK_h:W_H= i;break;
case SDLK_i:W_I= i;break;case SDLK_j:W_J= i;break;
case SDLK_k:W_K= i;break;case SDLK_l:W_L= i;break;
case SDLK_m:W_M= i;break;case SDLK_n:W_N= i;break;
case SDLK_o:W_O= i;break;case SDLK_p:W_P= i;break;
case SDLK_q:W_Q= i;break;case SDLK_r:W_R= i;break;
case SDLK_s:W_S= i;break;case SDLK_t:W_T= i;break;
case SDLK_u:W_U= i;break;case SDLK_v:W_V= i;break;
case SDLK_w:W_W= i;break;case SDLK_x:W_X= i;break;
case SDLK_y:W_Y= i;break;case SDLK_z:W_Z= i;break;
case SDLK_INSERT:W_INSERT= i;break;
case SDLK_HOME:W_HOME= i;break;
case SDLK_PAGEUP:W_PAGE_UP= i;break;
case SDLK_DELETE:W_DELETE= i;break;
case SDLK_END:W_END= i;break;
case SDLK_PAGEDOWN:W_PAGE_DOWN= i;break;
default:break;
}
}
}
#endif
/*:174*//*178:*/
#line 4184 "weaver-window_en.tex"

#if defined(_WIN32)
{
int i;
for(i= 0;i<W_KEYBOARD_SIZE;i++){
unsigned long value= MapVirtualKey(i,MAPVK_VSC_TO_VK_EX);
switch(value){
case 0:break;
case VK_ESCAPE:W_ESC= i;break;
case VK_BACK:W_BACKSPACE= i;break;
case VK_TAB:W_TAB= i;break;
case VK_RETURN:W_ENTER= i;break;
case VK_UP:W_UP= i;break;case VK_DOWN:W_DOWN= i;break;
case VK_LEFT:W_LEFT= i;break;case VK_RIGHT:W_RIGHT= i;break;
case'0':W_0= i;break;case'1':W_1= i;break;
case'2':W_2= i;break;case'3':W_3= i;break;
case'4':W_4= i;break;case'5':W_5= i;break;
case'6':W_6= i;break;case'7':W_7= i;break;
case'8':W_8= i;break;case'9':W_9= i;break;
case VK_OEM_MINUS:W_MINUS= i;break;case VK_OEM_PLUS:W_PLUS= i;break;
case VK_F1:W_F1= i;break;case VK_F2:W_F2= i;break;
case VK_F3:W_F3= i;break;case VK_F4:W_F4= i;break;
case VK_F5:W_F5= i;break;case VK_F6:W_F6= i;break;
case VK_F7:W_F7= i;break;case VK_F8:W_F8= i;break;
case VK_F9:W_F9= i;break;case VK_F10:W_F10= i;break;
case VK_F11:W_F11= i;break;case VK_F12:W_F12= i;break;
case VK_LSHIFT:W_LEFT_SHIFT= i;break;
case VK_RSHIFT:W_RIGHT_SHIFT= i;break;
case VK_LCONTROL:W_LEFT_CTRL= i;break;
case VK_RCONTROL:W_RIGHT_CTRL= i;break;
case VK_MENU:W_LEFT_ALT= i;break;
case VK_RMENU:W_RIGHT_ALT= i;break;
case VK_SPACE:W_SPACE= i;break;
case'A':W_A= i;break;case'B':W_B= i;break;
case'C':W_C= i;break;case'D':W_D= i;break;
case'E':W_E= i;break;case'F':W_F= i;break;
case'G':W_G= i;break;case'H':W_H= i;break;
case'I':W_I= i;break;case'J':W_J= i;break;
case'K':W_K= i;break;case'L':W_L= i;break;
case'M':W_M= i;break;case'N':W_N= i;break;
case'O':W_O= i;break;case'P':W_P= i;break;
case'Q':W_Q= i;break;case'R':W_R= i;break;
case'S':W_S= i;break;case'T':W_T= i;break;
case'U':W_U= i;break;case'V':W_V= i;break;
case'W':W_W= i;break;case'X':W_X= i;break;
case'Y':W_Y= i;break;case'Z':W_Z= i;break;
case VK_INSERT:W_INSERT= i;break;
case VK_HOME:W_HOME= i;break;
case VK_PRIOR:W_PAGE_UP= i;break;
case VK_DELETE:W_DELETE= i;break;
case VK_END:W_END= i;break;
case VK_NEXT:W_PAGE_DOWN= i;break;
default:break;
}
}
}
#endif
/*:178*/
#line 1151 "weaver-window_en.tex"

_Wflush_window_input(keyboard,mouse);
already_have_window= true;
return true;
}
/*:48*//*133:*/
#line 3003 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
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
/*:133*//*134:*/
#line 3030 "weaver-window_en.tex"

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
/*:134*//*135:*/
#line 3053 "weaver-window_en.tex"

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
/*:135*//*136:*/
#line 3084 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
bool _Wrender_window(void){
return eglSwapBuffers(egl_display,egl_window);
}
#endif
/*:136*//*137:*/
#line 3107 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
/*:137*//*138:*/
#line 3124 "weaver-window_en.tex"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
/*:138*//*139:*/
#line 3146 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
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
window_size_x= *width;
window_size_y= *height;
return true;
}
#endif
/*:139*//*140:*/
#line 3175 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
bool _Wget_window_size(int*width,int*height){
if(!already_have_window){
*width= 0;
*height= 0;
return false;
}
*width= EM_ASM_INT({
return document.getElementById("canvas").width;
});
*height= EM_ASM_INT({
return document.getElementById("canvas").height;
});
window_size_x= *width;
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
/*:140*//*141:*/
#line 3209 "weaver-window_en.tex"

#if defined(_WIN32)
bool _Wget_window_size(int*width,int*height){
BOOL ret;
RECT rectangle;
ret= GetWindowRect(window,&rectangle);
if(ret){
*width= rectangle.right-rectangle.left;
*height= rectangle.bottom-rectangle.top;
window_size_x= *width;
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
/*:141*//*142:*/
#line 3245 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
bool _Wis_fullscreen(void){
XWindowAttributes attributes;
if(!already_have_window||display==NULL)
return false;
XGetWindowAttributes(display,window,&attributes);
return(attributes.override_redirect==true);
}
#endif
/*:142*//*143:*/
#line 3266 "weaver-window_en.tex"

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
/*:143*//*144:*/
#line 3289 "weaver-window_en.tex"

#if defined(_WIN32)
bool _Wis_fullscreen(void){
DWORD window_style= GetWindowLongA(window,GWL_STYLE);
return(window_style&WS_POPUP);
}
#endif
/*:144*//*147:*/
#line 3340 "weaver-window_en.tex"

void _Wset_resize_function(void(*func)(int,int,int,int)){
resizing_function= func;
}
/*:147*//*148:*/
#line 3363 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
void _Wtoggle_fullscreen(void){
int new_size_x,new_size_y,old_size_x,old_size_y;
bool changing_to_fullscreen= false;
XSetWindowAttributes attributes;
if(!already_have_window)
return;
_Wget_window_size(&old_size_x,&old_size_y);
XWithdrawWindow(display,window,0);
if(!_Wis_fullscreen()){
attributes.override_redirect= true;
changing_to_fullscreen= true;
XMoveWindow(display,window,0,0);
}
else
attributes.override_redirect= false;
XChangeWindowAttributes(display,window,CWOverrideRedirect,
&attributes);
XMapWindow(display,window);
{
XEvent e;
do{
XNextEvent(display,&e);
}while(e.type!=MapNotify);
}
if(changing_to_fullscreen){
_Wget_screen_resolution(&new_size_x,&new_size_y);
XMoveResizeWindow(display,window,0,0,new_size_x,new_size_y);
/*149:*/
#line 3426 "weaver-window_en.tex"

{
struct timeval begin_time,now;
int new_width,new_height;
gettimeofday(&begin_time,NULL);
do{
_Wget_window_size(&new_width,&new_height);
gettimeofday(&now,NULL);
}while((new_width!=new_size_x||new_height!=new_size_y)&&
(now.tv_sec-begin_time.tv_sec)*1000000+
(now.tv_usec-begin_time.tv_usec)<100000);
}
/*:149*/
#line 3392 "weaver-window_en.tex"

}
else{
new_size_x= ((last_window_size_x> 0)?(last_window_size_x):(800));
new_size_y= ((last_window_size_y> 0)?(last_window_size_y):(600));
XResizeWindow(display,window,new_size_x,new_size_y);
/*149:*/
#line 3426 "weaver-window_en.tex"

{
struct timeval begin_time,now;
int new_width,new_height;
gettimeofday(&begin_time,NULL);
do{
_Wget_window_size(&new_width,&new_height);
gettimeofday(&now,NULL);
}while((new_width!=new_size_x||new_height!=new_size_y)&&
(now.tv_sec-begin_time.tv_sec)*1000000+
(now.tv_usec-begin_time.tv_usec)<100000);
}
/*:149*/
#line 3398 "weaver-window_en.tex"

}
_Wget_window_size(&new_size_x,&new_size_y);
glViewport(0,0,new_size_x,new_size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
/*:148*//*151:*/
#line 3473 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
void _Wtoggle_fullscreen(void){
int new_size_x,new_size_y,old_size_x,old_size_y;
if(!already_have_window)
return;
_Wget_window_size(&old_size_x,&old_size_y);
if(fullscreen_mode){
EM_ASM({
var el= document.getElementById("canvas");
el.style.position= "initial";
el.style.top= "initial";
el.style.left= "initial";
if($0=== 0||$1==0){
el.style.width= "initial";
el.width= el.clientWidth*window.devicePixelRatio;
el.style.height= "initial";
el.height= el.clientHeight*window.devicePixelRatio;
}else{
el.style.width= ($0/window.devicePixelRatio)+"px";
el.width= $0;
el.style.height= ($1/window.devicePixelRatio)+"px";
el.height= $1;
}
},last_window_size_x,last_window_size_y);
fullscreen_mode= false;
}else{
EM_ASM(
var el= document.getElementById("canvas");
el.style.position= "absolute";
el.style.top= "0px";
el.style.left= "0px";
el.style.width= window.screen.width+"px";
el.style.height= window.screen.height+"px";
el.width= (window.screen.width*window.devicePixelRatio);
el.height= (window.screen.height*window.devicePixelRatio);
);
fullscreen_mode= true;
}
_Wget_window_size(&new_size_x,&new_size_y);
glViewport(0,0,new_size_x,new_size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
/*:151*//*152:*/
#line 3527 "weaver-window_en.tex"

#if defined(_WIN32)
void _Wtoggle_fullscreen(void){
int new_size_x,new_size_y,old_size_x,old_size_y;
DWORD window_style= GetWindowLongPtrA(window,GWL_STYLE);
if(!already_have_window)
return;
_Wget_window_size(&old_size_x,&old_size_y);
if(window_style&WS_POPUP){
SetWindowLong(window,GWL_STYLE,WS_OVERLAPPED|WS_CAPTION|WS_VISIBLE);
if(last_window_size_x> 0&&last_window_size_y> 0)
SetWindowPos(window,HWND_TOP,0,0,last_window_size_x,last_window_size_y,
SWP_FRAMECHANGED|SWP_SHOWWINDOW);
else
SetWindowPos(window,HWND_TOP,0,0,last_window_size_x,last_window_size_y,
SWP_FRAMECHANGED|SWP_SHOWWINDOW|SWP_NOSIZE);
}else{
_Wget_screen_resolution(&new_size_x,&new_size_y);
SetWindowLongPtr(window,GWL_STYLE,WS_POPUP|WS_VISIBLE);
SetWindowPos(window,HWND_TOP,0,0,new_size_x,new_size_y,
SWP_SHOWWINDOW|SWP_FRAMECHANGED);
}
_Wget_window_size(&new_size_x,&new_size_y);
glViewport(0,0,size_x,size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
/*:152*//*153:*/
#line 3579 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
bool _Wresize_window(int width,int height){
int old_size_x,old_size_y,new_size_x= width,new_size_y= height;
if(_Wis_fullscreen()||width<=0||height<=0||!already_have_window)
return false;
_Wget_window_size(&old_size_x,&old_size_y);
{
XSizeHints hints;
hints.flags= PMinSize|PMaxSize;
hints.min_width= hints.max_width= width;
hints.min_height= hints.max_height= height;
XSetWMNormalHints(display,window,&hints);
}
last_window_size_x= width;
last_window_size_y= height;
XResizeWindow(display,window,width,height);
/*149:*/
#line 3426 "weaver-window_en.tex"

{
struct timeval begin_time,now;
int new_width,new_height;
gettimeofday(&begin_time,NULL);
do{
_Wget_window_size(&new_width,&new_height);
gettimeofday(&now,NULL);
}while((new_width!=new_size_x||new_height!=new_size_y)&&
(now.tv_sec-begin_time.tv_sec)*1000000+
(now.tv_usec-begin_time.tv_usec)<100000);
}
/*:149*/
#line 3596 "weaver-window_en.tex"

glViewport(0,0,width,height);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,width,height);
return true;
}
#endif
/*:153*//*154:*/
#line 3613 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
bool _Wresize_window(int width,int height){
int old_size_x,old_size_y;
if(fullscreen_mode||width<=0||height<=0||!already_have_window)
return false;
_Wget_window_size(&old_size_x,&old_size_y);
last_window_size_x= width;
last_window_size_y= height;
EM_ASM({
var el= document.getElementById("canvas");
el.style.width= ($0/window.devicePixelRatio)+"px";
el.width= $0;
el.style.height= ($1/window.devicePixelRatio)+"px";
el.height= $1;
},width,height);
glViewport(0,0,width,height);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,width,height);
return true;
}
#endif
/*:154*//*155:*/
#line 3645 "weaver-window_en.tex"

#if defined(_WIN32)
bool _Wresize_window(int width,int height){
int old_size_x,old_size_y;
bool ret;
if(_Wis_fullscreen()||width<=0||height<=0||!already_have_window)
return false;
_Wget_window_size(&old_size_x,&old_size_y);
last_window_size_x= width;
last_window_size_y= height;
ret= SetWindowPos(window,0,0,0,width,height,SWP_NOMOVE|SWP_NOZORDER);
if(!ret)
return false;
glViewport(0,0,width,height);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,width,height);
return true;
}
#endif
/*:155*//*158:*/
#line 3735 "weaver-window_en.tex"

void _Wget_window_input(unsigned long long current_time,
struct _Wkeyboard*keyboard,
struct _Wmouse*mouse){
if(already_have_window==false)
return;
/*182:*/
#line 4356 "weaver-window_en.tex"

{
int i;
for(i= 0;i<32;i++){
if(released_keys[i]==0)
break;
keyboard->key[released_keys[i]]= 0;
released_keys[i]= 0;
}
}
/*:182*/
#line 3741 "weaver-window_en.tex"

/*159:*/
#line 3753 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
XEvent event;
while(XPending(display)){
XNextEvent(display,&event);
/*165:*/
#line 3864 "weaver-window_en.tex"

if(event.type==KeyPress){
unsigned key= event.xkey.keycode;
/*179:*/
#line 4260 "weaver-window_en.tex"

{
int i;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key)
break;
if(pressed_keys[i].key==0){
pressed_keys[i].key= key;
pressed_keys[i].time= current_time;

keyboard->key[key]= 1;
break;
}
}
if(i==32)continue;
}
/*:179*/
#line 3867 "weaver-window_en.tex"

}
/*:165*//*166:*/
#line 3876 "weaver-window_en.tex"

if(event.type==KeyRelease){
unsigned key= event.xkey.keycode;
/*180:*/
#line 4287 "weaver-window_en.tex"

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
keyboard->key[key]= 0;
else{

keyboard->key[key]= -(long)(current_time-stored_time);
if(keyboard->key[key]==0)
keyboard->key[key]= -1;
}
}
/*:180*/
#line 3879 "weaver-window_en.tex"

}
/*:166*//*188:*/
#line 4469 "weaver-window_en.tex"

if(event.type==ButtonPress){
unsigned button= event.xbutton.button;
/*202:*/
#line 4735 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

mouse->button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:202*/
#line 4472 "weaver-window_en.tex"

}
/*:188*//*189:*/
#line 4483 "weaver-window_en.tex"

if(event.type==ButtonRelease){
unsigned button= event.xbutton.button;
/*203:*/
#line 4758 "weaver-window_en.tex"

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
mouse->button[button]= 0;
else{

mouse->button[button]= -(long)(current_time-stored_time);
if(mouse->button[button]==0)
mouse->button[button]= -1;
}
}
/*:203*/
#line 4486 "weaver-window_en.tex"

}
/*:189*//*190:*/
#line 4495 "weaver-window_en.tex"

if(event.type==MotionNotify){
int x,y;
x= event.xmotion.x;
y= (window_size_y-1)-event.xmotion.y;
/*206:*/
#line 4838 "weaver-window_en.tex"

/*207:*/
#line 4866 "weaver-window_en.tex"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
/*:207*/
#line 4839 "weaver-window_en.tex"

{
if(mouse_initialization<3){
mouse->dx= (x-mouse->x);
mouse->dy= (y-mouse->y);
}
mouse->x= x;
mouse->y= y;
if(mouse_initialization<2){
mouse->ddx= (mouse->dx-last_mouse_dx);
mouse->ddy= (mouse->dy-last_mouse_dy);
}
last_mouse_dx= mouse->dx;
last_mouse_dy= mouse->dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:206*/
#line 4500 "weaver-window_en.tex"

}
/*:190*/
#line 3758 "weaver-window_en.tex"

}
#endif
/*:159*//*160:*/
#line 3768 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
SDL_Event event;
while(SDL_PollEvent(&event)){
/*172:*/
#line 4054 "weaver-window_en.tex"

if(event.type==SDL_KEYDOWN){
unsigned key= event.key.keysym.scancode;
/*179:*/
#line 4260 "weaver-window_en.tex"

{
int i;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key)
break;
if(pressed_keys[i].key==0){
pressed_keys[i].key= key;
pressed_keys[i].time= current_time;

keyboard->key[key]= 1;
break;
}
}
if(i==32)continue;
}
/*:179*/
#line 4057 "weaver-window_en.tex"

}
/*:172*//*173:*/
#line 4065 "weaver-window_en.tex"

if(event.type==SDL_KEYUP){
unsigned key= event.key.keysym.scancode;
/*180:*/
#line 4287 "weaver-window_en.tex"

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
keyboard->key[key]= 0;
else{

keyboard->key[key]= -(long)(current_time-stored_time);
if(keyboard->key[key]==0)
keyboard->key[key]= -1;
}
}
/*:180*/
#line 4068 "weaver-window_en.tex"

}
/*:173*//*193:*/
#line 4557 "weaver-window_en.tex"

if(event.type==SDL_MOUSEBUTTONDOWN){
unsigned button= event.button.button;
/*202:*/
#line 4735 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

mouse->button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:202*/
#line 4560 "weaver-window_en.tex"

}
/*:193*//*194:*/
#line 4568 "weaver-window_en.tex"

if(event.type==SDL_MOUSEBUTTONUP){
unsigned button= event.button.button;
/*203:*/
#line 4758 "weaver-window_en.tex"

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
mouse->button[button]= 0;
else{

mouse->button[button]= -(long)(current_time-stored_time);
if(mouse->button[button]==0)
mouse->button[button]= -1;
}
}
/*:203*/
#line 4571 "weaver-window_en.tex"

}
/*:194*/
#line 3772 "weaver-window_en.tex"

}
#endif
/*:160*//*161:*/
#line 3782 "weaver-window_en.tex"

#if defined(_WIN32)
MSG event;
while(PeekMessage(&event,window,WM_KEYFIRST,WM_KEYLAST,PM_REMOVE)){
/*176:*/
#line 4158 "weaver-window_en.tex"

if(event.message==WM_KEYDOWN){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*179:*/
#line 4260 "weaver-window_en.tex"

{
int i;
for(i= 0;i<32;i++){
if(pressed_keys[i].key==key)
break;
if(pressed_keys[i].key==0){
pressed_keys[i].key= key;
pressed_keys[i].time= current_time;

keyboard->key[key]= 1;
break;
}
}
if(i==32)continue;
}
/*:179*/
#line 4161 "weaver-window_en.tex"

}
/*:176*//*177:*/
#line 4172 "weaver-window_en.tex"

if(event.message==WM_KEYUP){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*180:*/
#line 4287 "weaver-window_en.tex"

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
keyboard->key[key]= 0;
else{

keyboard->key[key]= -(long)(current_time-stored_time);
if(keyboard->key[key]==0)
keyboard->key[key]= -1;
}
}
/*:180*/
#line 4175 "weaver-window_en.tex"

}
/*:177*/
#line 3786 "weaver-window_en.tex"

}
while(PeekMessage(&event,window,WM_MOUSEFIRST,WM_MOUSELAST,PM_REMOVE)){
/*198:*/
#line 4633 "weaver-window_en.tex"

if(event.message==WM_LBUTTONDOWN){
unsigned button= W_MOUSE_LEFT;
/*202:*/
#line 4735 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

mouse->button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:202*/
#line 4636 "weaver-window_en.tex"

}
else if(event.message==WM_MBUTTONDOWN){
unsigned button= W_MOUSE_MIDDLE;
/*202:*/
#line 4735 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

mouse->button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:202*/
#line 4640 "weaver-window_en.tex"

}
else if(event.message==WM_RBUTTONDOWN){
unsigned button= W_MOUSE_RIGHT;
/*202:*/
#line 4735 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

mouse->button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:202*/
#line 4644 "weaver-window_en.tex"

}
else if(event.message==WM_XBUTTONDOWN){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*202:*/
#line 4735 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==button)
break;
if(pressed_buttons[i].button==0){
pressed_buttons[i].button= button;
pressed_buttons[i].time= current_time;

mouse->button[button]= 1;
break;
}
}
if(i==4)continue;
}
/*:202*/
#line 4651 "weaver-window_en.tex"

}
/*:198*//*199:*/
#line 4661 "weaver-window_en.tex"

if(event.message==WM_LBUTTONUP){
unsigned button= W_MOUSE_LEFT;
/*203:*/
#line 4758 "weaver-window_en.tex"

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
mouse->button[button]= 0;
else{

mouse->button[button]= -(long)(current_time-stored_time);
if(mouse->button[button]==0)
mouse->button[button]= -1;
}
}
/*:203*/
#line 4664 "weaver-window_en.tex"

}
else if(event.message==WM_MBUTTONUP){
unsigned button= W_MOUSE_MIDDLE;
/*203:*/
#line 4758 "weaver-window_en.tex"

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
mouse->button[button]= 0;
else{

mouse->button[button]= -(long)(current_time-stored_time);
if(mouse->button[button]==0)
mouse->button[button]= -1;
}
}
/*:203*/
#line 4668 "weaver-window_en.tex"

}
else if(event.message==WM_RBUTTONUP){
unsigned button= W_MOUSE_RIGHT;
/*203:*/
#line 4758 "weaver-window_en.tex"

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
mouse->button[button]= 0;
else{

mouse->button[button]= -(long)(current_time-stored_time);
if(mouse->button[button]==0)
mouse->button[button]= -1;
}
}
/*:203*/
#line 4672 "weaver-window_en.tex"

}
else if(event.message==WM_XBUTTONUP){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*203:*/
#line 4758 "weaver-window_en.tex"

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
mouse->button[button]= 0;
else{

mouse->button[button]= -(long)(current_time-stored_time);
if(mouse->button[button]==0)
mouse->button[button]= -1;
}
}
/*:203*/
#line 4679 "weaver-window_en.tex"

}
/*:199*//*200:*/
#line 4687 "weaver-window_en.tex"

if(event.message==WM_MOUSEMOVE){
int x,y;
x= (event.lParam&0xffff);
y= (window_size_y-1)-(event.lParam>>16);
/*206:*/
#line 4838 "weaver-window_en.tex"

/*207:*/
#line 4866 "weaver-window_en.tex"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
/*:207*/
#line 4839 "weaver-window_en.tex"

{
if(mouse_initialization<3){
mouse->dx= (x-mouse->x);
mouse->dy= (y-mouse->y);
}
mouse->x= x;
mouse->y= y;
if(mouse_initialization<2){
mouse->ddx= (mouse->dx-last_mouse_dx);
mouse->ddy= (mouse->dy-last_mouse_dy);
}
last_mouse_dx= mouse->dx;
last_mouse_dy= mouse->dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:206*/
#line 4692 "weaver-window_en.tex"

}
/*:200*/
#line 3789 "weaver-window_en.tex"

}
#endif
/*:161*/
#line 3742 "weaver-window_en.tex"

/*181:*/
#line 4328 "weaver-window_en.tex"

{
int i;

keyboard->key[W_ANY]= (pressed_keys[0].key!=0);
for(i= 0;i<32;i++){
if(pressed_keys[i].key==0)
break;
if(current_time> pressed_keys[i].time)
keyboard->key[pressed_keys[i].key]= (current_time-pressed_keys[i].time);
}
}
/*:181*//*204:*/
#line 4797 "weaver-window_en.tex"

{
int i;

mouse->button[W_ANY]= (pressed_buttons[0].button!=0);
for(i= 0;i<4;i++){
if(pressed_buttons[i].button==0)
break;
if(current_time> pressed_buttons[i].time)
mouse->button[pressed_buttons[i].button]= 
(current_time-pressed_buttons[i].time);
}
}
/*:204*//*205:*/
#line 4818 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
if(released_buttons[i]==0)
break;
mouse->button[released_buttons[i]]= 0;
released_buttons[i]= 0;
}
}
/*:205*/
#line 3743 "weaver-window_en.tex"

}
/*:158*//*208:*/
#line 4886 "weaver-window_en.tex"

void _Wflush_window_input(struct _Wkeyboard*keyboard,
struct _Wmouse*mouse){

_Wget_window_input(~0x0,keyboard,mouse);

/*163:*/
#line 3828 "weaver-window_en.tex"

{
int i;
for(i= 0;i<32;i++){
pressed_keys[i].key= 0;
released_keys[i]= 0;
}
for(i= 0;i<W_KEYBOARD_SIZE+1;i++)
keyboard->key[i]= 0;

}
/*:163*/
#line 4892 "weaver-window_en.tex"


/*186:*/
#line 4425 "weaver-window_en.tex"

{
int i;
for(i= 0;i<4;i++){
pressed_buttons[i].button= 0;
released_buttons[i]= 0;
}
for(i= 0;i<W_MOUSE_SIZE;i++)
mouse->button[i]= 0;
mouse->x= mouse->y= mouse->dx= mouse->dy= mouse->ddx= mouse->ddy= 0;
last_mouse_dx= last_mouse_dy= 0;
mouse_initialization= 3;
/*191:*/
#line 4518 "weaver-window_en.tex"

#if defined(__linux__) || defined(BSD)
{
int x,y;
Window root_return,child_return;
int root_x_return,root_y_return;
unsigned mask_return;
XQueryPointer(display,window,&root_return,&child_return,
&root_x_return,&root_y_return,&x,&y,&mask_return);

y= (window_size_y-1)-y;
/*206:*/
#line 4838 "weaver-window_en.tex"

/*207:*/
#line 4866 "weaver-window_en.tex"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
/*:207*/
#line 4839 "weaver-window_en.tex"

{
if(mouse_initialization<3){
mouse->dx= (x-mouse->x);
mouse->dy= (y-mouse->y);
}
mouse->x= x;
mouse->y= y;
if(mouse_initialization<2){
mouse->ddx= (mouse->dx-last_mouse_dx);
mouse->ddy= (mouse->dy-last_mouse_dy);
}
last_mouse_dx= mouse->dx;
last_mouse_dy= mouse->dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:206*/
#line 4529 "weaver-window_en.tex"

}
#endif
/*:191*//*196:*/
#line 4593 "weaver-window_en.tex"

#if defined(__EMSCRIPTEN__)
{
int x,y;
SDL_GetMouseState(&x,&y);

y= (window_size_y-1)-y;
/*206:*/
#line 4838 "weaver-window_en.tex"

/*207:*/
#line 4866 "weaver-window_en.tex"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
/*:207*/
#line 4839 "weaver-window_en.tex"

{
if(mouse_initialization<3){
mouse->dx= (x-mouse->x);
mouse->dy= (y-mouse->y);
}
mouse->x= x;
mouse->y= y;
if(mouse_initialization<2){
mouse->ddx= (mouse->dx-last_mouse_dx);
mouse->ddy= (mouse->dy-last_mouse_dy);
}
last_mouse_dx= mouse->dx;
last_mouse_dy= mouse->dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:206*/
#line 4600 "weaver-window_en.tex"

}
#endif
/*:196*//*201:*/
#line 4705 "weaver-window_en.tex"

#if defined(_WIN32)
{
int x,y;
POINT point;

GetCursorPos(&point);

ScreenToClient(window,&point);

x= point.x;
y= (window_size_y-1)-point.y;
/*206:*/
#line 4838 "weaver-window_en.tex"

/*207:*/
#line 4866 "weaver-window_en.tex"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
/*:207*/
#line 4839 "weaver-window_en.tex"

{
if(mouse_initialization<3){
mouse->dx= (x-mouse->x);
mouse->dy= (y-mouse->y);
}
mouse->x= x;
mouse->y= y;
if(mouse_initialization<2){
mouse->ddx= (mouse->dx-last_mouse_dx);
mouse->ddy= (mouse->dy-last_mouse_dy);
}
last_mouse_dx= mouse->dx;
last_mouse_dy= mouse->dy;
if(mouse_initialization> 0)
mouse_initialization--;
}
/*:206*/
#line 4717 "weaver-window_en.tex"

}
#endif
/*:201*/
#line 4437 "weaver-window_en.tex"

}
/*:186*/
#line 4894 "weaver-window_en.tex"

}
/*:208*/
#line 4912 "weaver-window_en.tex"

/*:209*/
