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