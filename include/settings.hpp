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

#ifndef  SETTINGS_HPP_
#define  SETTINGS_HPP_

#include <glib.h>
#include <list>
#include <string>

namespace Settings {
void init();
void finalize();

void saveFile();

const int minIconSize = 16;
const int maxIconSize = 128;
const bool forceIconSize = true;
const int iconSize = 20;
const int dockSize = 0;
} // namespace Settings


#endif // SETTINGS_HPP_
