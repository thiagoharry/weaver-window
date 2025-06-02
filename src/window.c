/*213:*/
#line 4595 "weaver-window_en.cweb"

#include "window.h"
/*2:*/
#line 250 "weaver-window_en.cweb"

#if defined(W_DEBUG_WINDOW)
#include <stdio.h> 
#endif
#line 254 "weaver-window_en.cweb"
/*:2*//*16:*/
#line 429 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
#include <X11/Xlib.h> 
#include <X11/Xutil.h> 
#include <X11/X.h> 
#endif
#line 435 "weaver-window_en.cweb"
/*:16*//*29:*/
#line 736 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
#include <X11/Xutil.h> 
#endif
#line 740 "weaver-window_en.cweb"
/*:29*//*77:*/
#line 1627 "weaver-window_en.cweb"

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
#line 2790 "weaver-window_en.cweb"

#if defined(_WIN32) && !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#define W_WINDOW_OPENGL_MAJOR_VERSION 4
#define W_WINDOW_OPENGL_MINOR_VERSION 1
#elif defined(__EMSCRIPTEN__) && !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#line 2795 "weaver-window_en.cweb"
#define W_WINDOW_OPENGL_MAJOR_VERSION 2
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#elif !defined(W_WINDOW_OPENGL_MAJOR_VERSION)
#line 2798 "weaver-window_en.cweb"
#define W_WINDOW_OPENGL_MAJOR_VERSION 3
#define W_WINDOW_OPENGL_MINOR_VERSION 0
#endif
#line 2801 "weaver-window_en.cweb"
/*:136*//*154:*/
#line 3252 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
#include <sys/time.h> 
#endif
#line 3256 "weaver-window_en.cweb"
/*:154*//*172:*/
#line 3741 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
#include <X11/XKBlib.h> 
#endif
#line 3745 "weaver-window_en.cweb"
/*:172*/
#line 4597 "weaver-window_en.cweb"

/*70:*/
#line 1478 "weaver-window_en.cweb"

#if defined(_WIN32)
static void*load_function(const char*name){
void*ret= wglGetProcAddress(name);
if(ret==NULL||ret==(void*)-1||ret==(void*)0x1||
ret==(void*)0x2||ret==(void*)0x3){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Function '%s' not supported.\n",name);
#endif
#line 1487 "weaver-window_en.cweb"
 return NULL;
}
return ret;
}
#endif
#line 1492 "weaver-window_en.cweb"
/*:70*/
#line 4598 "weaver-window_en.cweb"

/*72:*/
#line 1520 "weaver-window_en.cweb"

#if defined(_WIN32)
BOOL(__stdcall*wglChoosePixelFormatARB)(HDC,const int*,const FLOAT*,UINT,
int*,UINT*);
HGLRC(*wglCreateContextAttribsARB)(HDC,HGLRC,const int*);
#endif
#line 1526 "weaver-window_en.cweb"
/*:72*//*79:*/
#line 1664 "weaver-window_en.cweb"

#if defined(_WIN32)
GLuint(__stdcall*glCreateShader)(GLenum shaderType);
void(__stdcall*glShaderSource)(GLuint,GLsizei,const GLchar*const*,
const GLint*);
void(__stdcall*glCompileShader)(GLuint);
void(__stdcall*glReleaseShaderCompiler)(void);
void(__stdcall*glDeleteShader)(GLuint);
#endif
#line 1673 "weaver-window_en.cweb"
/*:79*//*84:*/
#line 1744 "weaver-window_en.cweb"

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
#line 1758 "weaver-window_en.cweb"
/*:84*//*92:*/
#line 1880 "weaver-window_en.cweb"

#if defined(_WIN32)
GLuint(__stdcall*glCreateProgram)(void);
void(__stdcall*glAttachShader)(GLuint,GLuint);
void(__stdcall*glDetachShader)(GLuint,GLuint);
void(__stdcall*glLinkProgram)(GLuint);
void(__stdcall*glUseProgram)(GLuint);
void(__stdcall*glDeleteProgram)(GLuint);
#endif
#line 1889 "weaver-window_en.cweb"
/*:92*//*95:*/
#line 1926 "weaver-window_en.cweb"

