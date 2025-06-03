/*213:*/
#line 4696 "weaver-window.cweb"

#include "window.h"
#include <stdio.h> 
/*2:*/
#line 264 "weaver-window.cweb"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
#line 268 "weaver-window.cweb"
/*:2*//*16:*/
#line 449 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#include <X11/Xlib.h> 
#include <X11/Xutil.h> 
#endif
#line 454 "weaver-window.cweb"
/*:16*//*46:*/
#line 1073 "weaver-window.cweb"

#if defined(_WIN32)
#include <string.h> 
#endif
#line 1077 "weaver-window.cweb"
/*:46*//*77:*/
#line 1662 "weaver-window.cweb"

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
/*:77*//*136:*/
#line 2832 "weaver-window.cweb"

#if defined(_WIN32) && !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 4
#define W_WINDOW_OPENGL_MINOR_VERSION 1
#elif defined(__EMSCRIPTEN__) && !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#line 2837 "weaver-window.cweb"
#define W_WINDOW_OPENGL_MAJOR_VERSION 2
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#elif !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#line 2840 "weaver-window.cweb"
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
#line 2843 "weaver-window.cweb"
/*:136*//*154:*/
#line 3313 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#include <sys/time.h> 
#endif
#line 3317 "weaver-window.cweb"
/*:154*//*172:*/
#line 3819 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#include <X11/XKBlib.h> 
#endif
#line 3823 "weaver-window.cweb"
/*:172*/
#line 4699 "weaver-window.cweb"

/*70:*/
#line 1511 "weaver-window.cweb"

#if defined(_WIN32)
static void*load_function(const char*name){
void*ret= wglGetProcAddress(name);
if(ret==NULL||ret==(void*)-1||ret==(void*)0x1||
ret==(void*)0x2||ret==(void*)0x3){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Function '%s' not supported.\n",name);
#endif
#line 1520 "weaver-window.cweb"
 return NULL;
}
return ret;
}
#endif
#line 1525 "weaver-window.cweb"
/*:70*/
#line 4700 "weaver-window.cweb"

/*72:*/
#line 1553 "weaver-window.cweb"

#if defined(_WIN32)
BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,UINT,
int*,UINT*);
HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
#line 1559 "weaver-window.cweb"
/*:72*//*79:*/
#line 1699 "weaver-window.cweb"

#if defined(_WIN32)
GLuint(__stdcall*glCreateShader)(GLenum shaderType);
void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
void(__stdcall*glCompileShader)(GLuint);
void(__stdcall*glReleaseShaderCompiler)(void);
void(__stdcall*glDeleteShader)(GLuint);
#endif
#line 1708 "weaver-window.cweb"
/*:79*//*84:*/
#line 1779 "weaver-window.cweb"

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
#line 1793 "weaver-window.cweb"
/*:84*//*92:*/
#line 1916 "weaver-window.cweb"

#if defined(_WIN32)
GLuint(__stdcall*glCreateProgram)(void);
void(__stdcall*glAttachShader)(GLuint,GLuint);
void(__stdcall*glDetachShader)(GLuint,GLuint);
void(__stdcall*glLinkProgram)(GLuint);
void(__stdcall*glUseProgram)(GLuint);
void(__stdcall*glDeleteProgram)(GLuint);
#endif
#line 1925 "weaver-window.cweb"
/*:92*//*95:*/
#line 1962 "weaver-window.cweb"

#if defined(_WIN32)
GLboolean(__stdcall*glIsProgram)(GLuint);
void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glValidadeProgram)(GLuint);
#endif
#line 1969 "weaver-window.cweb"
/*:95*//*99:*/
#line 2019 "weaver-window.cweb"

#if defined(_WIN32)
void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*);
GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
#line 2026 "weaver-window.cweb"
/*:99*//*103:*/
#line 2093 "weaver-window.cweb"

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
#line 2118 "weaver-window.cweb"
/*:103*//*107:*/
#line 2233 "weaver-window.cweb"

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
#line 2248 "weaver-window.cweb"
/*:107*//*111:*/
#line 2318 "weaver-window.cweb"

#if defined(_WIN32)
void(__stdcall*glGenBuffers)(GLsizei,GLuint*);
void(__stdcall*glDeleteBuffers)(GLsizei,const GLuint*);
void(__stdcall*glBindBuffer)(GLenum,GLuint);
void(__stdcall*glBufferData)(GLenum,GLsizeiptr,const void*,GLenum);
void(__stdcall*glBufferSubData)(GLenum,GLintptr,GLsizeiptr,const void*);
void(__stdcall*glIsBuffer)(GLuint);
void(__stdcall*glGetBufferParameteriv)(GLenum,GLenum,GLint*);
#endif
#line 2328 "weaver-window.cweb"
/*:111*//*118:*/
#line 2410 "weaver-window.cweb"

#if defined(_WIN32)
void(__stdcall*glDepthRangef)(GLclampf,GLclampf);
#endif
#line 2414 "weaver-window.cweb"
/*:118*//*122:*/
#line 2450 "weaver-window.cweb"

