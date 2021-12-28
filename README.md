 # weaver-window

This project is part of [Weaver Game
Engine](https://github.com/thiagoharry/weaver). It creates a window
that could be toggled between fullscreen and windowed mode, support
OpenGL ES 2.0 functions and can read as input the keyboard and
mouse. About the mouse, you can read its position, velocity and
acceleration. About the keys and buttons, you can detect when they are
pressed, released and also for how much time it is being pressed or
was pressed before being released.

Despite being part of the Weaver Game Engine, it can be integrated in
other projects. This is only a library with two files:
[weaver.c](https://github.com/thiagoharry/weaver-window/blob/master/src/window.c)
and
[weaver.h](https://github.com/thiagoharry/weaver-window/blob/master/src/window.h).

This is written in Literary Programming. And the code is tested on
Linux, Open BSD, Windows 10 and Web Assembly. Therefore, if you plan
to study how this library works, you can read the full source code
with additional text explanations in
[weaver-window_en.pdf](https://github.com/thiagoharry/weaver-window/blob/master/weaver-window.pdf)
(engish version) or in
[weaver-window_en.pdf](https://github.com/thiagoharry/weaver-window/blob/master/weaver-window.pdf)
(portuguese version).

This code is licensed under GNU Affero Gneral Public Licence v. 3. See
the LICENSE file.

## Sample Usage

    #include "window.h"
    #include <time.h>

    static struct _Wkeyboard keyboard;
    static struct _Wmouse mouse;

    int main(int argc, char **argv){
      _Wcreate_window(&keyboard, &mouse);
      // Create a fullscreen window that exits if the user press the ESC key for
      // 2 or more seconds.
      do{
        // You can call OpenGL functions here.
        _Wget_window_input(time(NULL), &keyboard, &mouse);
        _Wrender_window();
    #if defined(__EMSCRIPTEN__)
        emscripten_sleep(10);
    #endif
      } while(keyboard.key[W_ESC] < 2);
      _Wdestroy_window();
    }

## Dependencies

To compile and use on Linux you need the X11 and OpenGL ES
libraries. In Ubuntu, for example, these library is installed with
packages ``libx11-dev'' and ``libgles2-mesa-dev''.

## OpenGL Version

By default it enables OpenGL ES 3.0 on Linux and X11 based systems. On
Web Browsers after compiling with Emscripten, it enables Open GL ES
2.0 (WebGL 1.0).

On Windows, as we do not have the same guarantee about the presence of
OpenGL ES, it tries to create an OpenGL 4.1 context and enables only
the functions present in OpenGL ES 2.0.

To create portable programs, you should use OpenGL ES 2.0 functions,
even if you are running in a system with additional functions and
extensions. If compiling to Web Assembly, also read the documentation
to see if additional compilation flags are needed depending of your
OpenG usage.

## Reference

### Data Structures

#### Keyboard Struct

    struct _Wkeyboard{
      long key[W_KEYBOARD_SIZE + 1];
    };

If you have a window, you can detect keyboard interactions with this
structure. You should use a single keyboard struct for each
window. Each physical key is mapped to a position in the key
vector. The number in each position gives information about each key
state:

* If the number is 0, this means that the key is not being pressed.
* If the number is 1, this means that the user began pessing this key now.
* If the number is >1, the key is being pressed and the number is how long time the user is pressing the key.
* If the number is <0, the key was released now and the opposite of such number is how long the key was pressed before being released.

The following global variables can be used to get the position
associated with each key:

    int W_BACKSPACE, W_TAB, W_ENTER, W_UP, W_DOWN, W_LEFT, W_RIGHT, W_0, W_1,
           W_2, W_3, W_4, W_5, W_6, W_7, W_8, W_9, W_MINUS, W_PLUS, W_F1, W_F2,
           W_F3, W_F4, W_F5, W_F6, W_F7, W_F8, W_F9, W_F10, W_F11, W_F12,
           W_LEFT_SHIFT, W_RIGHT_SHIFT, W_LEFT_ALT, W_RIGHT_ALT, W_LEFT_CTRL,
           W_RIGHT_CTRL, W_SPACE, W_A, W_B, W_C, W_D, W_E, W_F, W_G, W_H, W_I,
           W_J, W_K, W_L, W_M, W_N, W_O, W_P, W_Q, W_R, W_S, W_T, W_U, W_V, W_W,
           X_X, W_Y, W_Z, W_INSERT, W_HOME, W_PAGE_UP, W_DELETE, W_END,
           W_PAGE_DOWN, W_ESC, W_ANY;

The key `W_ANY` represents any key. And its position stores only 0 (if
none key is being pressed) or 1 (is some key is being pressed).

#### Mouse Struct

    struct _Wmouse{
      long button[W_MOUSE_SIZE];
      int x, y, dx, dy, ddx, ddy;
    };

If you have a window, you can detect mouse interactions with this
structure. You should use a single mouse struct for each window. Each
physical button is mapped to a position in the button vector. The
number in each position gives information about each key state:

* If the number is 0, this means that the button is not being pressed.
* If the number is 1, this means that the user began pessing this button now.
* If the number is >1, the button is being pressed and the number is how long time the user is pressing the button.
* If the number is <0, the button was released now and the opposite of such number is how long the button was pressed before being released.

The following macros can be used to get the position associated with
each button: `W_MOUSE_LEFT`, `W_MOUSE_RIGHT`, `W_MOUSE_MIDDLE`,
`W_MOUSE_X1`, `W_MOUSE_X2`.

The variables `x` and `y` stores the mouse pointer position. The
variables `dx` and `dy` are the pointer velocity. And the variables
`ddx` and `ddy` are the pointer acceleration.

Mouse coordinates are measured in pixels and use the lower left corner
as the origin.

### Functions

#### Creating the Window

    bool _Wcreate_window(struct _Wkeyboard *keyboard, struct _Wmouse *mouse);

This creates a window and return if the opperation was
successfull. Only 1 window can exist at a given moment, so this
function will fail if called more than once before destroying the
previously created window.

By default, the window will be in fullscreen mode. This can be changed
defining the macro `W_WINDOW_NO_FULLSCREEN` (see below).

The mouse and keyboard structures are initialized for the created
window.

#### Destroying the Window

    bool _Wdestroy_window(void);

This closes the window and return if the operation was successful. It
fails if we have no window created.

#### Rendering the Window

    bool _Wrender_window(void);

You should call this after each iteraction of the main loop of your
program. This renders in the screen any OpenGL code called in the
loop.

#### Getting Screen Resolution

    bool _Wget_screen_resolution(int *resolution_x, int *resolution_y);

Get the screen resolution and stores in the given pointers. If you
have more than one screen, this function returns what your system
recognizes as the main screen. It returns if the operation was
successful.

#### Getting Window Size

    bool _Wget_window_size(int *width, int *height);

It stores in the given pointers the window size in pixels. And returns
if this was done successfully.

#### Getting Window Input

    void _Wget_window_input(unsigned long long current_time, struct _Wkeyboard *keyboard, struct _Wmouse *mouse);

Updates the mouse and keyboard data sctructures. You should call this
function in each iteration of your main loop. You should pass as
argument the current time. In the sample code above in the beginning
of this page, we chose to pass the current time in seconds as returned
by the `time` function. We did so to keep the exampe simple. But in
real programs probably you want to measure the time in more
granularity than in seconds.

A good choice is measuring the time in microseconds using system
libraries. This will give you more precision measuring the time spent
 pressing each key or button.

#### Flushing Window Input

    void _Wflush_window_input(struct _Wkeyboard *keyboard, struct _Wmouse *mouse);

This cleans the mouse and keyboard structures. You should call it
before entering a new main loop. It is also useful to call it when you
spent some time without calling the `_Wget_window_input` function and
do not want to bother with all the accumulated user input.

#### Checking Fullscreen

    bool _Wis_fullscreen(void);

This returns if we are in a fullscreen window.

#### Toggling Fullscreen

    void _Wtoggle_fullscreen(void);

This function alternates between fullscreen and windowed mode.

#### Resizing Window

    bool _Wresize_window(int width, int height);

Resizes the window if we are in windowed mode (do not work on the
fullscreen mode). The function returns if it succeeds.

#### Custom Operations After Resizing

    void _Wset_resize_function(void (*func)(int, int, int, int));

The argument is a pointer to a function that should be executed each
time the window size changes. Which is after calling the function
`_Wresize_window` or `_Wtoggle_fullscreen`.

The function gets as argument the old window width, the old window
height, the new window width and the new window height in this order.

You can pass NULL if you do not want to execute any custom operation
after resizing.

This function is useful if you want to keep your interface with the
same proportions after resizing, for example.

### Macro Configuration

Defining the following macros can change this library default
behaviour:

* `W_DEBUG_WINDOW`: Additional messages are printed in the screen in
  case of error.
* `W_WINDOW_NAME`: The window name. To be shown in the title bar.
* `W_WINDOW_NO_FULLSCREEN`: If defined, all new windows begin in
  windowed mode, not in fullscreen mode.
* `W_WINDOW_SIZE_X`: De default window width when creating a
  non-fullscreen window.
* `W_WINDOW_SIZE_Y`: De default window height when creating a
  non-fullscreen window.
* `W_FORCE_LANDSCAPE`: If this macro is defined and if the window
  height is greater than window width, we swap coordinates x and y
  whem measuring mouse position.