# Maintainer: Oleksandr Natalenko aka post-factum <pfactum@gmail.com>
pkgname=libpww
pkgver=0.0.1
pkgrel=1
pkgdesc="POSIX threads workers wrapper shared library"
url="http://libpww.natalenko.name/"
arch=('i686' 'x86_64')
license=('GPLv3')
depends=('glibc')
makedepends=('gcc')
source=("COPYING"
	"Makefile"
	"libpww.c"
	"libpww.h")

md5sums=('d32239bcb673463ab874e80d47fae504'
         '82c766a4e8a78fa66faabf50c78f5899'
         '85a32ecc6e015bb6681b3659c357257f'
         'b19bf4da61af163e40daf7cbc8c39d34')

install='libpww.install'
build() {
	make
}

package() {
	make PREFIX=/usr DESTDIR="${pkgdir}" install
}