#if defined(_WIN32)
GLboolean(__stdcall*glIsProgram)(GLuint);
void(__stdcall*glGetProgramiv)(GLuint,GLenum,GLint*);
void(__stdcall*glGetProgramInfoLog)(GLuint,GLsizei,GLsizei*,GLchar*);
void(__stdcall*glValidadeProgram)(GLuint);
#endif
#line 1933 "weaver-window_en.cweb"
/*:95*//*99:*/
#line 1983 "weaver-window_en.cweb"

#if defined(_WIN32)
void(__stdcall*glGetActiveAttrib)(GLuint,GLuint,GLsizei,GLsizei*,GLint*,
GLenum*,GLchar*;)
GLint(__stdcall*glGetAttribLocation)(GLuint,const GLchar*);
void(__stdcall*glBindAttribLocation)(GLuint,GLuint,const GLchar*);
#endif
#line 1990 "weaver-window_en.cweb"
/*:99*//*103:*/
#line 2057 "weaver-window_en.cweb"

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
#line 2082 "weaver-window_en.cweb"
/*:103*//*107:*/
#line 2197 "weaver-window_en.cweb"

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
#line 2212 "weaver-window_en.cweb"
/*:107*//*111:*/
#line 2281 "weaver-window_en.cweb"

#if defined(_WIN32)
void(__stdcall*glGenBuffers)(GLsizei,GLuint*);
void(__stdcall*glDeleteBuffers)(GLsizei,const GLuint*);
void(__stdcall*glBindBuffer)(GLenum,GLuint);
void(__stdcall*glBufferData)(GLenum,GLsizeiptr,const void*,GLenum);
void(__stdcall*glBufferSubData)(GLenum,GLintptr,GLsizeiptr,const void*);
void(__stdcall*glIsBuffer)(GLuint);
void(__stdcall*glGetBufferParameteriv)(GLenum,GLenum,GLint*);
#endif
#line 2291 "weaver-window_en.cweb"
/*:111*//*118:*/
#line 2373 "weaver-window_en.cweb"

#if defined(_WIN32)
void(__stdcall*glDepthRangef)(GLclampf,GLclampf);
#endif
#line 2377 "weaver-window_en.cweb"
/*:118*//*122:*/
#line 2413 "weaver-window_en.cweb"

#if defined(_WIN32)
void(__stdcall*glActiveTexture)(GLenum);
void(__stdcall*glCompressedTexImage2D)(GLenum,int,GLenum,GLsizei,
GLsizei,int,GLsizei,void*);
void(__stdcall*glCompressedTexSubImage2D)(GLenum,int,int,int,GLsizei,
GLsizei,GLenum,GLsizei,
void*);
void(__stdcall*glGenerateMipmap)(GLenum);
#endif
#line 2423 "weaver-window_en.cweb"
/*:122*//*126:*/
#line 2524 "weaver-window_en.cweb"

#if defined(_WIN32)
void(__stdcall*glSampleCoverage)(GLclampf,bool);
void(__stdcall*glStencilFuncSeparate)(GLenum,GLenum,int,unsigned int);
void(__stdcall*glStencilOpSeparate)(GLenum,GLenum,GLenum,GLenum);
void(__stdcall*glBlendEquation)(GLenum);
void(__stdcall*glBlendEquationSeparate)(GLenum,GLenum);
void(__stdcall*glBlendFuncSeparate)(GLenum,GLenum);
void(__stdcall*glBlendColor)(GLclampf,GLclampf,GLclampf,GLclampf);
#endif
#line 2534 "weaver-window_en.cweb"
/*:126*//*130:*/
#line 2617 "weaver-window_en.cweb"

#if defined(_WIN32)
void(__stdcall*glStencilMaskSeparate)(GLenum,unsigned int);
void(__stdcall*glClearDepthf)(GLclampf);
#endif
#line 2622 "weaver-window_en.cweb"
/*:130*//*133:*/
#line 2661 "weaver-window_en.cweb"

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
#line 2681 "weaver-window_en.cweb"
/*:133*//*174:*/
#line 3766 "weaver-window_en.cweb"

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
/*:174*/
#line 4599 "weaver-window_en.cweb"

/*15:*/
#line 398 "weaver-window_en.cweb"

static int window_size_y= 0,window_size_x= 0;
/*:15*//*18:*/
#line 476 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
static Display*display= NULL;
#endif
#line 480 "weaver-window_en.cweb"
/*:18*//*25:*/
#line 648 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
static Window window;
#endif
#line 652 "weaver-window_en.cweb"
/*:25*//*39:*/
#line 931 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
static bool fullscreen_mode= false;
#endif
#line 935 "weaver-window_en.cweb"
/*:39*//*40:*/
#line 948 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
static SDL_Surface*window;
#endif
#line 952 "weaver-window_en.cweb"
/*:40*//*42:*/
#line 969 "weaver-window_en.cweb"

