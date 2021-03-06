/*
 * PythonBot - A game by a developer for developers.
 * Copyright (C) 2015 Jean-Marie BARAN (jeanmarie.baran@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Refer to 'LICENSE.txt' for the full notice.
 */

#ifndef OBJECT__HEADER
#define OBJECT__HEADER

#include <SFML/Graphics.hpp>

class Object
{
public:
  virtual ~Object();
  virtual sf::Vector2f const& get_position() const = 0;
  virtual sf::Shape const& get_SFML_shape() const = 0;
  
  /* Return the euclidean distance to another object (from centroid to centroid). */
  float distance(Object *object) const;
};

#endif
