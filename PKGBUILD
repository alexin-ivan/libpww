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
         'e308735213b569de84124ba9da8a1510'
         'cce920932bb71bd958e4513cfa7d5680'
         'c57a044fa2c1bea64599fff90ba16c18')

install='libpww.install'
build() {
	make
}

package() {
	make PREFIX=/usr DESTDIR="${pkgdir}" install
}