#if defined(_WIN32)
void(__stdcall*glActiveTexture)(GLenum);
void(__stdcall*glCompressedTexImage2D)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*);
void(__stdcall*glCompressedTexSubImage2D)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,
void*);
void(__stdcall*glGenerateMipmap)(GLenum);
#endif
#line 2460 "weaver-window.cweb"
/*:122*//*126:*/
#line 2561 "weaver-window.cweb"

#if defined(_WIN32)
void(__stdcall*glSampleCoverage)(GLclampf,bool);
void(__stdcall*glStencilFuncSeparate)(GLenum,GLenum,int,unsigned int);
void(__stdcall*glStencilOpSeparate)(GLenum,GLenum,GLenum,GLenum);
void(__stdcall*glBlendEquation)(GLenum);
void(__stdcall*glBlendEquationSeparate)(GLenum,GLenum);
void(__stdcall*glBlendFuncSeparate)(GLenum,GLenum);
void(__stdcall*glBlendColor)(GLclampf,GLclampf,GLclampf,GLclampf);
#endif
#line 2571 "weaver-window.cweb"
/*:126*//*130:*/
#line 2654 "weaver-window.cweb"

#if defined(_WIN32)
void(__stdcall*glStencilMaskSeparate)(GLenum,unsigned int);
void(__stdcall*glClearDepthf)(GLclampf);
#endif
#line 2659 "weaver-window.cweb"
/*:130*//*133:*/
#line 2698 "weaver-window.cweb"

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
#line 2718 "weaver-window.cweb"
/*:133*//*174:*/
#line 3845 "weaver-window.cweb"

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
W_X= W_KEYBOARD_SIZE,W_Y= W_KEYBOARD_SIZE,W_Z= W_KEYBOARD_SIZE,
W_INSERT= W_KEYBOARD_SIZE,W_HOME= W_KEYBOARD_SIZE,
W_PAGE_UP= W_KEYBOARD_SIZE,W_DELETE= W_KEYBOARD_SIZE,
W_END= W_KEYBOARD_SIZE,W_PAGE_DOWN= W_KEYBOARD_SIZE,
W_ESC= W_KEYBOARD_SIZE,W_ANY= 0;
/*:174*/
#line 4701 "weaver-window.cweb"

/*15:*/
#line 417 "weaver-window.cweb"

static int window_size_y= 0,window_size_x= 0;
/*:15*//*18:*/
#line 496 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
static Display*display= NULL;
#endif
#line 500 "weaver-window.cweb"
/*:18*//*25:*/
#line 668 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
static Window window;
#endif
#line 672 "weaver-window.cweb"
/*:25*//*39:*/
#line 957 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
static bool fullscreen_mode= false;
#endif
#line 961 "weaver-window.cweb"
/*:39*//*40:*/
#line 977 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
#line 981 "weaver-window.cweb"
/*:40*//*42:*/
#line 998 "weaver-window.cweb"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
#line 1002 "weaver-window.cweb"
/*:42*//*47:*/
#line 1082 "weaver-window.cweb"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
#line 1086 "weaver-window.cweb"
/*:47*//*49:*/
#line 1132 "weaver-window.cweb"

#if defined(_WIN32)
static HWND window;
#endif
#line 1136 "weaver-window.cweb"
/*:49*//*53:*/
#line 1188 "weaver-window.cweb"

static bool already_have_window= false;
/*:53*//*56:*/
#line 1233 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
static EGLDisplay*egl_display;
#endif
#line 1237 "weaver-window.cweb"
/*:56*//*58:*/
#line 1275 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
EGLConfig egl_config;
#endif
#line 1279 "weaver-window.cweb"
/*:58*//*60:*/
#line 1299 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
static EGLSurface egl_window;
#endif
#line 1303 "weaver-window.cweb"
/*:60*//*62:*/
#line 1331 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
static EGLContext egl_context;
#endif
#line 1335 "weaver-window.cweb"
/*:62*//*65:*/
#line 1374 "weaver-window.cweb"

#if defined(_WIN32)
static HGLRC wgl_context;
static HDC device_context;
#endif
#line 1379 "weaver-window.cweb"
/*:65*//*149:*/
#line 3186 "weaver-window.cweb"

#if defined(W_WINDOW_SIZE_X) && defined(W_WINDOW_SIZE_Y)
static unsigned last_window_size_x= W_WINDOW_SIZE_X;
static unsigned last_window_size_y= W_WINDOW_SIZE_Y;
#else
#line 3191 "weaver-window.cweb"
 static unsigned last_window_size_x= 0;
static unsigned last_window_size_y= 0;
#endif
#line 3194 "weaver-window.cweb"
/*:149*//*150:*/
#line 3204 "weaver-window.cweb"

static void(*resizing_function)(int,int,int,int)= NULL;
/*:150*//*166:*/
#line 3675 "weaver-window.cweb"

static struct{
unsigned key;
unsigned long long time;
}pressed_keys[32];
static unsigned released_keys[32];
/*:166*//*187:*/
#line 4211 "weaver-window.cweb"

