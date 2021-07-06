report:
	magitex-cweb weaver-window.tex
	dvipdf weaver-window.dvi
doc_en:
	tex weaver-window_en.tex
	dvipdf weaver-window_en.dvi
src/window.h: weaver-window.tex
	ctangle weaver-window.tex
	rm weaver-window.c
src/window.c: weaver-window.tex
	ctangle weaver-window.tex
	rm weaver-window.c
test:
	ctangle weaver-window.tex
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -Wall -O2 tests/test.c src/window.c  -o test_window -lX11 -lEGL -lGLESv2
	./test_window
test_en:
	ctangle weaver-window_en.tex
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -Wall -O2 tests/test.c src/window.c  -o test_window -lX11 -lEGL -lGLESv2
	./test_window
test_web:
	ctangle weaver-window.tex
	emcc $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -s FULL_ES2=1 -s ASYNCIFY=1 -Wall -O2 tests/test.c src/window.c  -o docs/test_window.html
test_web_en:
	ctangle weaver-window_en.tex
	emcc $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -s FULL_ES2=1 -s ASYNCIFY=1 -Wall -O2 tests/test.c src/window.c  -o docs/test_window.html
clean:
	rm -f *~ *.core *.scn *.dvi *.idx *.log tests/*~ test_window
distclean: clean
	rm -f test_* weaver-memory-manager.pdf src/*