#if defined(_WIN32)
static const char*class_name= "WeaverWindow";
#endif
#line 973 "weaver-window_en.cweb"
/*:42*//*47:*/
#line 1050 "weaver-window_en.cweb"

#if defined(_WIN32)
static bool already_created_a_class= false;
#endif
#line 1054 "weaver-window_en.cweb"
/*:47*//*49:*/
#line 1099 "weaver-window_en.cweb"

#if defined(_WIN32)
static HWND window;
#endif
#line 1103 "weaver-window_en.cweb"
/*:49*//*53:*/
#line 1152 "weaver-window_en.cweb"

static bool already_have_window= false;
/*:53*//*56:*/
#line 1197 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
static EGLDisplay*egl_display;
#endif
#line 1201 "weaver-window_en.cweb"
/*:56*//*58:*/
#line 1240 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
EGLConfig egl_config;
#endif
#line 1244 "weaver-window_en.cweb"
/*:58*//*60:*/
#line 1264 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
static EGLSurface egl_window;
#endif
#line 1268 "weaver-window_en.cweb"
/*:60*//*62:*/
#line 1298 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
static EGLContext egl_context;
#endif
#line 1302 "weaver-window_en.cweb"
/*:62*//*65:*/
#line 1340 "weaver-window_en.cweb"

#if defined(_WIN32)
static HGLRC wgl_context;
static HDC device_context;
#endif
#line 1345 "weaver-window_en.cweb"
/*:65*//*149:*/
#line 3128 "weaver-window_en.cweb"

#if defined(W_WINDOW_SIZE_X) && defined(W_WINDOW_SIZE_Y)
static unsigned last_window_size_x= W_WINDOW_SIZE_X;
static unsigned last_window_size_y= W_WINDOW_SIZE_Y;
#else
#line 3133 "weaver-window_en.cweb"
 static unsigned last_window_size_x= 0;
static unsigned last_window_size_y= 0;
#endif
#line 3136 "weaver-window_en.cweb"
/*:149*//*150:*/
#line 3145 "weaver-window_en.cweb"

static void(*resizing_function)(int,int,int,int)= NULL;
/*:150*//*166:*/
#line 3598 "weaver-window_en.cweb"

static struct{
unsigned key;
unsigned long long time;
}pressed_keys[32];
unsigned released_keys[32];
/*:166*//*187:*/
#line 4122 "weaver-window_en.cweb"

static struct{
unsigned button;
unsigned long long time;
}pressed_buttons[4];
static unsigned released_buttons[4];
/*:187*//*188:*/
#line 4135 "weaver-window_en.cweb"

static int last_mouse_dx= 0,last_mouse_dy= 0;
/*:188*//*189:*/
#line 4155 "weaver-window_en.cweb"

static int mouse_initialization= 3;
/*:189*/
#line 4600 "weaver-window_en.cweb"

/*17:*/
#line 445 "weaver-window_en.cweb"

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
#line 472 "weaver-window_en.cweb"
/*:17*//*19:*/
#line 490 "weaver-window_en.cweb"

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
#line 508 "weaver-window_en.cweb"
/*:19*//*20:*/
#line 518 "weaver-window_en.cweb"

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
#line 530 "weaver-window_en.cweb"
/*:20*//*21:*/
#line 542 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
bool _Wget_screen_dpi(int*dpi_x,int*dpi_y){
*dpi_x= emscripten_get_device_pixel_ratio()*96.0;
*dpi_y= *resolution_x;
return true;
}
#endif
#line 550 "weaver-window_en.cweb"
/*:21*//*23:*/
#line 569 "weaver-window_en.cweb"

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
#line 581 "weaver-window_en.cweb"
/*:23*//*43:*/
#line 982 "weaver-window_en.cweb"

#if defined(_WIN32)
LRESULT CALLBACK WindowProc(HWND window,UINT msg,WPARAM param1,LPARAM param2){
switch(msg){
/*44:*/
#line 998 "weaver-window_en.cweb"

case WM_DESTROY:
PostQuitMessage(0);
return 0;
break;
/*:44*/
#line 986 "weaver-window_en.cweb"

default:
return DefWindowProc(window,msg,param1,param2);
}
}
#endif
#line 992 "weaver-window_en.cweb"
/*:43*//*52:*/
#line 1135 "weaver-window_en.cweb"