static struct{
unsigned button;
unsigned long long time;
}pressed_buttons[4];
static unsigned released_buttons[4];
/*:187*//*188:*/
#line 4224 "weaver-window.cweb"

static int last_mouse_dx= 0,last_mouse_dy= 0;
/*:188*//*189:*/
#line 4244 "weaver-window.cweb"

static int mouse_initialization= 3;
/*:189*/
#line 4702 "weaver-window.cweb"

/*17:*/
#line 465 "weaver-window.cweb"

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
#line 492 "weaver-window.cweb"
/*:17*//*19:*/
#line 510 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
bool _Wget_screen_dpi(int*dpi_x,int*dpi_y){
int resolution_x,resolution_y;
double xres,yres;
if(!_Wget_screen_resolution(&resolution_x,&resolution_y)){
*dpi_x= *dpi_y= 0;
return false;
}
xres= ((((double)resolution_x)*25.4)/
((double)DisplayWidthMM(display,0)));
yres= ((((double)resolution_y)*25.4)/
((double)DisplayHeightMM(display,0)));
*dpi_x= (int)(xres+0.5);
*dpi_y= (int)(yres+0.5);
return true;
}
#endif
#line 528 "weaver-window.cweb"
/*:19*//*20:*/
#line 537 "weaver-window.cweb"

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
#line 549 "weaver-window.cweb"
/*:20*//*21:*/
#line 562 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
bool _Wget_screen_dpi(int*dpi_x,int*dpi_y){
*dpi_x= emscripten_get_device_pixel_ratio()*96.0;
*dpi_y= *dpi_x;
return true;
}
#endif
#line 570 "weaver-window.cweb"
/*:21*//*22:*/
#line 577 "weaver-window.cweb"

#if defined(_WIN32)
bool _Wget_screen_resolution(int*resolution_x,int*resolution_y){
*resolution_x= GetSystemMetrics(SM_CXSCREEN);
*resolution_y= GetSystemMetrics(SM_CYSCREEN);
return true;
}
#endif
#line 585 "weaver-window.cweb"
/*:22*//*23:*/
#line 589 "weaver-window.cweb"

#if defined(_WIN32)
bool _Wget_screen_dpi(int*dpi_x,int*dpi_y){
HMONITOR monitor;
monitor= MonitorFromWindow(window,MONITOR_DEFAULTTOPRIMARY);
if(GetDpiForMonitor(monitor,MDT_EFFECTIVE_DPI,dpi_x,dpi_y)!=S_OK){
*dpi_x= *dpi_y= 0;
return false;
}
return true;
}
#endif
#line 601 "weaver-window.cweb"
/*:23*//*43:*/
#line 1013 "weaver-window.cweb"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*44:*/
#line 1029 "weaver-window.cweb"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:44*/
#line 1017 "weaver-window.cweb"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
#line 1023 "weaver-window.cweb"
/*:43*//*52:*/
#line 1171 "weaver-window.cweb"

bool _Wcreate_window(struct _Wkeyboard*keyboard,struct _Wmouse*mouse){
if(already_have_window==true)
return false;
/*24:*/
#line 636 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
int screen_resolution_x,screen_resolution_y;

XInitThreads();

display= XOpenDisplay(NULL);
if(display==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to connect to X11 server.\n");
#endif
#line 647 "weaver-window.cweb"
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
#line 663 "weaver-window.cweb"
/*:24*//*26:*/
#line 684 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#if !defined(W_WINDOW_NO_FULLSCREEN)
{
XSetWindowAttributes attributes;
XMoveWindow(display,window,0,0);
attributes.override_redirect= true;
XChangeWindowAttributes(display,window,CWOverrideRedirect,
&attributes);
}
#endif
#line 695 "weaver-window.cweb"
#endif
#line 696 "weaver-window.cweb"
/*:26*//*27:*/
#line 709 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
#if defined(W_WINDOW_NO_FULLSCREEN)
{
#if W_WINDOW_SIZE_X >  0
window_size_x= W_WINDOW_SIZE_X;
#else
#line 716 "weaver-window.cweb"
 window_size_x= screen_resolution_x;
#endif
#line 718 "weaver-window.cweb"
#if W_WINDOW_SIZE_Y >  0
window_size_y= W_WINDOW_SIZE_Y;
#else
#line 721 "weaver-window.cweb"
 window_size_y= screen_resolution_y;
#endif
#line 723 "weaver-window.cweb"
 XResizeWindow(display,window,window_size_x,window_size_y);
}
#endif
#line 726 "weaver-window.cweb"
#endif
#line 727 "weaver-window.cweb"
/*:27*//*28:*/
#line 732 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
{
XSizeHints hints;
hints.flags= PMinSize|PMaxSize;
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_SIZE_X >  0
hints.min_width= hints.max_width= W_WINDOW_SIZE_X;
#else
#line 740 "weaver-window.cweb"
 hints.min_width= hints.max_width= screen_resolution_x;
#endif
#line 742 "weaver-window.cweb"
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_SIZE_Y >  0
hints.min_height= hints.max_height= W_WINDOW_SIZE_Y;
#else
#line 745 "weaver-window.cweb"
 hints.min_height= hints.max_height= screen_resolution_y;
#endif
#line 747 "weaver-window.cweb"
 XSetWMNormalHints(display,window,&hints);
}
#endif
#line 750 "weaver-window.cweb"
/*:28*//*30:*/
#line 774 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
#line 780 "weaver-window.cweb"
/*:30*//*31:*/
#line 787 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
XStoreName(display,window,W_WINDOW_NAME);
#endif
#line 791 "weaver-window.cweb"
/*:31*//*33:*/
#line 804 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
/*55:*/
#line 1219 "weaver-window.cweb"

egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
#line 1226 "weaver-window.cweb"
 return false;
}
eglInitialize(egl_display,NULL,NULL);
/*:55*//*57:*/
#line 1243 "weaver-window.cweb"

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
#line 1268 "weaver-window.cweb"
 return false;
}
}
/*:57*//*59:*/
#line 1286 "weaver-window.cweb"

