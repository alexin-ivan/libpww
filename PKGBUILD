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
         'bf301f4c2dbcfa16813de475ef8e306f'
         'c79c02614aa89fcad501baed2a20a6e9')

install='libpww.install'
build() {
	make
}

package() {
	make PREFIX=/usr DESTDIR="${pkgdir}" install
}

