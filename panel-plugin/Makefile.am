INCLUDES =
				DG_LOG_DOMAIN=\"xfce4-pi-brightness-plugin\"
				DPACKAGE_LOCALE_DIR=\"$(localedir)\"
				I$(top_srcdir)

plugindir = /home/user/pi/.libs/
plugin_LTLIBRARIES = libpibrightness.la

libpibrightness_la_SOURCES =
				main.c

libpibrightness_la_CFLAGS =
				$(DBUS_CFLAGS)
				$(LIBXFCEPANEL4_CFLAGS)

libpibrightness_la_LDFLAGS =
				$(DBUS_LIBS)
				$(LIBXFCEPANEL4_LIBS)
