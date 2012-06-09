dnl
dnl  To generate the configure script, call:
dnl    aclocal -I m4
dnl    autoconf
dnl

AC_INIT(alibc, 0.01, alyx@malkier.net)

AC_CONFIG_SRCDIR(src)

AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL

BUILDSYS_SHARED_LIB
BUILDSYS_INIT
BUILDSYS_TOUCH_DEPS

AC_CONFIG_FILES(buildsys.mk)
AC_OUTPUT