bool _Wcreate_window(struct _Wkeyboard*keyboard,struct _Wmouse*mouse){
if(already_have_window==true)
return false;
/*24:*/
#line 616 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
int screen_resolution_x,screen_resolution_y;

XInitThreads();

display= XOpenDisplay(NULL);
if(display==NULL){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Failed to connect to X11 server.\n");
#endif
#line 627 "weaver-window_en.cweb"
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
#line 643 "weaver-window_en.cweb"
/*:24*//*26:*/
#line 664 "weaver-window_en.cweb"

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
#line 675 "weaver-window_en.cweb"
#endif
#line 676 "weaver-window_en.cweb"
/*:26*//*27:*/
#line 690 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
#if defined(W_WINDOW_NO_FULLSCREEN)
{
#if W_WINDOW_SIZE_X >  0
window_size_x= W_WINDOW_SIZE_X;
#else
#line 697 "weaver-window_en.cweb"
 window_size_x= screen_resolution_x;
#endif
#line 699 "weaver-window_en.cweb"
#if W_WINDOW_SIZE_Y >  0
window_size_y= W_WINDOW_SIZE_Y;
#else
#line 702 "weaver-window_en.cweb"
 window_size_y= screen_resolution_y;
#endif
#line 704 "weaver-window_en.cweb"
 XResizeWindow(display,window,window_size_x,window_size_y);
}
#endif
#line 707 "weaver-window_en.cweb"
#endif
#line 708 "weaver-window_en.cweb"
/*:27*//*28:*/
#line 714 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
{
XSizeHints hints;
hints.flags= PMinSize|PMaxSize;
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_SIZE_X >  0
hints.min_width= hints.max_width= W_WINDOW_SIZE_X;
#else
#line 722 "weaver-window_en.cweb"
 hints.min_width= hints.max_width= screen_resolution_x;
#endif
#line 724 "weaver-window_en.cweb"
#if defined(W_WINDOW_NO_FULLSCREEN) && W_WINDOW_SIZE_Y >  0
hints.min_height= hints.max_height= W_WINDOW_SIZE_Y;
#else
#line 727 "weaver-window_en.cweb"
 hints.min_height= hints.max_height= screen_resolution_y;
#endif
#line 729 "weaver-window_en.cweb"
 XSetWMNormalHints(display,window,&hints);
}
#endif
#line 732 "weaver-window_en.cweb"
/*:28*//*30:*/
#line 755 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
XSelectInput(display,window,StructureNotifyMask|KeyPressMask|
KeyReleaseMask|ButtonPressMask|
ButtonReleaseMask|PointerMotionMask);
#endif
#line 761 "weaver-window_en.cweb"
/*:30*//*31:*/
#line 767 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
XStoreName(display,window,W_WINDOW_NAME);
#endif
#line 771 "weaver-window_en.cweb"
/*:31*//*33:*/
#line 784 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
/*55:*/
#line 1181 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
egl_display= eglGetPlatformDisplay(EGL_PLATFORM_X11_KHR,display,
NULL);
if(egl_display==EGL_NO_DISPLAY){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL display.\n");
#endif
#line 1189 "weaver-window_en.cweb"
 return false;
}
eglInitialize(egl_display,NULL,NULL);
#endif
#line 1193 "weaver-window_en.cweb"
/*:55*//*57:*/
#line 1207 "weaver-window_en.cweb"

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
#line 1232 "weaver-window_en.cweb"
 return false;
}
}
/*:57*//*59:*/
#line 1251 "weaver-window_en.cweb"

egl_window= eglCreateWindowSurface(egl_display,egl_config,
window,NULL);
if(egl_window==EGL_NO_SURFACE){
#if defined(W_DEBUG_WINDOW)
fprintf(stderr,"ERROR: Could not create EGL window.\n");
#endif
#line 1258 "weaver-window_en.cweb"
 return false;
}
/*:59*//*61:*/
#line 1276 "weaver-window_en.cweb"

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
#line 1289 "weaver-window_en.cweb"
 return false;
}
eglMakeCurrent(egl_display,egl_window,egl_window,egl_context);
}
/*:61*/
#line 786 "weaver-window_en.cweb"

