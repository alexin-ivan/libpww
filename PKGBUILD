# Maintainer: Oleksandr Natalenko aka post-factum <pfactum@gmail.com>
pkgname=libpww
pkgver=0.0.1
pkgrel=1
pkgdesc="POSIX threads workers wrapper shared library"
url="http://libpww.natalenko.name/"
arch=('i686')
license=('GPLv3')
depends=('glibc')
makedepends=('gcc')
source=("COPYING"
	"Makefile"
	"libpww.c"
	"libpww.h")

md5sums=('d32239bcb673463ab874e80d47fae504'
         '82c766a4e8a78fa66faabf50c78f5899'
         'f5808926e37d1fcd8cbff2215a2ecee3'
         'b19bf4da61af163e40daf7cbc8c39d34')

install='libpww.install'
build() {
	make
}

package() {
	make PREFIX=/usr DESTDIR="${pkgdir}" install
}

