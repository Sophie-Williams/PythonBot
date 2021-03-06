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

#include "Bullet.h"

float const Bullet::bulletSpeed;

Bullet::Bullet(Bot *botOrigin, unsigned int radius, sf::Color color) : Circle(0, 0, radius, sf::Color::Transparent), m_direction(botOrigin->get_direction()), m_botOrigin(botOrigin) 
{
  m_SFMLShape.setPosition(botOrigin->get_v1() + (2.0f + radius / 2.0f) * botOrigin->get_direction()); // +2.0f : to avoid self intersection with its own bot.
  m_SFMLShape.setOutlineThickness(-1.5f);
  m_SFMLShape.setOutlineColor(color);
}

Bot*
Bullet::get_bot_origin() const
{
  return m_botOrigin;
}

void
Bullet::move()
{
  m_SFMLShape.move(bulletSpeed * m_direction);
}