egl_window= eglCreateWindowSurface(egl_display,egl_config,window,
NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
#line 1293 "weaver-window.cweb"
 return false;
}
/*:59*//*61:*/
#line 1310 "weaver-window.cweb"

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
#line 1323 "weaver-window.cweb"
 return false;
}
eglMakeCurrent(egl_display,egl_window,egl_window,egl_context);
}
/*:61*/
#line 806 "weaver-window.cweb"

#endif
#line 808 "weaver-window.cweb"
/*:33*//*34:*/
#line 818 "weaver-window.cweb"

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
#line 829 "weaver-window.cweb"
/*:34*/
#line 1175 "weaver-window.cweb"

/*36:*/
#line 865 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
#line 870 "weaver-window.cweb"
/*:36*//*37:*/
#line 876 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
#line 880 "weaver-window.cweb"
/*:37*//*38:*/
#line 892 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
{
fullscreen_mode= true;
double pixel_ratio= EM_ASM_DOUBLE({
return window.devicePixelRatio;
});
window_size_x= EM_ASM_INT({
return window.innerWidth*window.devicePixelRatio;;
});
window_size_y= EM_ASM_INT({
return window.innerHeight*window.devicePixelRatio;;
});
#if defined(W_WINDOW_NO_FULLSCREEN)
fullscreen_mode= false;
#if defined(W_WINDOW_SIZE_X) && W_Window_Size_X >  0
window_size_x= W_Window_Size_X;
#endif
#line 910 "weaver-window.cweb"
#if defined(W_WINDOW_SIZE_Y) && W_Window_Size_Y >  0
window_size_y= W_Window_Size_Y;
#endif
#line 913 "weaver-window.cweb"
#endif
#line 914 "weaver-window.cweb"

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
#line 943 "weaver-window.cweb"
/*:38*/
#line 1176 "weaver-window.cweb"

/*41:*/
#line 987 "weaver-window.cweb"

#if defined(_WIN32)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
#line 992 "weaver-window.cweb"
/*:41*//*45:*/
#line 1044 "weaver-window.cweb"

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
#line 1061 "weaver-window.cweb"
 return false;
}
already_created_a_class= true;
}
#endif
#line 1066 "weaver-window.cweb"
/*:45*//*48:*/
#line 1091 "weaver-window.cweb"

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
#line 1106 "weaver-window.cweb"
#if defined(W_WINDOW_SIZE_Y) && W_WINDOW_SIZE_Y >  0
window_size_y= W_WINDOW_SIZE_Y;
#endif
#line 1109 "weaver-window.cweb"
#endif
#line 1110 "weaver-window.cweb"
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
#line 1123 "weaver-window.cweb"
 return false;
}
}
#endif
#line 1127 "weaver-window.cweb"
/*:48*//*50:*/
#line 1141 "weaver-window.cweb"

#if defined(_WIN32)
/*64:*/
#line 1367 "weaver-window.cweb"

device_context= GetDC(window);
/*:64*//*66:*/
#line 1406 "weaver-window.cweb"

{
/*67:*/
#line 1419 "weaver-window.cweb"

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
#line 1441 "weaver-window.cweb"
 return false;
}
}
/*:67*/
#line 1408 "weaver-window.cweb"

/*68:*/
#line 1450 "weaver-window.cweb"

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
#line 1471 "weaver-window.cweb"
 return false;
}
if(!SetPixelFormat(dummy_device_context,chosen_pixel_format,&pixel_format)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to set a pixel format. SysError: %d\n",
GetLastError());
#endif
#line 1478 "weaver-window.cweb"
 return false;
}

/*:68*//*69:*/
#line 1486 "weaver-window.cweb"


dummy_context= wglCreateContext(dummy_device_context);
if(dummy_context==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed creating dummy OpenGL context. SysError: %d\n",
GetLastError());
#endif
#line 1494 "weaver-window.cweb"
 return false;
}
if(!wglMakeCurrent(dummy_device_context,dummy_context)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed setting dummy OpenGL context. SysError: %d\n",
GetLastError());
#endif
#line 1501 "weaver-window.cweb"
 return false;
}
}
/*:69*/
#line 1409 "weaver-window.cweb"

