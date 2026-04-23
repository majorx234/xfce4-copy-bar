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

#include "dock.hpp"
#include "settings.hpp"

namespace Dock {
GtkWidget* mBox;
int mPanelSize;
int mIconSize;

void init() {
  mBox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
  gtk_widget_set_name(mBox, "copybar-plugin");

  if (Settings::dockSize)
    gtk_widget_set_size_request(mBox, Settings::dockSize, -1);

  gtk_widget_show(mBox);
}

void onPanelResize(int size) {
  if (size != -1)
    mPanelSize = size;

  gtk_box_set_spacing(GTK_BOX(mBox), mPanelSize / 10);

  if (Settings::forceIconSize) {
    mIconSize = Settings::iconSize;
  } else {
    if (mPanelSize <= 20)
      mIconSize = mPanelSize - 6;
    else if (mPanelSize <= 28)
      mIconSize = 16;
    else if (mPanelSize <= 38)
      mIconSize = 24;
    else if (mPanelSize <= 41)
      mIconSize = 32;
    else
      mIconSize = mPanelSize * 0.8;
  }

  // mGroups.forEach([](std::pair<std::shared_ptr<CopyItem>, std::shared_ptr<Group>> g) -> void { g.second->resize(); });
}

void onPanelOrientationChange(GtkOrientation orientation) {
  gtk_orientable_set_orientation(GTK_ORIENTABLE(mBox), orientation);
  if (Settings::dockSize)
  {
    if (orientation == GTK_ORIENTATION_HORIZONTAL)
      gtk_widget_set_size_request(mBox, Settings::dockSize, -1);
    else
      gtk_widget_set_size_request(mBox, -1, Settings::dockSize);
  }
}

} // namespace Dock

