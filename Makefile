report:
	magitex-cweb weaver-window.tex
	dvipdf weaver-window.dvi
doc_en:
	tex weaver-window_en.tex
	dvipdf weaver-window_en.dvi
src/window.h: weaver-window.tex
	ctangle weaver-window.tex
	rm weaver-window.c
test: tests/test.c src/window.h
	$(CC) $(CFLAGS) -Wall -O2 tests/test.c  -o test_window
	./test_window
clean:
	rm -f *~ *.core *.scn *.dvi *.idx *.log tests/*~ test_window
distclean: clean
	rm -f test_* weaver-memory-manager.pdf src/*

