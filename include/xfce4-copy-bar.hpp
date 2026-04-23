/*
 *  xfce4-copy-bar
 *  Copyright (C) 2026  majorx234
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _XFCE4_COPY_BAR_H_
#define  _XFCE4_COPY_BAR_H_

#include <libxfce4panel/libxfce4panel.h>
#include <libxfce4ui/libxfce4ui.h>
#include <libxfce4util/libxfce4util.h>

G_BEGIN_DECLS

typedef struct XFCE4CopyBarPlugin {
    XfcePanelPlugin *plugin;

    GtkWidget       *ebox;
    GtkWidget       *hvbox;
    GtkWidget       *label;

    GdkDevice* mPointer;
    GdkDisplay* mDisplay;
    /* sample settings */
    GtkWidget       *settings_dialog;
    gchar           *setting1;
    gint             setting2;
    gboolean         setting3;
} XFCE4CopyBarPlugin;

void xfce4_copy_bar_save(XfcePanelPlugin *plugin, XFCE4CopyBarPlugin *sample);

G_END_DECLS

#endif // _XFCE4_COPY_BAR_H_