#endif
#line 788 "weaver-window_en.cweb"
/*:33*//*34:*/
#line 797 "weaver-window_en.cweb"

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
#line 808 "weaver-window_en.cweb"
/*:34*/
#line 1139 "weaver-window_en.cweb"

/*36:*/
#line 842 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
#line 847 "weaver-window_en.cweb"
/*:36*//*37:*/
#line 852 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
SDL_Init(SDL_INIT_VIDEO);
#endif
#line 856 "weaver-window_en.cweb"
/*:37*//*38:*/
#line 867 "weaver-window_en.cweb"

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
#line 885 "weaver-window_en.cweb"
#if defined(W_WINDOW_SIZE_Y) && W_Window_Size_Y >  0
window_size_y= W_Window_Size_Y;
#endif
#line 888 "weaver-window_en.cweb"
#endif
#line 889 "weaver-window_en.cweb"

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
#line 918 "weaver-window_en.cweb"
/*:38*/
#line 1140 "weaver-window_en.cweb"

/*41:*/
#line 958 "weaver-window_en.cweb"

#if defined(_WIN32)
int screen_resolution_x,screen_resolution_y;
_Wget_screen_resolution(&screen_resolution_x,&screen_resolution_y);
#endif
#line 963 "weaver-window_en.cweb"
/*:41*//*45:*/
#line 1012 "weaver-window_en.cweb"

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
#line 1029 "weaver-window_en.cweb"
 return false;
}
already_created_a_class= true;
}
#endif
#line 1034 "weaver-window_en.cweb"
/*:45*//*48:*/
#line 1059 "weaver-window_en.cweb"

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
#line 1074 "weaver-window_en.cweb"
#if defined(W_WINDOW_SIZE_Y) && W_WINDOW_SIZE_Y >  0
window_size_y= W_WINDOW_SIZE_Y;
#endif
#line 1077 "weaver-window_en.cweb"
#endif
#line 1078 "weaver-window_en.cweb"
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
#line 1091 "weaver-window_en.cweb"
 return false;
}
}
#endif
#line 1095 "weaver-window_en.cweb"
/*:48*//*51:*/
#line 1116 "weaver-window_en.cweb"

#if defined(_WIN32)
{
MSG msg;
ShowWindow(window,SW_NORMAL);
do{
GetMessage(&msg,NULL,0,0);
}while(msg.message==WM_CREATE);
}
#endif
#line 1126 "weaver-window_en.cweb"
/*:51*/
#line 1141 "weaver-window_en.cweb"

/*171:*/
#line 3675 "weaver-window_en.cweb"

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
#line 3736 "weaver-window_en.cweb"
/*:171*//*178:*/
#line 3841 "weaver-window_en.cweb"

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
#line 3899 "weaver-window_en.cweb"
/*:178*//*182:*/
#line 3939 "weaver-window_en.cweb"

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
#line 3996 "weaver-window_en.cweb"
/*:182*/
#line 1142 "weaver-window_en.cweb"

_Wflush_window_input(keyboard,mouse);
already_have_window= true;
return true;
}
/*:52*//*137:*/
#line 2817 "weaver-window_en.cweb"

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
#line 2834 "weaver-window_en.cweb"
/*:137*//*138:*/
#line 2842 "weaver-window_en.cweb"

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
#line 2856 "weaver-window_en.cweb"
/*:138*//*139:*/
#line 2863 "weaver-window_en.cweb"

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
#line 2875 "weaver-window_en.cweb"
/*:139*//*140:*/
#line 2904 "weaver-window_en.cweb"

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
#line 2921 "weaver-window_en.cweb"
/*:140*//*141:*/
#line 2936 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
bool _Wrender_window(void){
glFlush();
return true;
}
#endif
#line 2943 "weaver-window_en.cweb"
/*:141*//*142:*/
#line 2951 "weaver-window_en.cweb"

#if defined(_WIN32)
bool _Wrender_window(void){
return wglSwapLayerBuffers(device_context,WGL_SWAP_MAIN_PLANE);
}
#endif
#line 2957 "weaver-window_en.cweb"
/*:142*//*143:*/
#line 2971 "weaver-window_en.cweb"

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
#line 2989 "weaver-window_en.cweb"
/*:143*//*144:*/
#line 2998 "weaver-window_en.cweb"

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
#line 3023 "weaver-window_en.cweb"
/*:144*//*145:*/
#line 3030 "weaver-window_en.cweb"

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
#line 3050 "weaver-window_en.cweb"
/*:145*//*146:*/
#line 3064 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
bool _Wis_fullscreen(void){
XWindowAttributes attributes;
if(!already_have_window||display==NULL)
return false;
XGetWindowAttributes(display,window,&attributes);
return(attributes.override_redirect==true);
}
#endif
#line 3074 "weaver-window_en.cweb"
/*:146*//*147:*/
#line 3084 "weaver-window_en.cweb"

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
#line 3097 "weaver-window_en.cweb"
/*:147*//*148:*/
#line 3106 "weaver-window_en.cweb"

