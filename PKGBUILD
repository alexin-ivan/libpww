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
         '2bd1c6fe22f38fc1b7fc9364cf83e0f7'
         '804cf1efa1bf98fd86e7bfe268c1581b'
         '0f3bcf511c2e8fe7d323bf9b0271df59')

install='libpww.install'
build() {
	make
}

package() {
	make DESTDIR="${pkgdir}" install
}

