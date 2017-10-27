dnl Version information
m4_define([pi_brightness_version_major], [0])
m4_define([pi_brightness_version_minor], [0])
m4_define([pi_brightness_version_micro], [1])
m4_define([pi_brightness_version], [pi_brightness_version_major().pi_brightness_version_minor().pi_brightness_version_micro()])

dnl Initialize autoconf
AC_COPYRIGHT([None])
AC_INIT([pi_brightness], [pi_brightness_version()], [me@you.com])

dnl Initialize automake
AM_INIT_AUTOMAKE([AC_PACKAGE_TARNAME()], [AC_PACKAGE_VERSION()])
AM_CONFIG_HEADER([config.h])
AM_MAINTAINER_MODE()

dnl check for basic programs
AC_PROG_CC()
AC_PROG_INSTALL()
AC_PROG_LIBTOOL()

dnl Check for i18n support
XDT_I18N([de])

dnl Check for required packages
XDT_CHECK_PACKAGE([LIBXFCE4PANEL], [libxfce4panel-1.0], [4.3.99.2])
XDT_CHECK_PACKAGE([GTK], [gtk+-3.0], [3.0])

AC_OUTPUT([
Makefile
panel-plugin/Makefile
po/Makefile.in
])
