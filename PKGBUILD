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
	'1717a706134da05394bb55db764c0138'
	'0bf1d9ded865e01efdaea42c6fb9e9ca')
install='libpww.install'
build() {
	make
}

package() {
	make DESTDIR="${pkgdir}" install
}

