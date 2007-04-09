/***************************************************************************
 *   Copyright (C) 2007 by                                                 *
 *   Lisandro Dami�n Nicanor P�rez Meyer - perezmeyer en/at gmail.com      *
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

#include "grcard.h"

GRCard::GRCard(int theTagNumberIncrement, int theNumberOfOcurrencies)
{
	tagNumberIncrement = theTagNumberIncrement;
	numberOfOcurrencies = theNumberOfOcurrencies;
	cardType = "GR";
}

int GRCard::getTagNumberIncrement() const
{
	return tagNumberIncrement;
}

int GRCard::getNumberOfOcurrencies() const
{
	return numberOfOcurrencies;
}

QString GRCard::getCard()
{
	return cardType + QString(" %1 %2\n")
	       .arg(tagNumberIncrement)
	       .arg(numberOfOcurrencies);
}