/*73:*/
#line 1565 "weaver-window.cweb"

wglChoosePixelFormatARB= (BOOL(__stdcall*)(HDC,const int*,const FLOAT*,
UINT,int*,UINT*))
load_function("wglChoosePixelFormatARB");
if(wglChoosePixelFormatARB==NULL)return false;
wglCreateContextAttribsARB= (HGLRC(*)(HDC,HGLRC,const int*))
load_function("wglCreateContextAttribsARB");
if(wglCreateContextAttribsARB==NULL)return false;
/*:73*/
#line 1410 "weaver-window.cweb"

/*74:*/
#line 1578 "weaver-window.cweb"

wglMakeCurrent(dummy_device_context,0);
wglDeleteContext(dummy_context);
ReleaseDC(dummy_window,dummy_device_context);
DestroyWindow(dummy_window);
/*:74*/
#line 1411 "weaver-window.cweb"

}
/*:66*//*75:*/
#line 1588 "weaver-window.cweb"

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
#line 1609 "weaver-window.cweb"
 return false;
}
if(number_of_formats==0){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,
"ERROR: no pixel format returned by 'wglChoosePixelFormatARB'.\n");
#endif
#line 1616 "weaver-window.cweb"
 return false;
}
DescribePixelFormat(device_context,pixel_format_index,
sizeof(pixel_format_descriptor),&pixel_format_descriptor);
if(!SetPixelFormat(device_context,pixel_format_index,
&pixel_format_descriptor)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'SetPixelFormat' failed.\n");
#endif
#line 1625 "weaver-window.cweb"
 return false;
}
}
/*:75*//*76:*/
#line 1635 "weaver-window.cweb"

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
#line 1647 "weaver-window.cweb"
 return false;
}
if(!wglMakeCurrent(device_context,wgl_context)){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: 'wglMakeCurrent' failed.\n");
#endif
#line 1653 "weaver-window.cweb"
 return false;
}
}
/*:76*//*80:*/
#line 1714 "weaver-window.cweb"

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
/*:80*//*85:*/
#line 1798 "weaver-window.cweb"

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
/*:85*//*93:*/
#line 1929 "weaver-window.cweb"

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
/*:93*//*96:*/
#line 1973 "weaver-window.cweb"

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
/*:96*//*100:*/
#line 2030 "weaver-window.cweb"

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
/*:100*//*104:*/
#line 2122 "weaver-window.cweb"

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
/*:104*//*108:*/
#line 2252 "weaver-window.cweb"

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
/*:108*//*112:*/
#line 2332 "weaver-window.cweb"

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
/*:112*//*119:*/
#line 2418 "weaver-window.cweb"

glDepthRangef= (void(__stdcall*)(GLclampf,GLclampf))
load_function("glDepthRangef");
if(glDepthRangef==NULL)return false;
/*:119*//*123:*/
#line 2464 "weaver-window.cweb"

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
/*:123*//*127:*/
#line 2575 "weaver-window.cweb"

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
/*:127*//*131:*/
#line 2663 "weaver-window.cweb"

glStencilMaskSeparate= (void(__stdcall*)(GLenum,unsigned int))
load_function("glStencilMaskSeparate");
if(glStencilMaskSeparate==NULL)return false;
glClearDepthf= (void(__stdcall*)(GLclampf))load_function("glClearDepthf");
if(glClearDepthf==NULL)return false;
/*:131*//*134:*/
#line 2722 "weaver-window.cweb"

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
/*:134*/
#line 1143 "weaver-window.cweb"

#endif
#line 1145 "weaver-window.cweb"
/*:50*//*51:*/
#line 1151 "weaver-window.cweb"

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
#line 1161 "weaver-window.cweb"
/*:51*/
#line 1177 "weaver-window.cweb"

/*171:*/
#line 3756 "weaver-window.cweb"

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
case XK_space:W_SPACE= i;break;
case XK_a:W_A= i;break;case XK_b:W_B= i;break;
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
#line 3815 "weaver-window.cweb"
/*:171*//*178:*/
#line 3921 "weaver-window.cweb"

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
#line 3979 "weaver-window.cweb"
/*:178*//*182:*/
#line 4022 "weaver-window.cweb"

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
#line 4079 "weaver-window.cweb"
/*:182*/
#line 1178 "weaver-window.cweb"

