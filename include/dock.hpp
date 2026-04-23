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

#ifndef  DOCK_HPP_
#define  DOCK_HPP_

#include <gtk/gtk.h>
#include <libxfce4windowing/libxfce4windowing.h>

namespace Dock {
void init();
void onPanelResize();
void onPanelOrientationChange(GtkOrientation orientation);
}

#endif // DOCK_HPP_
