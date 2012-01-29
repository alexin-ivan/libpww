CC=gcc
LD=ld
CFLAGS=-O3 -std=c99 -fPIC
libpww.so: libpww.o
	$(LD) -shared -soname libpww.so -o $@ -lc libpww.o
libpww.o: libpww.c libpww.h
	$(CC) $(CFLAGS) -c libpww.c -o $@
install:
	install -Dm 0755 libpww.so $(DESTDIR)/usr/lib/libpww.so
	install -Dm 0644 libpww.h $(DESTDIR)/usr/include/libpww.h
	install -Dm 0644 COPYING $(DESTDIR)/usr/share/doc/libpww/COPYING
clean:
	rm -f libpww.o
	rm -f libpww.so
