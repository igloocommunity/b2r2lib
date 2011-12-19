.PHONY: clean build libblt_hw.so
IDIR =./include
CC=gcc
CFLAGS=-I$(IDIR) -I$(KDIR)

SDIR=./src

LIBS=-lpthread

default: build

blt_b2r2.o: $(SDIR)/blt_b2r2.c
	gcc -fPIC -g -c -o $@ $^ $(CFLAGS)

libblt_hw.so: blt_b2r2.o
	gcc -shared -Wl,-soname,libblt_hw.so.1 -o libblt_hw.so.1.0 $^ $(LIBS)

build: libblt_hw.so

install:
	mkdir -p $(DESTDIR)/usr/lib
	find . -name "*.so*"
	cp *.so* $(DESTDIR)/usr/lib/
	ln -s /usr/lib/libblt_hw.so.1.0 $(DESTDIR)/usr/lib/libblt_hw.so.1
	ln -s /usr/lib/libblt_hw.so.1 $(DESTDIR)/usr/lib/libblt_hw.so

	mkdir -p $(DESTDIR)/usr/include
	cp $(IDIR)/*.h $(DESTDIR)/usr/include
clean:
	rm -f *.o *.so.*

