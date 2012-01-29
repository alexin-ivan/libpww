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
source=("Makefile"
	"libpww.c"
	"libpww.h")
md5sums=('4b3f890eb1baabfc8b8ca94b75c89df1'
	'8e74460821d2041fbe5e568797b09ced'
	'286bdaef7fa68353934f76c863e7511c')
install='libpww.install'
build() {
	make
}

package() {
	make DESTDIR="${pkgdir}" install
}

