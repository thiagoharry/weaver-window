 # weaver-window

* Dependencies

To compile and use on Linux you need the X11 and OpenGL ES
libraries. In Ubuntu, for example, these library is installed with
packages ``libx11-dev'' and ``libgles2-mesa-dev''.

* OpenGL Version

By default it enables OpenGL ES 3.0 on Linux and X11 based systems. On
Web Browsers after compiling with Emscripten, it enables Open GL ES
2.0 (WebGL 1.0).

On Windows, as we do not have the same guarantee about the presence of
OpenGL ES, it tries to create an OpenGL 4.1 context and enables only
the functions present in OpenGL ES 2.0.

To create portable programs, you should use OpenGL ES 2.0 functions,
even if you are running in a system with additional functions and
extensions.