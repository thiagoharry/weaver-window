report:
	magitex-cweb weaver-window.cweb
	dvipdf weaver-window.dvi
doc_en:
	tex weaver-window_en.cweb
	dvipdf weaver-window_en.dvi
src/window.h: weaver-window.cweb
	ctangle weaver-window.cweb
	rm weaver-window.c
src/window.c: weaver-window.cweb
	ctangle weaver-window.cweb
	rm weaver-window.c
test:
	ctangle weaver-window.cweb
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -g -Wall -O2 tests/test.c src/window.c  -o test_window -lX11 -lEGL -lGLESv2
	./test_window
test_en:
	ctangle weaver-window_en.cweb
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -Wall -O2 tests/test.c src/window.c  -o test_window -lX11 -lEGL -lGLESv2
	./test_window
test_web:
	ctangle weaver-window.cweb
	emcc  $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -s MIN_WEBGL_VERSION=2 -s MAX_WEBGL_VERSION=2 -s FULL_ES3=1 -s ASYNCIFY=1 -Wall -O2 tests/test.c src/window.c  -o docs/test_window.html
test_web_en:
	ctangle weaver-window_en.cweb
	emcc $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -s MIN_WEBGL_VERSION=2 -s MAX_WEBGL_VERSION=2 -s FULL_ES3=1 -s ASYNCIFY=1 -Wall -O2 tests/test.c src/window.c  -o docs/test_window.html
clean:
	rm -f *~ *.core *.scn *.dvi *.idx *.log tests/*~ test_window
distclean: clean
	rm -f test_* weaver-memory-manager.pdf src/*
