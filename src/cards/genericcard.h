/***************************************************************************
 *   Copyright (C) 2007 by                                                 *
 *   Lisandro Dami�n Nicanor P�rez Meyer - perezmeyer en/at gmail.com      *
 *   Gustavo Gonz�lez - gonzalgustavo en/at gmail.com                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef GENERICCARD_H
#define GENERICCARD_H

#include <QString>

class GenericCard
{
public:
	virtual ~GenericCard() {};
	/// Returns the string that forms the card description
	virtual QString getCard() = 0;
	/// Returns the type of card
	virtual QString getCardType();

protected:
	QString cardType;
};

#endif // GENERICCARD_H
