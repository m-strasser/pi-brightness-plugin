#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-plugin.h>
#include <libxfce4util/libxfce4util.h>

static void plugin_construct (XfcePanelPlugin *plugin);

XFCE_PANEL_PLUGIN_REGISTER_EXTERNAL (plugin_construct);

static void plugin_construct (XfcePanelPlugin *plugin) {
	GtkWidget *scale;
	scale = gtk_scale_new(xfce_panel_plugin_get_orientation(plugin), NULL);
	gtk_widget_show(scale);
	gtk_container_add(GTK_CONTAINER(plugin), scale);
	xfce_panel_plugin_add_action_widget (plugin, scale);
}