#if defined(_WIN32)
bool _Wis_fullscreen(void){
DWORD window_style= GetWindowLongA(window,GWL_STYLE);
return(window_style&WS_POPUP);
}
#endif
#line 3113 "weaver-window_en.cweb"
/*:148*//*151:*/
#line 3152 "weaver-window_en.cweb"

void _Wset_resize_function(void(*func)(int,int,int,int)){
resizing_function= func;
}
/*:151*//*152:*/
#line 3173 "weaver-window_en.cweb"

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
#line 3235 "weaver-window_en.cweb"

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
#line 3202 "weaver-window_en.cweb"

}
else{
new_size_x= ((last_window_size_x> 0)?(last_window_size_x):(800));
new_size_y= ((last_window_size_y> 0)?(last_window_size_y):(600));
XResizeWindow(display,window,new_size_x,new_size_y);
/*153:*/
#line 3235 "weaver-window_en.cweb"

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
#line 3208 "weaver-window_en.cweb"

}
_Wget_window_size(&new_size_x,&new_size_y);
glViewport(0,0,new_size_x,new_size_y);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,new_size_x,new_size_y);
}
#endif
#line 3216 "weaver-window_en.cweb"
/*:152*//*155:*/
#line 3278 "weaver-window_en.cweb"

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
#line 3323 "weaver-window_en.cweb"
/*:155*//*156:*/
#line 3331 "weaver-window_en.cweb"

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
#line 3359 "weaver-window_en.cweb"
/*:156*//*157:*/
#line 3382 "weaver-window_en.cweb"

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
#line 3235 "weaver-window_en.cweb"

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
#line 3399 "weaver-window_en.cweb"

glViewport(0,0,width,height);
if(resizing_function!=NULL)
resizing_function(old_size_x,old_size_y,width,height);
return true;
}
#endif
#line 3406 "weaver-window_en.cweb"
/*:157*//*158:*/
#line 3415 "weaver-window_en.cweb"

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
#line 3437 "weaver-window_en.cweb"
/*:158*//*159:*/
#line 3446 "weaver-window_en.cweb"

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
#line 3465 "weaver-window_en.cweb"
/*:159*//*162:*/
#line 3531 "weaver-window_en.cweb"

