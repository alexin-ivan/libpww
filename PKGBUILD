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
	'd70796faa6b0b7d7deae977580984e5f'
	'37139c8f4e5d0aa193b6211912252328'
	'e44613603df72b368857cbb70a60f0b7')
install='libpww.install'
build() {
	make
}

package() {
	make DESTDIR="${pkgdir}" install
}