_Wflush_window_input(keyboard,mouse);
already_have_window= true;
return true;
}
/*:52*//*137:*/
#line 2860 "weaver-window.cweb"

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
#line 2877 "weaver-window.cweb"
/*:137*//*138:*/
#line 2886 "weaver-window.cweb"

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
#line 2900 "weaver-window.cweb"
/*:138*//*139:*/
#line 2907 "weaver-window.cweb"

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
#line 2919 "weaver-window.cweb"
/*:139*//*140:*/
#line 2952 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
bool _Wrender_window(void){
if(_Wis_fullscreen()){
Window focused_window;
int focus_status;
XGetInputFocus(display,&focused_window,&focus_status);
if(focused_window!=window){
XWindowAttributes attr;
XGetWindowAttributes(display,window,&attr);
if(attr.map_state==IsViewable)
XSetInputFocus(display,window,RevertToParent,CurrentTime);
}
}
return eglSwapBuffers(egl_display,egl_window);
}
#endif
#line 2969 "weaver-window.cweb"
/*:140*//*141:*/
#line 2987 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
#line 2994 "weaver-window.cweb"
/*:141*//*142:*/
#line 3002 "weaver-window.cweb"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
#line 3008 "weaver-window.cweb"
/*:142*//*143:*/
#line 3023 "weaver-window.cweb"

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
#line 3041 "weaver-window.cweb"
/*:143*//*144:*/
#line 3051 "weaver-window.cweb"

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
#line 3076 "weaver-window.cweb"
/*:144*//*145:*/
#line 3084 "weaver-window.cweb"

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
#line 3104 "weaver-window.cweb"
/*:145*//*146:*/
#line 3120 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
bool _Wis_fullscreen(void){
XWindowAttributes attributes;
if(!already_have_window||display==NULL)
return false;
XGetWindowAttributes(display,window,&attributes);
return(attributes.override_redirect==true);
}
#endif
#line 3130 "weaver-window.cweb"
/*:146*//*147:*/
#line 3140 "weaver-window.cweb"

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
#line 3153 "weaver-window.cweb"
/*:147*//*148:*/
#line 3162 "weaver-window.cweb"

#if defined(_WIN32)
bool _Wis_fullscreen(void){
DWORD window_style= GetWindowLongA(window,GWL_STYLE);
return(window_style&WS_POPUP);
}
#endif
#line 3169 "weaver-window.cweb"
/*:148*//*151:*/
#line 3211 "weaver-window.cweb"

void _Wset_resize_function(void(*func)(int,int,int,int)){
resizing_function= func;
}
/*:151*//*152:*/
#line 3234 "weaver-window.cweb"

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
/*153:*/
#line 3296 "weaver-window.cweb"

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
/*:153*/
#line 3263 "weaver-window.cweb"

}
else{
new_size_x= ((last_window_size_x> 0)?(last_window_size_x):(800));
new_size_y= ((last_window_size_y> 0)?(last_window_size_y):(600));
XResizeWindow(display,window,new_size_x,new_size_y);
/*153:*/
#line 3296 "weaver-window.cweb"

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
/*:153*/
#line 3269 "weaver-window.cweb"

}
_Wget_window_size(&new_size_x,&new_size_y);
glViewport(0,0,new_size_x,new_size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
#line 3277 "weaver-window.cweb"
/*:152*//*155:*/
#line 3341 "weaver-window.cweb"

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
el.style.width= window.innerWidth+"px";
el.style.height= window.innerHeight+"px";
el.width= (window.innerWidth*window.devicePixelRatio);
el.height= (window.innerHeight*window.devicePixelRatio);
);
fullscreen_mode= true;
}
_Wget_window_size(&new_size_x,&new_size_y);
glViewport(0,0,new_size_x,new_size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
#line 3386 "weaver-window.cweb"
/*:155*//*156:*/
#line 3394 "weaver-window.cweb"

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
glViewport(0,0,new_size_x,new_size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
#line 3422 "weaver-window.cweb"
/*:156*//*157:*/
#line 3447 "weaver-window.cweb"

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
/*153:*/
#line 3296 "weaver-window.cweb"

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
/*:153*/
#line 3464 "weaver-window.cweb"

glViewport(0,0,width,height);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,width,height);
return true;
}
#endif
#line 3471 "weaver-window.cweb"
/*:157*//*158:*/
#line 3480 "weaver-window.cweb"

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
#line 3502 "weaver-window.cweb"
/*:158*//*159:*/
#line 3512 "weaver-window.cweb"

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
#line 3531 "weaver-window.cweb"
/*:159*//*162:*/
#line 3604 "weaver-window.cweb"