void _Wget_window_input(unsigned long long current_time,
struct _Wkeyboard*keyboard,
struct _Wmouse*mouse){
if(already_have_window==false)
return;
/*186:*/
#line 4103 "weaver-window_en.cweb"

{
int i;
for(i= 0;i<32;i++){
if(released_keys[i]==0)
break;
keyboard->key[released_keys[i]]= 0;
released_keys[i]= 0;
}
}
/*:186*/
#line 3537 "weaver-window_en.cweb"

/*163:*/
#line 3547 "weaver-window_en.cweb"

#if defined(__linux__) || defined(BSD)
XEvent event;
while(XPending(display)){
XNextEvent(display,&event);
/*169:*/
#line 3646 "weaver-window_en.cweb"

if(event.type==KeyPress){
unsigned key= event.xkey.keycode;
/*183:*/
#line 4013 "weaver-window_en.cweb"

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
#line 3649 "weaver-window_en.cweb"

}
/*:169*//*170:*/
#line 3656 "weaver-window_en.cweb"

if(event.type==KeyRelease){
unsigned key= event.xkey.keycode;
/*184:*/
#line 4038 "weaver-window_en.cweb"

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
#line 3659 "weaver-window_en.cweb"

}
/*:170*//*192:*/
#line 4203 "weaver-window_en.cweb"

if(event.type==ButtonPress){
unsigned button= event.xbutton.button;
/*206:*/
#line 4439 "weaver-window_en.cweb"

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
#line 4206 "weaver-window_en.cweb"

}
/*:192*//*193:*/
#line 4215 "weaver-window_en.cweb"

if(event.type==ButtonRelease){
unsigned button= event.xbutton.button;
/*207:*/
#line 4460 "weaver-window_en.cweb"

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
#line 4218 "weaver-window_en.cweb"

}
/*:193*//*194:*/
#line 4225 "weaver-window_en.cweb"

if(event.type==MotionNotify){
int x,y;
x= event.xmotion.x;
y= (window_size_y-1)-event.xmotion.y;
/*210:*/
#line 4534 "weaver-window_en.cweb"

/*211:*/
#line 4560 "weaver-window_en.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4568 "weaver-window_en.cweb"
/*:211*/
#line 4535 "weaver-window_en.cweb"

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
/*:210*/
#line 4230 "weaver-window_en.cweb"

}
/*:194*/
#line 3552 "weaver-window_en.cweb"

}
#endif
#line 3555 "weaver-window_en.cweb"
/*:163*//*164:*/
#line 3560 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
SDL_Event event;
while(SDL_PollEvent(&event)){
/*176:*/
#line 3821 "weaver-window_en.cweb"

if(event.type==SDL_KEYDOWN){
unsigned key= event.key.keysym.scancode;
/*183:*/
#line 4013 "weaver-window_en.cweb"

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
#line 3824 "weaver-window_en.cweb"

}
/*:176*//*177:*/
#line 3830 "weaver-window_en.cweb"

if(event.type==SDL_KEYUP){
unsigned key= event.key.keysym.scancode;
/*184:*/
#line 4038 "weaver-window_en.cweb"

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
#line 3833 "weaver-window_en.cweb"

}
/*:177*//*197:*/
#line 4281 "weaver-window_en.cweb"

if(event.type==SDL_MOUSEBUTTONDOWN){
unsigned button= event.button.button;
/*206:*/
#line 4439 "weaver-window_en.cweb"

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
#line 4284 "weaver-window_en.cweb"

}
/*:197*//*198:*/
#line 4290 "weaver-window_en.cweb"

if(event.type==SDL_MOUSEBUTTONUP){
unsigned button= event.button.button;
/*207:*/
#line 4460 "weaver-window_en.cweb"

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
#line 4293 "weaver-window_en.cweb"

}
/*:198*/
#line 3564 "weaver-window_en.cweb"

}
#endif
#line 3567 "weaver-window_en.cweb"
/*:164*//*165:*/
#line 3572 "weaver-window_en.cweb"

#if defined(_WIN32)
MSG event;
while(PeekMessage(&event,window,WM_KEYFIRST,WM_KEYLAST,PM_REMOVE)){
/*180:*/
#line 3917 "weaver-window_en.cweb"

if(event.message==WM_KEYDOWN){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*183:*/
#line 4013 "weaver-window_en.cweb"

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
#line 3920 "weaver-window_en.cweb"

}
/*:180*//*181:*/
#line 3929 "weaver-window_en.cweb"

if(event.message==WM_KEYUP){
unsigned key= (event.lParam&0x00ff0000)>>16;
/*184:*/
#line 4038 "weaver-window_en.cweb"

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
#line 3932 "weaver-window_en.cweb"

}
/*:181*/
#line 3576 "weaver-window_en.cweb"

}
while(PeekMessage(&event,window,WM_MOUSEFIRST,WM_MOUSELAST,PM_REMOVE)){
/*202:*/
#line 4346 "weaver-window_en.cweb"

if(event.message==WM_LBUTTONDOWN){
unsigned button= W_MOUSE_LEFT;
/*206:*/
#line 4439 "weaver-window_en.cweb"

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
#line 4349 "weaver-window_en.cweb"

}
else if(event.message==WM_MBUTTONDOWN){
unsigned button= W_MOUSE_MIDDLE;
/*206:*/
#line 4439 "weaver-window_en.cweb"

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
#line 4353 "weaver-window_en.cweb"

}
else if(event.message==WM_RBUTTONDOWN){
unsigned button= W_MOUSE_RIGHT;
/*206:*/
#line 4439 "weaver-window_en.cweb"

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
#line 4357 "weaver-window_en.cweb"

}
else if(event.message==WM_XBUTTONDOWN){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*206:*/
#line 4439 "weaver-window_en.cweb"

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
#line 4364 "weaver-window_en.cweb"

}
/*:202*//*203:*/
#line 4372 "weaver-window_en.cweb"

if(event.message==WM_LBUTTONUP){
unsigned button= W_MOUSE_LEFT;
/*207:*/
#line 4460 "weaver-window_en.cweb"

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
#line 4375 "weaver-window_en.cweb"

}
else if(event.message==WM_MBUTTONUP){
unsigned button= W_MOUSE_MIDDLE;
/*207:*/
#line 4460 "weaver-window_en.cweb"

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
#line 4379 "weaver-window_en.cweb"

}
else if(event.message==WM_RBUTTONUP){
unsigned button= W_MOUSE_RIGHT;
/*207:*/
#line 4460 "weaver-window_en.cweb"

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
#line 4383 "weaver-window_en.cweb"

}
else if(event.message==WM_XBUTTONUP){
unsigned button= W_MOUSE_X2;
if((event.wParam>>16)&0x0001){
unsigned button= W_MOUSE_X1;
}
/*207:*/
#line 4460 "weaver-window_en.cweb"

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
#line 4390 "weaver-window_en.cweb"

}
/*:203*//*204:*/
#line 4396 "weaver-window_en.cweb"

if(event.message==WM_MOUSEMOVE){
int x,y;
x= (event.lParam&0xffff);
y= (window_size_y-1)-(event.lParam>>16);
/*210:*/
#line 4534 "weaver-window_en.cweb"

/*211:*/
#line 4560 "weaver-window_en.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4568 "weaver-window_en.cweb"
/*:211*/
#line 4535 "weaver-window_en.cweb"

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
/*:210*/
#line 4401 "weaver-window_en.cweb"

}
/*:204*/
#line 3579 "weaver-window_en.cweb"

}
#endif
#line 3582 "weaver-window_en.cweb"
/*:165*/
#line 3538 "weaver-window_en.cweb"

/*185:*/
#line 4077 "weaver-window_en.cweb"

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
#line 4497 "weaver-window_en.cweb"

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
/*:208*//*209:*/
#line 4516 "weaver-window_en.cweb"

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
#line 3539 "weaver-window_en.cweb"

}
/*:162*//*212:*/
#line 4578 "weaver-window_en.cweb"

