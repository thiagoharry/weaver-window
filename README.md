# weaver-window

* Dependencies

To compile and use on Linux you need the X11 and OpenGL ES
libraries. In Ubuntu, for example, these library is installed with
packages ``libx11-dev'' and ``libgles2-mesa-dev''.

On Windows you need to link this API with User32.lib, Gdi32.lib and
Opengl32.lib.

* OpenGL Version

By default it enables OpenGL ES 3.0 on Linux and X11 based systems. On
Web Browsers after compiling with Emscripten, it enables Open GL ES
2.0 (WebGL 1.0).

On Windows, as WGL do not let us choose specific versions and do not
support Open GL ES, we use the default OpenGL version. Testing on
Windows 10, it is Open GL 4.0.

To create portable programs, you should use OpenGL ES 2.0 functions,
even if you are running in a system with additional functions and
extensions.