void _Wget_window_input(unsigned long long current_time,
struct _Wkeyboard*keyboard,
struct _Wmouse*mouse){
if(already_have_window==false)
return;
/*186:*/
#line 4191 "weaver-window.cweb"

{
int i;
for(i= 0;i<32;i++){
if(released_keys[i]==0)
break;
keyboard->key[released_keys[i]]= 0;
released_keys[i]= 0;
}
}
/*:186*//*209:*/
#line 4615 "weaver-window.cweb"

{
int i;
for(i= 0;i<4;i++){
if(released_buttons[i]==0)
break;
mouse->button[released_buttons[i]]= 0;
released_buttons[i]= 0;
}
}
/*:209*/
#line 3610 "weaver-window.cweb"

/*163:*/
#line 3621 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
XEvent event;
while(XPending(display)){
XNextEvent(display,&event);
/*169:*/
#line 3725 "weaver-window.cweb"

if(event.type==KeyPress){
unsigned key= event.xkey.keycode;
/*183:*/
#line 4099 "weaver-window.cweb"

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
/*:183*/
#line 3728 "weaver-window.cweb"

}
/*:169*//*170:*/
#line 3736 "weaver-window.cweb"

if(event.type==KeyRelease){
unsigned key= event.xkey.keycode;
/*184:*/
#line 4125 "weaver-window.cweb"

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
/*:184*/
#line 3739 "weaver-window.cweb"

}
/*:170*//*192:*/
#line 4294 "weaver-window.cweb"

if(event.type==ButtonPress){
unsigned button= event.xbutton.button;
/*206:*/
#line 4535 "weaver-window.cweb"

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
/*:206*/
#line 4297 "weaver-window.cweb"

}
/*:192*//*193:*/
#line 4306 "weaver-window.cweb"

if(event.type==ButtonRelease){
unsigned button= event.xbutton.button;
/*207:*/
#line 4558 "weaver-window.cweb"

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
/*:207*/
#line 4309 "weaver-window.cweb"

}
/*:193*//*194:*/
#line 4316 "weaver-window.cweb"

if(event.type==MotionNotify){
int x,y;
x= event.xmotion.x;
y= (window_size_y-1)-event.xmotion.y;
/*210:*/
#line 4633 "weaver-window.cweb"

{
/*211:*/
#line 4659 "weaver-window.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4667 "weaver-window.cweb"
/*:211*/
#line 4635 "weaver-window.cweb"

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
/*:210*/
#line 4321 "weaver-window.cweb"

}
/*:194*/
#line 3626 "weaver-window.cweb"

}
#endif
#line 3629 "weaver-window.cweb"
/*:163*//*164:*/
#line 3634 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
SDL_Event event;
while(SDL_PollEvent(&event)){
/*176:*/
#line 3899 "weaver-window.cweb"

if(event.type==SDL_KEYDOWN){
unsigned key= event.key.keysym.scancode;
/*183:*/
#line 4099 "weaver-window.cweb"

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
/*:183*/
#line 3902 "weaver-window.cweb"

}
/*:176*//*177:*/
#line 3909 "weaver-window.cweb"

if(event.type==SDL_KEYUP){
unsigned key= event.key.keysym.scancode;
/*184:*/
#line 4125 "weaver-window.cweb"

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
/*:184*/
#line 3912 "weaver-window.cweb"

}
/*:177*//*197:*/
#line 4373 "weaver-window.cweb"

if(event.type==SDL_MOUSEBUTTONDOWN){
unsigned button= event.button.button;
/*206:*/
#line 4535 "weaver-window.cweb"

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
/*:206*/
#line 4376 "weaver-window.cweb"

}
/*:197*//*198:*/
#line 4382 "weaver-window.cweb"

if(event.type==SDL_MOUSEBUTTONUP){
unsigned button= event.button.button;
/*207:*/
#line 4558 "weaver-window.cweb"

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
/*:207*/
#line 4385 "weaver-window.cweb"

}
/*:198*//*199:*/
#line 4391 "weaver-window.cweb"

if(event.type==SDL_MOUSEMOTION){
int x,y;
x= event.motion.x;
y= (window_size_y-1)-event.motion.y;
/*210:*/
#line 4633 "weaver-window.cweb"

{
/*211:*/
#line 4659 "weaver-window.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4667 "weaver-window.cweb"
/*:211*/
#line 4635 "weaver-window.cweb"

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
/*:210*/
#line 4396 "weaver-window.cweb"

}
/*:199*/
#line 3638 "weaver-window.cweb"

}
#endif
#line 3641 "weaver-window.cweb"
/*:164*//*165:*/
#line 3646 "weaver-window.cweb"

#if defined(_WIN32)
MSG event;
while(PeekMessage(&event,window,WM_KEYFIRST,WM_KEYLAST,PM_REMOVE)){
/*180:*/
#line 4000 "weaver-window.cweb"

if(event.message==WM_KEYDOWN){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*183:*/
#line 4099 "weaver-window.cweb"

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
/*:183*/
#line 4003 "weaver-window.cweb"

}
/*:180*//*181:*/
#line 4012 "weaver-window.cweb"

if(event.message==WM_KEYUP){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*184:*/
#line 4125 "weaver-window.cweb"

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
/*:184*/
#line 4015 "weaver-window.cweb"

}
/*:181*/
#line 3650 "weaver-window.cweb"

}
while(PeekMessage(&event,window,WM_MOUSEFIRST,WM_MOUSELAST,PM_REMOVE)){
/*202:*/
#line 4441 "weaver-window.cweb"

if(event.message==WM_LBUTTONDOWN){
unsigned button= W_MOUSE_LEFT;
/*206:*/
#line 4535 "weaver-window.cweb"

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
/*:206*/
#line 4444 "weaver-window.cweb"

}
else if(event.message==WM_MBUTTONDOWN){
unsigned button= W_MOUSE_MIDDLE;
/*206:*/
#line 4535 "weaver-window.cweb"

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
/*:206*/
#line 4448 "weaver-window.cweb"

}
else if(event.message==WM_RBUTTONDOWN){
unsigned button= W_MOUSE_RIGHT;
/*206:*/
#line 4535 "weaver-window.cweb"

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
/*:206*/
#line 4452 "weaver-window.cweb"

}
else if(event.message==WM_XBUTTONDOWN){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*206:*/
#line 4535 "weaver-window.cweb"

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
/*:206*/
#line 4459 "weaver-window.cweb"

}
/*:202*//*203:*/
#line 4467 "weaver-window.cweb"

if(event.message==WM_LBUTTONUP){
unsigned button= W_MOUSE_LEFT;
/*207:*/
#line 4558 "weaver-window.cweb"

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
/*:207*/
#line 4470 "weaver-window.cweb"

}
else if(event.message==WM_MBUTTONUP){
unsigned button= W_MOUSE_MIDDLE;
/*207:*/
#line 4558 "weaver-window.cweb"

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
/*:207*/
#line 4474 "weaver-window.cweb"

}
else if(event.message==WM_RBUTTONUP){
unsigned button= W_MOUSE_RIGHT;
/*207:*/
#line 4558 "weaver-window.cweb"

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
/*:207*/
#line 4478 "weaver-window.cweb"

}
else if(event.message==WM_XBUTTONUP){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*207:*/
#line 4558 "weaver-window.cweb"

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
/*:207*/
#line 4485 "weaver-window.cweb"

}
/*:203*//*204:*/
#line 4491 "weaver-window.cweb"

if(event.message==WM_MOUSEMOVE){
int x,y;
x= (event.lParam&0xffff);
y= (window_size_y-1)-(event.lParam>>16);
/*210:*/
#line 4633 "weaver-window.cweb"

{
/*211:*/
#line 4659 "weaver-window.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4667 "weaver-window.cweb"
/*:211*/
#line 4635 "weaver-window.cweb"

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
/*:210*/
#line 4496 "weaver-window.cweb"

}
/*:204*/
#line 3653 "weaver-window.cweb"

}
#endif
#line 3656 "weaver-window.cweb"
/*:165*/
#line 3611 "weaver-window.cweb"

/*185:*/
#line 4165 "weaver-window.cweb"

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
/*:185*//*208:*/
#line 4596 "weaver-window.cweb"

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
/*:208*/
#line 3612 "weaver-window.cweb"

}
/*:162*//*212:*/
#line 4679 "weaver-window.cweb"

void _Wflush_window_input(struct _Wkeyboard*keyboard,
struct _Wmouse*mouse){

_Wget_window_input(~0x0,keyboard,mouse);

/*167:*/
#line 3693 "weaver-window.cweb"

{
int i;
for(i= 0;i<32;i++){
pressed_keys[i].key= 0;
released_keys[i]= 0;
}
for(i= 0;i<W_KEYBOARD_SIZE+1;i++)
keyboard->key[i]= 0;
}
/*:167*/
#line 4685 "weaver-window.cweb"


/*190:*/
#line 4252 "weaver-window.cweb"

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
/*195:*/
#line 4337 "weaver-window.cweb"

#if defined(__linux__) || defined(BSD)
{
int x,y;
Window root_return,child_return;
int root_x_return,root_y_return;
unsigned mask_return;
XQueryPointer(display,window,&root_return,&child_return,
&root_x_return,&root_y_return,&x,&y,&mask_return);

y= (window_size_y-1)-y;
/*210:*/
#line 4633 "weaver-window.cweb"

{
/*211:*/
#line 4659 "weaver-window.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4667 "weaver-window.cweb"
/*:211*/
#line 4635 "weaver-window.cweb"

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
/*:210*/
#line 4348 "weaver-window.cweb"

}
#endif
#line 4351 "weaver-window.cweb"
/*:195*//*200:*/
#line 4403 "weaver-window.cweb"

#if defined(__EMSCRIPTEN__)
{
int x,y;
SDL_GetMouseState(&x,&y);

y= (window_size_y-1)-y;
/*210:*/
#line 4633 "weaver-window.cweb"

{
/*211:*/
#line 4659 "weaver-window.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4667 "weaver-window.cweb"
/*:211*/
#line 4635 "weaver-window.cweb"

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
/*:210*/
#line 4410 "weaver-window.cweb"

}
#endif
#line 4413 "weaver-window.cweb"
/*:200*//*205:*/
#line 4507 "weaver-window.cweb"

#if defined(_WIN32)
{
int x,y;
POINT point;

GetCursorPos(&point);

ScreenToClient(window,&point);

x= point.x;
y= (window_size_y-1)-point.y;
/*210:*/
#line 4633 "weaver-window.cweb"

{
/*211:*/
#line 4659 "weaver-window.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4667 "weaver-window.cweb"
/*:211*/
#line 4635 "weaver-window.cweb"

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
/*:210*/
#line 4519 "weaver-window.cweb"

}
#endif
#line 4522 "weaver-window.cweb"
/*:205*/
#line 4264 "weaver-window.cweb"

}
/*:190*/
#line 4687 "weaver-window.cweb"

}
/*:212*/
#line 4703 "weaver-window.cweb"

/*:213*/