void _Wflush_window_input(struct _Wkeyboard*keyboard,
struct _Wmouse*mouse){

_Wget_window_input(~0x0,keyboard,mouse);

/*167:*/
#line 3614 "weaver-window_en.cweb"

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
#line 4584 "weaver-window_en.cweb"


/*190:*/
#line 4163 "weaver-window_en.cweb"

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
#line 4246 "weaver-window_en.cweb"

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
#line 4534 "weaver-window_en.cweb"

/*211:*/
#line 4560 "weaver-window_en.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4568 "weaver-window_en.cweb"
/*:211*/
#line 4535 "weaver-window_en.cweb"

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
/*:210*/
#line 4257 "weaver-window_en.cweb"

}
#endif
#line 4260 "weaver-window_en.cweb"
/*:195*//*200:*/
#line 4311 "weaver-window_en.cweb"

#if defined(__EMSCRIPTEN__)
{
int x,y;
SDL_GetMouseState(&x,&y);

y= (window_size_y-1)-y;
/*210:*/
#line 4534 "weaver-window_en.cweb"

/*211:*/
#line 4560 "weaver-window_en.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4568 "weaver-window_en.cweb"
/*:211*/
#line 4535 "weaver-window_en.cweb"

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
/*:210*/
#line 4318 "weaver-window_en.cweb"

}
#endif
#line 4321 "weaver-window_en.cweb"
/*:200*//*205:*/
#line 4412 "weaver-window_en.cweb"

#if defined(_WIN32)
{
int x,y;
POINT point;

GetCursorPos(&point);

ScreenToClient(window,&point);

x= point.x;
y= (window_size_y-1)-point.y;
/*210:*/
#line 4534 "weaver-window_en.cweb"

/*211:*/
#line 4560 "weaver-window_en.cweb"

#if defined(W_FORCE_LANDSCAPE)
if(window_size_y> window_size_x){
int tmp= window_size_x-x;
x= y;
y= tmp;
}
#endif
#line 4568 "weaver-window_en.cweb"
/*:211*/
#line 4535 "weaver-window_en.cweb"

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
/*:210*/
#line 4424 "weaver-window_en.cweb"

}
#endif
#line 4427 "weaver-window_en.cweb"
/*:205*/
#line 4175 "weaver-window_en.cweb"

}
/*:190*/
#line 4586 "weaver-window_en.cweb"

}
/*:212*/
#line 4601 "weaver-window_en.cweb"

/*:213*/
