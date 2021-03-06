DESTDIR?=
PREFIX?=/usr/local
CC=gcc
CFLAGS=-O3 -std=c99 -fPIC -W -Wall -pedantic
ifeq ($(shell uname), Darwin)
	LIBSUFFIX?=dylib
else
	LIBSUFFIX?=so
endif
libpww.$(LIBSUFFIX): libpww.o
	$(CC) -shared -lc libpww.o -o $@
libpww.o: libpww.c libpww.h
	$(CC) $(CFLAGS) -c libpww.c -o $@
install:
	install -Dm 0755 libpww.$(LIBSUFFIX) $(DESTDIR)$(PREFIX)/lib/libpww.$(LIBSUFFIX)
	install -Dm 0644 libpww.h $(DESTDIR)$(PREFIX)/include/libpww.h
	install -Dm 0644 COPYING $(DESTDIR)$(PREFIX)/share/doc/libpww/COPYING
clean:
	rm -f libpww.o
	rm -f libpww.$(LIBSUFFIX)
