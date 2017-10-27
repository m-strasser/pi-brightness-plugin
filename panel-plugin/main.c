#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <libxfce4panel/xfce-panel-plugin.h>
#include <gtk/gtk.h>

static void plugin_construct (XfcePanelPlugin *plugin);

XFCE_PANEL_PLUGIN_REGISTER_EXTERNAL (plugin_construct);

static void plugin_construct (XfcePanelPlugin *plugin) {
	GtkWidget *scale;
	scale = gtk_scale_new();
	gtk_widget_show(scale);
	gtk_container_add(GTK_CONTAINER(plugin), scale);
	xfce_panel_plugin_add_action_widget (plugin, scale);
}

int main (int argc, char **argv)
{
	xfce_textdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR, "UTF-8");
	g_print (_("Hello World!\n"));
	return 0;
}
